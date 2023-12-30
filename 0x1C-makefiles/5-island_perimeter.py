#!/usr/bin/python3

def island_perimeter(grid):
    len = 0

    for row in grid:
        for col in row:
            if col == 1:
                len += 1

    if len > 0:
        return 2 * (len + 1)
    return len
