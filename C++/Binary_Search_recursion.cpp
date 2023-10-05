// C++ program to implement recursive Binary Search
#include <bits/stdc++.h>
using namespace std;
 
// A recursive binary search function. It returns
// location of x in given array arr[l..r] is present,
// otherwise -1
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
 
        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;
 
        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
 
        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
    int target;
    cout<<"Enter the element to be searched: ";
    cin>>target;
    Solution ans;
    int val=ans.searchsortedarray(arr,size,target);
    if(val>0)
    {
        cout<<"The element is present  ";
    }
    else 
        cout<<"Element is not found";
    return 0;
}
