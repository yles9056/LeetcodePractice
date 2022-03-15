/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     public int val;
 *     public TreeNode left;
 *     public TreeNode right;
 *     public TreeNode(int x) { val = x; }
 * }
 */
public class Solution {
    public bool IsSameTree(TreeNode p, TreeNode q) {
        Queue<TreeNode> queueP = new Queue<TreeNode>();
        Queue<TreeNode> queueQ = new Queue<TreeNode>();
        queueP.Enqueue(p);
        queueQ.Enqueue(q);
        while(queueP.Count != 0)
        {
            TreeNode cur = queueP.Dequeue();
            TreeNode exa = queueQ.Dequeue();
            if(cur == null ^ exa == null)return false;
            else if(cur != null)
            {
                if(exa.val != cur.val)return false;
                
                if(cur.left == null ^ exa.left == null)return false;
                else if(cur.left != null)
                {
                    queueP.Enqueue(cur.left);
                    queueQ.Enqueue(exa.left);
                }
            
                if(cur.right == null ^ exa.right == null)return false;
                else if(cur.right != null)
                {
                    queueP.Enqueue(cur.right);
                    queueQ.Enqueue(exa.right);
                }
            }
        }
        return true;
    }
}