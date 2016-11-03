#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// A utility function to swap to integers
void swap(unsigned int *a, unsigned int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

// A utility function to print an array
void printArray(unsigned int arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

// A function to generate a random permutation of arr[]
void randomize(unsigned int arr[], int n)
{
	srand(time(NULL));

	for (int i = n - 1; i >= 0; i--)
	{
		arr[i] = i;
	}

	for (int i = n - 1; i >= 0; i--)
	{
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}


int main()
{
	const unsigned int n = 5;
	unsigned int arr[n] = { NULL, };

	

	//int n = sizeof(arr) / sizeof(arr[0]);

	randomize(arr, n);
	printArray(arr, n);

	return 0;
}