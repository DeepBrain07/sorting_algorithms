#include "sort.h"

/**
*bubble_sort -  sorts an array of integers in ascending order using the Bubble sort algorithm
*@array: array to be sorted
*@size: size of the array
*Return: nothing
*/
void bubble_sort(int *array, size_t size)
{
	int i;
	int j;
	int temp;

	for (i = 0; i < size - 1; i++)
		for (j = 0; j < size - i - 1; j++)
			if (array[j] >= array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = array[i];
			}
}
