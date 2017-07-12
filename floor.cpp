// Depricated file this code will be re-written
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <fstream>
#include <iterator>

char size()   // asks user for size of walls
{
	int wallSize;
	std::cout << "Please enter the the size of the walls:  \n";
	std::cin >> wallSize;
	return wallSize;
}

std::vector <char> build(char size)  // takes size of walls as param and creates 2d array, returns & of floorGrid1 for, size must be positive
{
	std::vector <std::vector <char> > floorGrid = {size}
	for(int i = 0; i < size; i++){
		floorGrid1.push_back(grid2);
	}
	return grid;
}

void buildWalls(std::vector<char>& grid) // takes vector to loop thourgh and sets walls borders
{
	char wall = '*'
	int gridSize = grid.size();
	for(int j = 0; j < gridSize; j++){
		for(int k = 0; k < gridSize; k++){
			if(j == 0 || j = gridSize - 1){
				grid[j] = (gridSize, wall);
			}
			else if ((j != 0 || j != gridSize - 1) && (k == 0 || k == gridSize - 1)){
				grid[k] = wall;
			}
		}
	}
}

void draw(grid) //takes in vector to print to console
{
	std::cout << grid;
}
