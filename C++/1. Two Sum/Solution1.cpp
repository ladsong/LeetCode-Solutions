class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mapa;
        vector<int> ans;
        
        for(int i = 0; i < nums.size(); i++){
            if(mapa.find(target-nums[i]) == mapa.end()){
                mapa[nums[i]] = i;
            }
            else {
                ans.push_back(mapa[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
        }
        return ans;
        
    }
};