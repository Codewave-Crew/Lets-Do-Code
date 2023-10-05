using System;

public class RadixSort
{
    private static int FindMax(int[] arr)
    {
        int max = arr[0];
        for (int i = 1; i < arr.Length; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }

    public static void RadixSortOptimized(int[] arr)
    {
        if (arr == null || arr.Length <= 1)
            return;

        int max = FindMax(arr);

        for (int exp = 1; max / exp > 0; exp *= 10)
        {
            CountingSort(arr, exp);
        }
    }

    private static void CountingSort(int[] arr, int exp)
    {
        int n = arr.Length;
        int[] output = new int[n];
        int[] count = new int[10];

        for (int i = 0; i < n; i++)
        {
            count[(arr[i] / exp) % 10]++;
        }

        for (int i = 1; i < 10; i++)
        {
            count[i] += count[i - 1];
        }

        for (int i = n - 1; i >= 0; i--)
        {
            output[count[(arr[i] / exp) % 10] - 1] = arr[i];
            count[(arr[i] / exp) % 10]--;
        }

        for (int i = 0; i < n; i++)
        {
            arr[i] = output[i];
        }
    }

    public static void Main(string[] args)
    {
        Console.Write("Enter the number of elements: ");
        int n = int.Parse(Console.ReadLine());
        int[] arr = new int[n];

        Console.WriteLine("Enter the elements separated by spaces:");
        string[] inputElements = Console.ReadLine().Split(' ');

        for (int i = 0; i < n; i++)
        {
            arr[i] = int.Parse(inputElements[i]);
        }

        RadixSortOptimized(arr);

        Console.WriteLine("\nSorted Array:");
        Console.WriteLine(string.Join(", ", arr));
    }
}
