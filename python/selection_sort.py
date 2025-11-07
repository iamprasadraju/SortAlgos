# Selection Sort
def SelectionSort(arr : list[int]) -> list[int]:
	size = len(arr)
	for i in range(size):
		min_index = i
		for j in range(i, size):
			if arr[j] < arr[min_index]:
				min_index = j 
		arr[i], arr[min_index] = arr[min_index], arr[i]
	return arr

"""
	complexity :
	
	 	Runtime: O(n ^ n)
	 	Memory : O(n)
	 	Swaps : N
"""