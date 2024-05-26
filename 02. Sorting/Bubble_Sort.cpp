// The algorithm steps are as follows:

// First, we will select the range of the unsorted array. For that, we will run a loop(say i) that will signify the last index of the selected range. The loop will run backward from index n-1 to 0(where n = size of the array). The value i = n-1 means the range is from 0 to n-1, and similarly, i = n-2 means the range is from 0 to n-2, and so on.
// Within the loop, we will run another loop(say j, runs from 0 to i-1 though the range is from 0 to i) to push the maximum element to the last index of the selected range, by repeatedly swapping adjacent elements.
// Basically, we will swap adjacent elements(if arr[j] > arr[j+1]) until the maximum element of the range reaches the end.
// Thus, after each iteration, the last part of the array will become sorted. Like: after the first iteration, the array up to the last index will be sorted, and after the second iteration, the array up to the second last index will be sorted, and so on.
// After (n-1) iteration, the whole array will be sorted.

// Note: Here, after each iteration, the array becomes sorted up to the last index of the range. That is why the last index of the range decreases by 1 after each iteration. This decrement is achieved by the outer loop and the last index is represented by variable i in the following code. And the inner loop(i.e. j) helps to push the maximum element of range [0….i] to the last index(i.e. index i).



// Here's how the bubble sort algorithm works:

// 1. The algorithm starts by comparing the first two elements of the array.
// 2. If the first element is greater than the second element, it swaps them.
// 3. The algorithm then moves on to the next pair of adjacent elements and compares them.
// 4. If the first element is greater than the second element, it swaps them.
// 5. The algorithm continues this process until it reaches the end of the array.
// 6. After completing one iteration (pass) through the array, the largest element is guaranteed to be at the end of the array.
// 7. The algorithm then repeats the same process for the remaining (n-1) elements, making (n-1) passes over the array.
// 8. On each subsequent pass, the remaining elements are compared and swapped until the entire array is sorted in ascending order.

// The algorithm gets its name "bubble sort" because with each pass, the largest (or smallest, depending on the sorting order) elements "bubble up" to the end of the array.

// Here's a visual representation of how the bubble sort algorithm works:

// ```
// Initial array: [5, 3, 8, 1, 4]

// First pass:
// [3, 5, 8, 1, 4]  // Swap 5 and 3
// [3, 5, 1, 8, 4]  // Swap 8 and 1
// [3, 1, 5, 8, 4]  // Swap 5 and 1
// [3, 1, 5, 4, 8]  // Swap 8 and 4

// Second pass:
// [1, 3, 5, 4, 8]  // Swap 3 and 1
// [1, 3, 4, 5, 8]  // Swap 5 and 4

// Third pass:
// [1, 3, 4, 5, 8]  // No swaps needed

// Fourth pass:
// [1, 3, 4, 5, 8]  // No swaps needed

// Sorted array: [1, 3, 4, 5, 8]
// ```

// In the best case, when the array is already sorted, the time complexity of bubble sort is O(n). In the average and worst cases, when the array is reverse sorted, the time complexity is O(n^2) because the algorithm needs to make (n-1) passes over the array.

// Bubble sort is a simple but inefficient algorithm for large arrays due to its quadratic time complexity. However, it is easy to understand and implement, making it a good starting point for learning sorting algorithms.

#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = n-1; i >= 0; i--)
    {
        for (int j = 0; j <= i-1 ; j++)
        {
            int temp = 0;
           if (arr[j] > arr[j+1])
           {
             temp = arr[j+1];
             arr[j+1] = arr[j];
             arr[j] = temp;
           }
        }
        
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}








