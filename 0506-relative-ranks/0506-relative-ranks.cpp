class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
       priority_queue<pair<int,int>>hp;
       for(int i =0;i<score.size();i++)
       {
        hp.push({score[i],i});
       }
       vector<string>ans(score.size());
       int rank = 1;
       while(!hp.empty())
       {
        int index = hp.top().second;
        hp.pop();
        if(rank == 1)ans[index]="Gold Medal";
        else if(rank == 2)ans[index]="Silver Medal";
        else if(rank == 3)ans[index]="Bronze Medal";
        else ans[index]=to_string(rank);
        rank++;
       }
       return ans;
    }
       


};