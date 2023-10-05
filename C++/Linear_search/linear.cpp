// C++ code to linearly search x in arr[]. If x
// is present then return its location, otherwise
// return -1
 
#include <iostream>
using namespace std;
 
int search(int arr[], int N, int x)
{
    int i;
    for (i = 0; i < N; i++)
        if (arr[i] == x)
            return i;
    return -1;
}
 
// Driver's code
int main(void)
{
    int N ;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int x ;
    cin>>x;
    
   
    // Function call
    int result = search(arr, N, x);
    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
