/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
 public:
  int res = -1;
  void preorder(TreeNode *node, int &k) {
    if (node == NULL || k <= 0) {
      return;
    }
    preorder(node->left, k);
    k--;
    if (k == 0) {
      res = node->val;
      return;
    }
    preorder(node->right, k);
  }

  int kthSmallest(TreeNode *root, int k) {
    preorder(root, k);
    return res;
  }
};