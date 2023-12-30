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

    widths = []
    length = 0

    for row in grid:
        if 1 in row:
            length += 1
        count = 0
        for col in row:
            if col == 1:
                count += 1
        widths.append(count)

    width = max(widths)
    print(f"len: {length}, width: {width}")

    if length > 0:
        return 2 * (length + width)
    return length
