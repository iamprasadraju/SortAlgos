#!/usr/bin/env python3
import pytest
import random
import time

from selection_sort import SelectionSort
from insertion_sort import InsertionSort
from bubble_sort import BubbleSort


N = 100
arr = [random.randint(0, N * N) for _ in range(N)]

def test_SelectionSort():
	arr_copy = arr.copy()
	assert sorted(arr) == SelectionSort(arr)
	
def test_InsertionSort():
	arr_copy = arr.copy()
	assert sorted(arr) == InsertionSort(arr_copy)

def test_BubbleSort():
	arr_copy = arr.copy()
	assert sorted(arr) == BubbleSort(arr_copy)

def RandomGenArr(size: int) -> list[int]:
	arr =  [random.randint(0, size * size) for _ in range(size)]
	return arr
	
def SortBenchmark():
	algos = {
		"Insertion sort": InsertionSort,
	 	"Bubble sort": BubbleSort, 
		"Selection sort" : SelectionSort 
	}
	for name, func in algos.items():
	    arr_copy = arr.copy()
	    st = time.perf_counter()
	    func(arr_copy)
	    et = time.perf_counter()
	    t = et - st
	    print(f"{name} took {t:.6f} seconds of Size {N}", end="\n\n")


SortBenchmark()