#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int size, int key)
{

    size--;

    if (size < 0)
    {
        return -1;
    }

    if (arr[size] == key)
    {
        return size;
    }

    return linearSearch(arr, size, key);
}

int main()
{
    int N, key;
    cout << "Enter Size : ";
    cin >> N;
    int arr[N];
    cout << "Enter the Element's : " << endl;
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the Key : ";
    cin >> key;
    int res = linearSearch(arr, N, key);
    res != -1 ? cout << "Element " << key << " is present at index " << res + 1 : cout << "Element " << key << " not found.";

    return 0;
}
