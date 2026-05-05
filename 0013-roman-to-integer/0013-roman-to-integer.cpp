class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp{{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int ans = 0;
        char p =NULL;
        for(char c:s)
        {
            ans += mp[c];
            if(p && mp[c]>mp[p])
            {
                ans -= 2*mp[p];
            }
            p = c;
        }

        return ans;
    }
};