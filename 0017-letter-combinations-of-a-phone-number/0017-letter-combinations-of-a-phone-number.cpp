class Solution {
public:
    vector<string>result;
    string s="";
    string letterMap[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

public:
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return result;
        dfs(digits,0);
        return result;
    }
    void dfs(string &digits,int index)
    {
        if(index == digits.size())
        {
            result.push_back(s);
            return;
        }
        int digit = digits[index] - '0';
        string letter = letterMap[digit];
        for(int i = 0;i<letter.size();i++)
        {
            s+=letter[i];
            dfs(digits,index+1);
            s.pop_back();
        }
    }
};