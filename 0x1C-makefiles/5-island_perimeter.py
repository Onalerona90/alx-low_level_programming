#!/usr/bin/python3
""" Calculates the perimeter of an island. """


def island_perimeter(grid):
    """ Returns the perimeter of the island described in grid """
    perimeter = 0
    edges = 0

    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                perimeter += 4
                if col > 0 and grid[row][col - 1] == 1:
                    edges += 2
                if row > 0 and grid[row - 1][col] == 1:
                    edges += 2

    return perimeter - edges
