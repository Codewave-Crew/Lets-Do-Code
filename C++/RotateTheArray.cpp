#include <iostream>
#include <vector>

using namespace std;

class RotateTheArray {
public:
    void rotate(vector<int>& nums, int k) {
        unsigned int n = nums.size();
        vector<int> num2;
        num2 = nums;
        for (unsigned int i = 0; i < n; i++)   {
            nums[(k + i) % n] = num2[i];
        }
    }
};

int main()  {
    vector<int> nums;
    int num, n, k;
    RotateTheArray a;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        nums.push_back(num);
    }
    cin >> k;
    a.rotate(nums, k);
    return 0;
}