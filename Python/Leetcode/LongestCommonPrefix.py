class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        str1 = strs[0]
        for i in range(1, len(strs)):
            lst_idx = -1
            min_len = min(len(str1), len(strs[i]))
            for j in range(min_len):
                if  str1[j] != strs[i][j] :
                    lst_idx = j
                    break
            if lst_idx != -1:
                str1 = str1[:lst_idx]
            elif str1[:min_len] == strs[i]:
                str1 = str1[:min_len]
            elif str1 == strs[i][:min_len]:
                str1 = strs[i][:min_len]
            else:
                return ""
        return str1
