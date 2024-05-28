// Better Approach

// #include <bits/stdc++.h>
// using namespace std;
// int getElements(int arr[], int n)
// {
//     int maxi = INT_MIN;
//     int secMaxi = INT_MIN;

//     if (n == 0 || n == 1)
//     {
//         return -1;
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > maxi)
//         {
//             maxi = arr[i];
//         }
//     }

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > secMaxi && arr[i] != maxi)
//         {
//             secMaxi = arr[i];
//         }
//     }
//     if (secMaxi == INT_MIN)
//     {
//         return -1;
//     }
//     else
//     {
//         return secMaxi;
//     }
// }
// int main()
// {
//     int arr[] = {1, 2, 4, 6, 7, 5};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     cout<<getElements(arr, n);
//     return 0;
// }




// Optimal 

#include <bits/stdc++.h>
using namespace std;
int getElements(int arr[], int n)
{
if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    
    if(second_large == INT_MIN){
        return -1;
    }
    return second_large;                 
}
    

int main()
{
    int arr[] = {1, 2, 4, 6, 7, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<getElements(arr, n);
    return 0;
}
