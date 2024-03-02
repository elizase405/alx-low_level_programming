## C project folder
// CO7605 Software Exploitation (AY 2023-24)
//    Assessment Component 2 (Portfolio)
//      - Exercise 2: Stack Overflow and Direct Code Execution
// Header File
#include <stdio.h>       // for printf()
#include <unistd.h>      // for read() and write()
#include <stdlib.h>      // for exit()
#include <string.h>      // for memset() and strlen()

#include <sys/types.h> 
#include <sys/socket.h>
#include <netinet/in.h>

struct sockaddr_in  cli_addr;
unsigned int        clilen = sizeof(cli_addr);


void error(char *msg)
{
    perror(msg);
    exit(1);
}


int create_socket(int portno)
{
    int sockfd;
    struct sockaddr_in serv_addr;
    int b;  // result of bind()

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd < 0)
        error("ERROR opening socket");

    memset( (char *) &serv_addr, 0, sizeof(serv_addr));
 
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_addr.s_addr = INADDR_ANY;
    serv_addr.sin_port = htons(portno);

    b = bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr));
    if (b < 0) error("ERROR on binding");

    listen(sockfd, 5);

    return sockfd;
}


int accept_connection(int sockfd)
{
    return accept( sockfd, (struct sockaddr *) &cli_addr, &clilen);
}






// CO7605 Software Exploitation (AY 2023-24)
//    Assessment Component 2 (Portfolio)
//      - Exercise 2: Stack Overflow and Direct Code Execution
// Main File
#include "co7605_portfo_ex2.h"

#define MAX_DATA_SIZE  256


void serve_welcome_response(int the_connection)
{
    char buffer[32];          // buffer to hold the client's name

    memset(buffer, 0, 32);    // Clear the buffer for receiving

    // Send the query to the client...
    write(the_connection, "Please enter your name: ", 24);

    // Get the client's name...
    read(the_connection, buffer, MAX_DATA_SIZE);

    // Print the received message locally...
    printf("Message received: ");
    printf(buffer);
    printf("\n");

    // Send the message back to the client to welcome them...
    write(the_connection, "Welcome ", 8);      // Send 8 characters 
    write(the_connection, buffer, strlen(buffer));

    return;
}


int server_loop(int port_number)
{
    int  sockfd, newsockfd;
    char some_space[48];

    // Establish a socket for this server to listen on...
    sockfd = create_socket(port_number);

    for (;;) {   // Loop forever

        // Accept a new connection - get a 'new socket fd' to handle it...
        newsockfd = accept_connection(sockfd);

        // serve the client...
        serve_welcome_response(newsockfd);

        // We've now finished with this 'new socket file descriptor'
        close(newsockfd);
    }
}


int main(int argc, char *argv[])
{
    char some_space[64];
    int port_number;

    if (argc < 2) {
        printf("ERROR: no port provided\n");
        exit(-1);
    }
    else
    {
        // Get the port number as provided on the command line...
        port_number = atoi(argv[1]);

        server_loop(port_number);
    }
}
