class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        for(int x = 0, y = n; (x < n ) && (y < 2*n ) ; ++x ,++y)
        {
            ans.push_back(nums[x]);
            ans.push_back(nums[y]);
        }
        return ans;
    }
};
