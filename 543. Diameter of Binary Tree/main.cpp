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
  int preorder(TreeNode *node, int &ans) {
    if (node == NULL) {
      return 0;
    }

    int leftDepth = preorder(node->left, ans);
    int rightDepth = preorder(node->right, ans);
    ans = max(ans, leftDepth + rightDepth);

    return max(leftDepth, rightDepth) + 1;
  }

  int diameterOfBinaryTree(TreeNode *root) {
    int ans = 0;
    preorder(root, ans);
    return ans;
  }
};