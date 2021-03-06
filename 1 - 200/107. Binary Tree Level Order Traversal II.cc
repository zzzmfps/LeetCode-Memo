// 6ms, 10.22%
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode *root) {
        vector<vector<int>> ans;
        helper(root, ans, 0);
        reverse(ans.begin(), ans.end());
        return ans;
    }

    void helper(TreeNode *root, vector<vector<int>> &vec, int curLv) {
        if (!root) return;
        if (vec.empty() || curLv > vec.size() - 1) vec.push_back(vector<int>());
        vec[curLv].push_back(root->val);
        helper(root->left, vec, curLv + 1);
        helper(root->right, vec, curLv + 1);
    }
};
