/*
Insertion Sort
Robert Vaughan
29/02/2016
*/

#include <stdio.h>
#define SIZE 4

//Prototypes
void insertionSort(int*);

main()
{
	int my_array[SIZE] = {4, 6, 1, 2};
	int i = 0;
	
	insertionSort(my_array);
	
	for (i = 0; i < SIZE; i++)
	{
		printf("%d", *(my_array + i));
	}//end for
	
}//end main

/*
	Implementation of Insertion Sort
*/

void insertionSort(int* sort_array)
{
	int i = 0;
	int j = 0;
	int current = 0;
	
	for (i = 1; i < SIZE; i++)
	{
		current = *(sort_array + i);
		j = i;
		
		while (*(sort_array + (j - 1)) > current && j != 0)
		{
			*(sort_array + j) = *(sort_array + (j - 1));
			j = (j - 1);
		}//end while
		
		*(sort_array + j) = current;
		
	}//end for
	
}//end Insertion
