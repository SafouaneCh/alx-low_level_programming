#include "main.h"

/**
 * alloc_grid - retruns a pointer to a 2 dimensional array of integers
 *
 * @whith: the width
 *
 * @higth: the hight
 *
 * Return: 0 or 1
*/

int **alloc_grid(int width, int height);
{
	if (whidth <= 0 || height <= 0){
		return NULL;
	}
	int **grid = (int **)malloc(height * sizeof(int *));
	
	if (!grid){
		return NULL;
	}
	for (int i = 0; i < height; i++){
		grid[i] = (int *)calloc(width, sizeof(int));
		if (!grid[i]){
			for (int j = 0; j < i; j++){
				free(grid[j]);
			}
			free(grid);
		}
	}
	return (grid);
}
