#!/usr/bin/env python3
import pytest
import random
from selection_sort import SelectionSort 

random.seed(42)

N = 100
arr = [random.randint(0, N * N) for _ in range(N)]

def test_SelectionSort():
	arr_copy = arr.copy()
	assert sorted(arr) == SelectionSort(arr)
