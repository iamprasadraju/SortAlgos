# Insertion Sort

"""
arr  =  [12, 3, 2, 5, 10]

step 1: [3, 12, 2, 5, 10]

step 2: [3, 2, 12, 5, 10]

step 3: [2, 3, 12, 5, 10]

step 4: [2, 3, 5, 12, 10]

step 5: [2, 3, 5, 10, 12] -> Sorting Done.

"""

# Insertion sort using shifting (efficient than swapping)
def InsertionSort(arr: list[int]) -> list[int]:
    i = 1
    while i < len(arr):
        key = arr[i]
        j = i - 1
        while j > 0 and arr[j - 1] > key:
            arr[j + 1] = arr[j]
            j -= 1
        arr[j + 1] = key
        i += 1
    return arr

"""
	Complexity(worst case):

		Time: O(N^2)
		Memory: O(1)

		Swaps: O(N^2)

"""
