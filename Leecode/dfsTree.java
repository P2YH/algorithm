/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    public List<Integer> preorderTraversal(TreeNode root) {
        List<Integer> res = new ArrayList<Integer>();
        dfs(root, res);
        return res;
    }

    public void preDfs(TreeNode node, List<Integer> res){
        if(node == null) {
            return;
        }
        res.add(node.val); //打印在前
        dfs(node.left, res);
        dfs(node.right, res);

    }
  
    public void midDfs(TreeNode node, List<Integer> res){
        if(node == null) {
            return;
        }

        dfs(node.left, res);
        res.add(node.val);//打印在中
        dfs(node.right, res);

    }
  
    public void afterDfs(TreeNode node, List<Integer> res){
        if(node == null) {
            return;
        }

        dfs(node.left, res);
        dfs(node.right, res);
        res.add(node.val);//打印在后
    }
}
