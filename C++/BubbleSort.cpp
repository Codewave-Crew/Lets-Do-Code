#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *arr;
    int n,temp;
    cout<<"Enter number of elements to be entered in the array:"<<endl;
    cin>>n;
    arr=new int[n];
    cout<<"Enter "<<n<<" elements to be sorted:"<<endl;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int step=0;step<n-1;step++)
    {
        for(int i=0;i<n-step;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
    }
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;
}