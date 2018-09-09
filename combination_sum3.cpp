class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        // can I use multiple times of the same number? no.
        vector<vector<int>> resList;
        vector<int> res;
        dfs(resList, res, k, n, 1);
        return resList;
    }
    
private:
    void dfs(vector<vector<int>>& resList, vector<int>& res, int k, int target, int start) {
        if (k == 0) {
            if (target == 0) {
                resList.push_back(res);
            }
            return;
        }
        for (int i = start; i <= 9; i++) {
            if (i > target) {
                return;
            }
            res.push_back(i);
            dfs(resList, res, k-1, target-i, i+1);
            res.pop_back();
        }
    }
};
