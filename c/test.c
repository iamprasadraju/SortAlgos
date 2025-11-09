#include <stdio.h>
#include <stdlib.h>

#include "selection_sort.h"
#include "bubble_sort.h"
#include "insertion_sort.h"

#define N 100

// Puts array in Heap
int arr[N];

// Helper func for qsort()
int compare_ints(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Generates random array of size N
void RandomArrGen(){
	for(int i = 0; i < N; i++){
		arr [i] = rand() % (N * 10);
	}
}

// Checks whether arr is Sorted Correctly
int ValidSort(int* sorted_arr){
	int arr_copy[N];
    for (int i = 0; i < N; i++) {
        arr_copy[i] = arr[i];
    }

	qsort(arr_copy, N, sizeof(int), compare_ints);
	for(int i = 0; i < N; i++){
		if(arr_copy[i] != sorted_arr[i]){
			return 0; // False
		}
	}
	return 1; // True
}

// tests
int test_SelectionSort(){
	SelectionSort(arr, N);
	if(ValidSort(arr)){
		printf("Selection Sort Passed! \n");
		return 1;
	}
	printf("Selection sort failed \n");
	return 0;
	
}

int test_BubbleSort(){
	BubbleSort(arr, N);
	if(ValidSort(arr)){
		printf("Bubble Sort Passed!\n");
		return 1;
	}
	printf("Bubble sort failed \n");
	return 0;
}

int test_InsertionSort(){
	InsertionSort(arr, N);
	if(ValidSort(arr)){
		printf("Insertion Sort Passed!\n");
		return 1;
	}
	printf("Insertion sort failed \n");
	return 0;
}

int main(){
	RandomArrGen();
	test_SelectionSort();
	test_BubbleSort();
	test_InsertionSort();
	
	return 0;
}