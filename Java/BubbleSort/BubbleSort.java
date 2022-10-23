import java.util.Arrays;

public class BubbleSort {

    public static void main(String[] args) {
        int[] arr = {89,72,100, 65, 8,34, 3, 10, 12};

        solution(arr);
    }
    private static int[] solution(int[] A) {
        int k =0;
        for(int i = 0; i<A.length; i++) {

            for(int j =k; j<A.length - k; j++) {
                if (A[i] > A[j]) {
                    int temp = A[j];
                    A[j] = A[i];
                    A[i] = temp;
                }
            }
            k++;
            System.out.println("iteration " + i + " : " + Arrays.toString(A));
        }

        System.out.println(Arrays.toString(A));
        return A;
    }

}
