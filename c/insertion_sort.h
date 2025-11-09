// Insertion sort
int* InsertionSort(int* arr, int size){
	int i = 1;
	while(i < size){
		int j =  1;
		while(j > 0 && arr[j - 1] > arr[j]){
			int tmp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = tmp;
			
			j--;
		}
	i++;
	}
	return arr;
}

/*
 Complexity(Worst Case):

    Time : O(N^2)
    Memory : O(N)

    Worst case - Swaps : O(N^2)

 */
