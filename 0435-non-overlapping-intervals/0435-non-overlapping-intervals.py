class Solution:
    def eraseOverlapIntervals(self, intervals: list[list[int]]) -> int:
        intervals.sort(key = lambda x:x[1])
        count = 0
        p=float('-inf')
        for start,end in intervals:
            if start >= p:
                p = end
            else:
                count += 1

        return count

        