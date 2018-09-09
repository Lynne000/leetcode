class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> resList;
        vector<int> res;
        sort(candidates.begin(), candidates.end());
        dfs(resList, res, candidates, target, 0);
        return resList;
    }
    //  在每一层搜索中，枚举一个数字出现的次数，而不是遍历整个数组。
    // 这一类题目提醒我多做几遍哇，理解得不是很透彻。
private:
    void dfs(vector<vector<int>>& resList, vector<int>& res, vector<int>& candidates, int target, int start) {
        if (target == 0) {
            resList.push_back(res);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > 0 && candidates[i] == candidates[i-1]) {
                continue;
            }
            res.push_back(candidates[i]);
            dfs(resList, res, candidates, target - candidates[i], i);
            res.pop_back();
        }
    }
};
