#include <stdio.h>
int main(){
    int i;
    for (i=0;i<10;i++){
        printf("Hello World - For Loop\n");
    }
    int x=0;
    while(x<10) {
        printf("Hello World - While Loop\n");
        x++;
    }
    int y=0;
    do{
        printf("Hello World - Do While Loop\n");
        y++;
    }while (y < 10);
    return 0;
}
