class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for(char c : s)
        {
            if(c == '(' ||c == '['||c == '{')
            {
                ch.push(c);
            }
            else
            {
                if(ch.empty())
                {
                    return false;
                }
                char k = ch.top();
                ch.pop();
                if(k=='('&&c!=')'||k=='{'&&c!='}'||k=='['&&c!=']')
                {
                    return false;
                }
            }
        }
        return ch.empty();
    }
};