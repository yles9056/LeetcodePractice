/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
 public:
  int rangeSumBST(TreeNode* root, int L, int R) {
    if (root == nullptr) return 0;
    int ls = rangeSumBST(root->left, L, R);
    int rs = rangeSumBST(root->right, L, R);
    if (root->val >= L && root->val <= R) {
      return ls + rs + root->val;
    } else {
      return ls + rs;
    }
  }
};