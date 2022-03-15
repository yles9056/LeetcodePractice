/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public
class Solution {
 public
  int SumOfLeftLeaves(TreeNode root) {
    int ans = 0;
    if (root != null) {
      Queue<TreeNode> queue = new Queue<TreeNode>();
      queue.Enqueue(root);
      while (queue.Count != 0) {
        TreeNode current = queue.Dequeue();
        if (current.left != null) {
          if (current.left.left == null && current.left.right == null)
            ans += current.left.val;
          else
            queue.Enqueue(current.left);
        }

        if (current.right != null) {
          queue.Enqueue(current.right);
        }
      }
    }
    return ans;
    /*if(root == null) return 0;
        int ans = 0;
        if(root.left != null)
        {
            if(root.left.left == null && root.left.right == null) ans += root.left.val;
            else ans += SumOfLeftLeaves(root.left);
        }
        if(root.right != null) {
            ans += SumOfLeftLeaves(root.right);
        }
    
        return ans;*/
  }
}