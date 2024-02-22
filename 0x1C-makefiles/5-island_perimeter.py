#!/usr/bin/python3
""" Module Island Perimeter"""


def island_perimeter(grid):
    """ returns the perimeter of the island."""
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                adjacent_land_cells = 0

                if i > 0 and grid[i - 1][j] == 1:
                    adjacent_land_cells += 1

                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    adjacent_land_cells += 1

                if j > 0 and grid[i][j - 1] == 1:
                    adjacent_land_cells += 1

                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    adjacent_land_cells += 1

                perimeter += 4 - adjacent_land_cells

    return perimeter
