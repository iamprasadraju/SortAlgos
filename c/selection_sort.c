#include <stdio.h>
#include <stdlib.h>


#define N 100

int arr[N];



// Selection Sort
void SelectionSort(int* arr, int size){
	int tmp;

	for(int i = 0; i < size; i++){
		for(int j = i; j < size; j++){
			if(arr[j] < arr[i]){
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	
	}
}


void RandomIntGenerator(){
	for(int i = 0; i < N; i++){
		arr[i] = rand() % N * 10;
	}
}



int main(void){
	RandomIntGenerator();

	SelectionSort(arr, N);
	for(int j = 0; j < N; j++){
		printf("%d \n", arr[j]);
	}
	
	return 0;
}

/* Complexity: 

		Time : O(N^2)
		Memory : O(N)
		Swaps : N 

*/