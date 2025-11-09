// Selection Sort
int* SelectionSort(int* arr, int size){
	int tmp, min_idx;
	for(int i = 0; i < size; i++){
		min_idx = i;
		for(int j = i; j < size; j++){
			if(arr[j] < arr[min_idx]){
				min_idx = j;
			}
		}
		tmp = arr[i];
		arr[i] = arr[min_idx];
		arr[min_idx] = tmp;
	}
	return arr;
}

/* Complexity(Worst case): 

		Time : O(N^2)
		Memory : O(N)
		Swaps : N 

*/