class Solution {
public:
    int climbStairs(int n) {
        int prev = 0;
        int actual = 1;
        int aux;
        for(int i = 1; i<=n; i++){
            aux = prev;
            prev = actual;
            actual = actual + aux;
        }
        return actual;
    }
};