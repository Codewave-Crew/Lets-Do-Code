public class SelectionSort {
    public static void selectionSort(int[] arr) {
        int n = arr.length;
        
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            
            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minIndex]) {
                    minIndex = j;
                }
            }
            
            // Swap the found minimum element with the first element
            int temp = arr[minIndex];
            arr[minIndex] = arr[i];
            arr[i] = temp;
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {10, 15, 25, 36, 55, 18, 78};
        
        System.out.println("Initial sorting Array:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
        
        selectionSort(arr);
        
        System.out.println("\n Ending Array sorting:");
        for (int value : arr) {
            System.out.print(value + " ");
        }
    }
}
