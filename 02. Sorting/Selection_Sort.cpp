<<<<<<< HEAD
// Approach:

// The algorithm steps are as follows:

// First, we will select the range of the unsorted array using a loop (say i) that indicates the starting index of the range.
// The loop will run forward from 0 to n-1. The value i = 0 means the range is from 0 to n-1, and similarly, i = 1 means the range is from 1 to n-1, and so on.
// (Initially, the range will be the whole array starting from the first index.)
// Now, in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
// After that, we will swap the minimum element with the first element of the selected range(in step 1). 
// Finally, after each iteration, we will find that the array is sorted up to the first index of the range. 


#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n; i++)
    {
        int mini = i;
      for (int j = i+1; j < n; j++)
      {
        if (arr[mini] > arr[j])
        {
            mini = j;
        }
      }
      int temp = arr[mini];
      arr[mini] = arr[i];
      arr[i] = temp;
    }
}

int main() {
   int arr[] = {64, 25, 12, 22, 11};
   int n = sizeof(arr) / sizeof(arr[0]);

   selectionSort(arr, n);

   cout << "Sorted array: ";
   for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
   }
   cout << endl;

   return 0;
=======
#include<iostream>
using namespace std;

int main(){

    cout<<"hello";

    return 0;
>>>>>>> 292203ac8b576d4bf32ef518e7fe2991ec5c2330
}