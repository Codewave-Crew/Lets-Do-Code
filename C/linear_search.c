#include<stdio.h>
#define MAX 1000

int main(){
  int n,i,a[MAX],ele,ind = -1;
  clrscr();
  printf("Enter number of elements : ");
  scanf("%d",&n);
  printf("Enter the elements : ");
  for(i = 0; i < n; i++) scanf("%d",&a[i]);
  printf("Enter element to be searched : ");
  scanf("%d",&ele);
  for(i = 0;i < n && ind == -1;i++)
	if(a[i] == ele) ind = i;
  if(ind == -1) printf("\nElement not found.");
  else printf("\nElement %d found at index %d",ele,ind);
  return 0;
}
