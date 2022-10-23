#include<bits/stdc++.h>
using namespace std;

void randomArray(int arr[], int n)
{
    for(int i=0;i<n;i++)
    {
        arr[i] = rand()%10;
    }
}

void merge(int arr[], int b, int mid, int e)
{
    int a[100];
    int ptr1=b, ptr2=mid+1, i=0;
    while(1)
    {
        if(ptr1<=mid && ptr2<=e)
        {
            if(arr[ptr1]<=arr[ptr2])
            {
                a[i] = arr[ptr1];
                ptr1++;
                i++;
            }
            else if(arr[ptr1]>=arr[ptr2])
            {
                a[i] = arr[ptr2];
                ptr2++;
                i++;
            }
        }
        else if(ptr1>mid && ptr2<=e)
        {
            a[i] = arr[ptr2];
            ptr2++;
            i++;
        }
        else if(ptr1<=mid && ptr2>e)
        {
            a[i] = arr[ptr1];
            ptr1++;
            i++;
        }
        else if(ptr1>mid && ptr2>e)
        {
            for(int i=b;i<=e;i++)
            {
                arr[i] = a[i-b]; 
            }
            break;
        }
    }
}

void mergeSort(int arr[], int b, int e)
{
    int mid = (b+e)/2;
    if(b==e)
    {
        return;
    }
    else{
        mergeSort(arr, b, mid);
        mergeSort(arr, mid+1, e);
        merge(arr, b, mid, e);
    }
}

void printArray(int arr[], int n) 
{ 
    
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << endl;
} 

int main()
{
    int n;
    cout<<"Enter number of elements to be entered in the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements to be sorted:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    // randomArray(arr, n);
    // printArray(arr, n);
    mergeSort(arr,0, n-1);
    printArray(arr, n);
}

