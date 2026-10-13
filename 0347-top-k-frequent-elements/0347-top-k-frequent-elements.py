class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
       y = Counter(nums)
       heap = []
       for num,freq in y.items():
         heapq.heappush(heap,(freq,num))
         if len(heap) > k:
            heapq.heappop(heap)

       return [num for freq,num in heap]

