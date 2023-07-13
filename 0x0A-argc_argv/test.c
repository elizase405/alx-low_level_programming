#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	printf("9e8: %d ", atoi("9e8"));
	printf("98: %d ", atoi("98"));
	printf("9: %d ", atoi("9"));
	printf("e: %d ", atoi("e"));
	printf("8: %d ", atoi("8"));
	printf("e8: %d\n", atoi("e8"));
	return (0);
}
