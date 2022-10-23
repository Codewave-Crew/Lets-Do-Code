#include<stdio.h>
#include<time.h>

int main()
{
    time_t t = time(NULL);
    printf("\n Current Date & Time : %s", ctime(&t));
}