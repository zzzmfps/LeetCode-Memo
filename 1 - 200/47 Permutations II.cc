// 25ms, 66.98%
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int> &nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        res.push_back(nums);
        while (next_permutation(nums.begin(), nums.end())) res.push_back(nums);
        return res;
    }
};
