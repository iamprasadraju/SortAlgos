#include <stdio.h>

// Insertion sort
int main(){
    int size = 5;

    int arr[5] = {12, 3, 2, 5, 10};

    int tmp;
    int i = 1;
    while(i < size){
        int key = arr[i];
        int j = i;
        while(j > 0 && arr[j - 1] > arr[j]){
            arr[j] = arr[j - 1];
            j = j - 1;
        }
        arr[j] = key;
        i = i + 1;
    }
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}


/*
 Complexity:

    Time : O(N^2)
    Memory : O(N)

    Worst case - Swaps : O(N^2)

 */
