#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"Enter the size of array:-"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element which have to find"<<endl;
    int x;
    cin>>x;
   
    int index;
    for(int i=0;i<n;i++){
         int f=0;
        if(a[i]==x){
             index=i;
            f=1;
            
        }
        if (f==1){
        cout<<"The element is present at index "<<index<<endl;
        }
    }
    
    return 0;
}
