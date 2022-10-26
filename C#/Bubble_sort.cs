using System;
namespace BubbleSort {
   class MySort {
      static void Main(string[] args) {
         Console.WriteLine("Enter the no. of element in array");
         int to_ele =  Int32.Parse(Console.ReadLine());
         int []arr=new int[to_ele];
         Console.WriteLine("Enter the value of elements");
         for (int i=0;i<arr.Length;i++){
             arr[i] = Int32.Parse(Console.ReadLine());
         }   
         int temp;
         for (int j = 0; j <= arr.Length - 2; j++) {
            for (int i = 0; i <= arr.Length - 2; i++) {
               if (arr[i] > arr[i + 1]) {
                  temp= arr[i + 1];
                  arr[i + 1] = arr[i];
                  arr[i] = temp;
               }
            }
         }
         Console.WriteLine("Sorted:");
         foreach (int p in arr)
            Console.Write(p + " ");
         Console.Read();
      }
   }
}
