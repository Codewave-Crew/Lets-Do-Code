#include<iostream>
using namespace std;

void selectionsort(int , int );
void selectionsort(int a[], int n){
    int i,j;
    for(i=0;i<n-1;i++){
        int min=a[i];
        int min_index=i;
        for(j=i+1;j<n;j++){
            if(a[j]<min){
                min=a[j];
                min_index=j;
            }
        }
        int temp =a[i];
        a[i] = a[min_index];
        a[min_index]=temp;
    }
}
//void print (int , int );
void print (int a[], int n){
    for(int i=0; i<n;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int a[50], i;
    for(i=0;i<n;i++){
        cout<<"Enter element at index "<<i<<" "<<endl;
        cin>>a[i];
    }
    cout<<"********************Array before sorting***************\n";
    print(a, n);
    cout<<"********************Array after sorting***************\n";
    selectionsort(a, n);
    print(a, n);
    return 0;   
}


