// Approach: 

// Select an element in each iteration from the unsorted array(using a loop).
// Place it in its corresponding position in the sorted part and shift the remaining elements accordingly (using an inner loop and swapping).
// The “inner while loop” basically shifts the elements using swapping.

// Here's how the algorithm works step by step:

// Start with the second element in the array (assuming the first element is a sorted sub-array of size 1).
// Compare this element with the elements in the sorted sub-array (which initially contains only the first element).
// Shift all elements in the sorted sub-array that are greater than the current element one position to the right.
// Insert the current element into the correct position in the sorted sub-array.
// Move to the next element in the unsorted part of the array and repeat steps 2-4 until the entire array is sorted.

#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        int j = i;
        while (j > 0 && arr[j-1]> arr[j] )
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
    }
    
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}