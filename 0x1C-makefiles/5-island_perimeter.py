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

    len = 0

    for row in grid:
        for col in row:
            if col == 1:
                len += 1

    if len > 0:
        return 2 * (len + 1)
    return len
