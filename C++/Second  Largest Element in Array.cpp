#include<iostream>
using namespace std;

int second_Largest(int *arr, int n)
{
    int sec=-1,largest=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            sec=largest;
            largest=i;   
        }
        else if (arr[i]<arr[largest])
        {
            if(sec==-1|| arr[i]>arr[sec] )
            {
                sec=i;
            }
        }
    }
    return arr[sec];
}

int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=second_Largest(arr,n);
    cout<<"The second largest element is :"<<ans;
    return 0;
}
