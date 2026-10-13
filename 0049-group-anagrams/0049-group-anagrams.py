class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        dic = defaultdict(list)
        for str in strs:
            y = "".join(sorted(str))
            dic[y].append(str)
        return [y for y in dic.values()]
            