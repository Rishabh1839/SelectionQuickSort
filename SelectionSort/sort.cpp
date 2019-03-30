/*
	Selection Sorting
*/
#include "SelectionQuickSort.h"
#include <iostream>

using namespace std;

int SelectionMain()
{
	int sort[20] = { 5, 2, 1, 3, 6, 10, 11, 7, 8, 9, 12, 15, 23, 15, 14, 16, 28, 11, 20, 30 };

	for (int i = 0; i < 20; ++i)
	{
		cout << sort[i] << "\n";
	}

	cout << "\n";

	selectionSort(sort, 20);

	for (int i = 0; i < 20; ++i)
	{
		cout << sort[i] << "\n";
	}

	system("pause");
	return 0;
}

/*

Bubble Sorting

*/
int BubbleSort()
{
	int sort[20] = { 5, 2, 1, 3, 6, 10, 11, 7, 8, 9, 12, 15, 23, 15, 14, 16, 28, 11, 20, 30 };

	for (int i = 0; i < 20; ++i)
	{
		cout << sort[i] << "\n";
	}

	cout << "\n";

	bubble(sort, 20);

	for (int i = 0; i < 20; ++i)
	{
		cout << sort[i] << "\n";
	}

	system("pause");
	return 0;
}

int main()
{
	BubbleSort();
	SelectionMain();
}