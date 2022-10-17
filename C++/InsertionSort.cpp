#include<bits/stdc++.h>
using namespace std;

void sorting_algo(int* arr,int n);

int main()
{
    int* arr;
    int n;
    cout<<"Enter the number of elements to be entered:"<<endl;
    cin>>n;
    arr=new int[n];
    cout<<"Enter "<<n<<" elements:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sorting_algo(arr,n);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}

void sorting_algo(int* arr,int n)
{
    int key;
    for(int step=1;step<n;step++)
    {
        key=arr[step];
        int j=step-1;
        while(key<arr[j]&&j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}