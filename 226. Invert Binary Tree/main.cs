/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution
{
    public TreeNode InvertTree(TreeNode root)
    {
        /*if(root != null)
        {
            TreeNode temp = InvertTree(root.left);
            root.left = InvertTree(root.right);
            root.right = temp;
        }
        return root;*/



        if (root != null)
        {
            Queue<TreeNode> queue = new Queue<TreeNode>();
            queue.Enqueue(root);
            while (queue.Count != 0)
            {
                TreeNode current = queue.Dequeue();
                TreeNode temp = current.left;
                current.left = current.right;
                current.right = temp;
                if (current.left != null)
                {
                    queue.Enqueue(current.left);
                }

                if (current.right != null)
                {
                    queue.Enqueue(current.right);
                }
            }
        }
        return root;
    }
}