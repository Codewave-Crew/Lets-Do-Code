#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char text[100],patt[100];
int main()
{
    printf("text");
    scanf("%s",text);
    printf("patt");
    scanf("%s",patt);
    int found;
    found=brute();
    if(found>0)
        printf("found at :  %d",found);
    else
        printf("not found");
    return 0;
}

int brute()
{
    int i,j,n,m;
    n=strlen(text);
    m=strlen(patt);

    for(i=0;i<n;i++)
    {
       j=0;
       while(j<m && text[i+j]==patt[j])
       {
           j++;
           if(j==m)
            return i+j;


       }
    }
    return 0;
}
