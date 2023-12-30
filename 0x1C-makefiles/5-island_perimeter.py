#!/usr/bin/python3

"""
5-island_perimeter:
    1 function - island_perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
    Args: grid
    """

    widths = [] # stores the columns where a 1 appear
    length = 0

    for row in grid:
        if 1 in row:        # for each row we need just one 1 to get a length
            length += 1     # so if there is one 1 in a row, length increase
        column = 0
        for val in row:
            column += 1     # for each iteration, we move to a new column, column tells us what column we are in
            if val == 1:
                widths.append(column) # if a value is 1, we append the column number of the value

    #print(grid)
    #print(f"columns with a 1: {widths}")

    widths = set(widths)    # since we only need one 1 per column, we make it a set to ensure unique columns
    width = len(widths)     # we get the length of the set, this will be our width

    #print(f"rows with a 1: {length}\nunique columns with a 1: {widths}")
    #print(f"length: {length} width: {width}")

    if length > 0:
        return 2 * (length + width)
    return length
