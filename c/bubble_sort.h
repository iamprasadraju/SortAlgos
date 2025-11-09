// Bubble Sort
int* BubbleSort(int* arr, int size){
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
		if(swaps == 0){
			break;
		}
	}
	return arr;
}


/*
 	Complexity(Worst case):
  		
  		Time : O(N^2)
    	Memory : O(1)
     
     	Swaps : N^2
 */