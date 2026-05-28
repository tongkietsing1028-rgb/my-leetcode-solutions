class Solution {
public:
    int numberOfSpecialChars(string word) {
       //最后一个小写要在第一个大写前面
       //vector 存字母在word中的index
       vector<int>firstUpper(26,INT_MAX);
       vector<int>lastLower(26,-1);
       int ans =0;
       int n =word.size();
       for(int i =0;i<n;i++)
       {
        if(islower(word[i]))
        {
            lastLower[word[i]-'a']=i;
        }
        if(isupper(word[i]))
        {
            firstUpper[word[i]-'A']=min( firstUpper[word[i]-'A'],i);
        }
       }

       for(int i=0;i<26;i++)
       {
        if(lastLower[i]!= -1 && firstUpper[i]!= INT_MAX &&lastLower[i]<firstUpper[i] )
        {
            ans++;
        }
       }
       return ans;
    }
};