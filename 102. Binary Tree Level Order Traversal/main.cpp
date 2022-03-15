/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
 public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    vector<vector<int>> result;
    recur_levelOrder(result, root);
    return result;
  }

  void recur_levelOrder(vector<vector<int>> &result, TreeNode *root, int level = 0) {
    if (!root) {
      return;
    }
    if (level == result.size()) {
      result.push_back(vector<int>{});
    }
    result[level].push_back(root->val);
    recur_levelOrder(result, root->left, level + 1);
    recur_levelOrder(result, root->right, level + 1);
  }
};