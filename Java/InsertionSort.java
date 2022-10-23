import java.util.*;
public class InsertionSort
{
    public static void main(String args[])
    {
        // taking user input
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements:");
        int N = sc.nextInt();
        System.out.println("Enter elements:");
        
        // storing elements in an array
        int[] num = new int[N];
        for(int i=0;i<N;i++){
            num[i] = sc.nextInt();
        }

        System.out.println("Array before Insertion Sort");
        for(int i=0; i<num.length; i++)
        {
            System.out.print(num[i]+" ");
        }
        int j,x;
        // run an outer loop i from 1 to num.length to repeat the process of insertion sort
        for(int i=1; i<num.length; i++)
        {
            // x to be inserted at proper place
            x=num[i];

            // run an inner while loop j for insertion sort from i-1 to 0
            j=i-1;
            while(j>=0)
            {
                // now check if the value of x is less than num[j] then shift the number num[j] towards right else break the inner loop j
                if(x<num[j])
                {
                    num[j+1]=num[j];
                }
                else
                {
                    break;
                }
                j=j-1;
            }

            // outside the body of inner loop j insert the value of x at num[j+1] position
            num[j+1]=x;
        }

        // print the sorted array
        System.out.print("\n\nArray after Insertion Sort\n");
        for(int i=0; i<num.length; i++)
        {
            System.out.print(num[i]+" ");
        }
    }
}