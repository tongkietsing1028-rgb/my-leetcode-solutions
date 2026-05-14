class Solution {
public:
    int findTheWinner(int n, int k) {
       return y(n,k)+1;
    }

    int y(int n, int k)
    {
        if(n==1)return 0;
        return (y(n-1,k)+k)%n;
    }
};