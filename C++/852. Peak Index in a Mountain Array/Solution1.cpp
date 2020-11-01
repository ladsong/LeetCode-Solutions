class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int prev = A[0];
        int i = 1;
        while(A[i] >=prev){
            prev = A[i];
            i++;
        }
        return i-1;
    }
};
