class Solution:

    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        n = len(nums)
        ans = []
        for i in range(n):
            l = i+1
            r = n-1
            while(l < r):
                if nums[i]+nums[l]+nums[r]==0:
                    ans.append([nums[i], nums[l], nums[r]])
                    l += 1
                    r -= 1
                elif nums[i]+nums[l]+nums[r] < 0:
                    l += 1
                else:
                    r -= 1
        # to get unique elements
        uniq_ans = []
        for x in ans:
            if x not in uniq_ans:
                uniq_ans.append(x)
        return uniq_ans
