#include <stdio.h>
#include <conio.h>

void toh(int, char, char, char);
    
void main()
{
   int n;
   printf("Enter the number of disk : ");
   scanf("%d", &n);

   printf("Here is sequence of moves of tower of hanoi  :\n");

   toh(n, 'A', 'C', 'B');
}

void toh(int no, char source, char destination, char spare)
{
   if (no == 1)
      {
         printf("\n move disk 1 from source %c to destination %c", source, destination);

       return;
      }

     toh(no - 1, source, spare, destination);

     printf("\n move disk %d from source %c to destination %c", no, source, destination);

     toh(no - 1, spare, destination, source);

}

/*
Output

Enter the number of disk : 3
Below are sequence of moves of tower of hanoi :
 
move disk 1 from source A to destination C
move disk 2 from source A to destination B
move disk 1 from source C to destination B
move disk 3 from source A to destination C
move disk 1 from source B to destination A
move disk 2 from source B to destination C
move disk 1 from source A to destination C
*/
