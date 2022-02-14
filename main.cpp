#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <bits/stdc++.h>
using std::cout;
using std::swap;

int main()
{
	int arrLength = 100;
	int arr[arrLength];

	srand((unsigned)time(NULL));

	cout << "generating random array...\n\n";

	for (int i = 0; i < arrLength; i++) // generate random array of length arrLength
	{
		arr[i] = rand() % 1000;
	}

	cout << "printing array:\n";

	for (int i = 1; i < arrLength; i++)
	{
		cout << arr[i] << '\n';
	}

	cout << "sorting...\n\n";

	bool sort = 1;
	while (sort) //sort least to greatest
	{
		sort = 0;
		for (int i = 1; i < arrLength; i++)
		{
			if (arr[i] < arr[i-1])
			{
				swap(arr[i], arr[i - 1]);
				sort = 1;
			}
		}
	}

	cout << "printing sorted array:\n";

	for (int i = 1; i < arrLength; i++)
	{
		cout << arr[i] << '\n';
	}

	return 0;
}
