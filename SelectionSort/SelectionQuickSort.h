#pragma once
/*

Rishabh Singh
CSC382
11/05/2017

*/

/*	
	Selection Sorting
*/
	

#include <algorithm>
#include <stdio.h>
#include <iostream>

using namespace std;

/*

	Selection Sorting

*/

//selection sort 
template <class S>

void selectionSort(S sortArray [], int arraySize)
{
	for (size_t i = 0; i <  arraySize -1; i++)
	{
		//setting the first sorted element as minimum
		int minimum = i;
		//unsorted elements loop
		for (size_t j = i; j < arraySize; j++)
		{
			if (sortArray[j] < sortArray[minimum])
			{
				minimum = j;
			}
		}

		//swapping minimum with first unsorted position
		S temp = sortArray[minimum];
		sortArray[minimum] = sortArray[i];
		sortArray[i] = temp;
	}
}

/*

Bubble Sorting

*/
void bubble(int arr[], int b)
{
	int c, d;
	
	for (c = 0; c < b - 1; c++)

		//the i elements are already in their default position 
		for (d = 0; d < b - c - 1; d++)
			if (arr[d] > arr[d + 1])
				swap(arr[d], arr[d + 1]);
}
