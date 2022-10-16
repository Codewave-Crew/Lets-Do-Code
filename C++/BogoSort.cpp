#include<bits/stdc++.h>
using namespace std;

int is_sorted(int* arr, int n)
{
    for(int i=n;i>=1;i--)
    {
        if(arr[i]<arr[i-1])
        return 0;
    }
    return 1;
}

void shuffle(int* arr,int n)
{
    int temp,random;
    for(int i=0;i<n;i++)
    {
        random=rand()%n;
        temp=arr[i];
        arr[i]=arr[random];
        arr[random]=temp;
    }
}

void bogosort(int* arr,int n)
{
    while(!is_sorted(arr,n))
    shuffle(arr,n);
    
}

int main()
{
    int n;
    cout<<"Enter number of elements to be sorted:"<<endl;
    cin>>n;
    int array[n];
    cout<<"Enter "<<n<<" elements to be sorted:"<<endl;
    for(int i=0;i<n;i++)
    cin>>array[i];
    bogosort(array,n);
    cout<<"The sorted array is:"<<endl;
    for(int i=0;i<n;i++)
    cout<<array[i]<<" ";
}