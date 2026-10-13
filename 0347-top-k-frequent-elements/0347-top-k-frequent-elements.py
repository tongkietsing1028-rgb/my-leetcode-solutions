class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        d = {}
        for num in nums:
            if num not in d:
                d[num] = 0

            d[num] += 1
        result = sorted(d.items(),key = lambda x : x[1],reverse = True)[:k]
        return [x[0] for x in result]