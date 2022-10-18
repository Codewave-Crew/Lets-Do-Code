#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        unsigned int low = 0;
        unsigned int high = nums.size() - 1;
        unsigned int mid = (low + high) / 2;
        while (true)    {
            if (target == nums[mid])    
                return mid;
            if (target == nums[high])
                return high;
            else if (high - low <= 1)   {
                return -1;
            }
            else if (target > nums[mid]) {
                low = mid;
                mid = (low + high) / 2;
            }
            else if (target < nums[mid])    {
                high = mid;
                mid = (low + mid) / 2;
            }
        }
    }
};

int main()	{
	Solution s;
	vector<int> nums = {-1,0,3,5,9,12};
	int target = 9;
	cout << s.search(nums, target);
	return 0;
}