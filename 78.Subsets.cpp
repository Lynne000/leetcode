class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<bool> visited(nums.size(), false);
        sort(nums.begin(), nums.end());
        vector<vector<int>> resList;
        vector<int> res;
        dfs(resList, res, nums, 0);
        return resList;
    }
    // 其实我不太懂，为什么直接这样就可以呢？为什么呢？
private:
    void dfs(vector<vector<int>>& resList, vector<int>& res, vector<int>& nums, int start) {
        resList.push_back(res);
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i-1]) {
                continue;
            }
            res.push_back(nums[i]);
            dfs(resList, res, nums, i+1);
            res.pop_back();
        }
    }
};
