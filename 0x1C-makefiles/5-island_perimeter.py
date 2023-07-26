#!/usr/bin/python3
"""Defines an island perimeter measuring function."""

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in the grid.

    Args:
        grid (list): A list of lists representing the island, where 0 represents water and 1 represents land.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0

    if not grid:
        return perimeter

    rows = len(grid)
    cols = len(grid[0])

    for row in range(rows):
        for col in range(cols):
            if grid[row][col] == 1:
                perimeter += 4

                # Check left neighbor
                if col > 0 and grid[row][col - 1] == 1:
                    perimeter -= 2


                if row > 0 and grid[row - 1][col] == 1:
                    perimeter -= 2

    return perimeter
