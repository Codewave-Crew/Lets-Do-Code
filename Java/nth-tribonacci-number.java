class Solution {
    ArrayList<Integer> arr = new ArrayList<Integer>();
    int find(int n, int ans){
        if(n<0){
            return ans;
        }
        if(n<arr.size()){
            return arr.get(n);
        }
        
        int n1 = find(n-1, ans);
        int n2 = find(n-2, ans);
        int n3 = find(n-3, ans);
        int sum = n1+n2+n3;
        arr.add(sum);
        return sum;
    }
    public int tribonacci(int n) {
        arr.add(0);
        arr.add(1);
        arr.add(1);
        return find(n, 0);
    }
}
