# 44ms, 100.0%
class Solution:
    def singleNumber(self, nums):
        res = 0
        for num in nums:
            res ^= num
        return res
        
