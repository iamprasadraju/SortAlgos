#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int size = 100;

int arr[size];

void RandomIntGenerator();
void BubbleSort(int* arr, int size);

int main(){
	srand(time(NULL));
	RandomIntGenerator();
	
	BubbleSort(arr, size);
	for(int i = 0; i < size; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}

void RandomIntGenerator(){
	for(int i = 0; i < size; i++){
		arr[i] = rand() % size * 10;
	}
}


void BubbleSort(int* arr, int size){
	int swaps = 1; // True
	while(swaps){
		int i = 1;
		swaps = 0;
		while(i < size){
			if(arr[i - 1] > arr[i]){
				int tmp = arr[i];
				arr[i] = arr[i - 1];
				arr[i - 1] = tmp;
				
				swaps = 1;
			}
		i++;
		}
	}
}