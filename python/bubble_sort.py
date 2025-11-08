# Bubble Sort
def BubbleSort(arr : list[int]) -> list[int]:
	swaps = True
	while swaps:
		swaps = False
		i = 1
		while(i < len(arr)):
			if arr[i - 1] > arr[i]:
				tmp = arr[i]
				arr[i] = arr[i - 1]
				arr[i - 1] = tmp
				swaps = True
			i += 1
	return arr
	
"""
	arr = [12, 3, 2, 5, 10]
	
	step 1: [3, 12, 2, 5, 10]
	
	step 2: [3, 2, 12, 5, 10]
	
	step 3: [3, 2, 5, 12, 10]
	
	step 4: [3, 2, 5, 10, 12]


---------------------------------

	Complexity(Worst case): 
		
		Time : O(N^2)
		Memory : O(1)
		
		Swaps : N^2

"""