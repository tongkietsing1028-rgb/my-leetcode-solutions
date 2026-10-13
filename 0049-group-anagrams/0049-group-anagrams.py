class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        group = defaultdict(list)
        for s in strs:
            key = tuple(sorted(s))
            group[key].append(s)

        return list(group.values())
            