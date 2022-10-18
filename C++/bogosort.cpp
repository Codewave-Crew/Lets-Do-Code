#include <bits/stdc++.h>
using namespace std;
bool isSorted(int a[], int n)
{
	while (--n > 0)
		if (a[n] < a[n - 1])
			return false;
	return true;
}
void shuffle(int a[], int n)
{
	for (int i = 0; i < n; i++)
		swap(a[i], a[rand() % n]);
}
void bogosort(int a[], int n)
{
	while (!isSorted(a, n))
		shuffle(a, n);
}
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
}
int main()
{
  int n;
	cout<<"Enter number of elements to be entered in the array:"<<endl;
  cin>>n;
  int a[n];
  cout<<"Enter "<<n<<" elements to be sorted:"<<endl;
  for(int f=0;f<n;f++)
  {
      cin>>a[f];
  }
  bogosort(a, n);
  printf("Sorted array :\n");
  printArray(a, n);
  return 0;
}
