#include<iostream>
using namespace std;
/*void swap(int arr[start],int arr[end]){
	int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	return
}*/
void reverse(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<=end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
	
}
void printArr(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}
int main(){
	int n;
	cin>>n;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	reverse(arr,n);
	printArr(arr,n);
	
}
