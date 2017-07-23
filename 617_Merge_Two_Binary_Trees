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
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) {
            return NULL;
        } else {    
            treeIndex = new TreeNode(0);
            
            if (t1 != NULL)
                treeIndex->val += t1->val;                
            if (t2 != NULL)
                treeIndex->val += t2->val;
            cout << treeIndex->val << endl;
        }
        
        TreeNode* tree_prev = treeIndex;
        TreeNode* t1_prev = t1;
        TreeNode* t2_prev = t2;
        
        treeIndex = treeIndex->left;
        if (t1 != NULL) t1 = t1->left;
        if (t2 != NULL) t2 = t2->left;
        
        mergeTrees(t1, t2);        
        
        treeIndex = tree_prev;
        t1 = t1_prev;
        t2 = t2_prev;
        
        treeIndex = treeIndex->right;
        if (t1 != NULL) t1 = t1->right;
        if (t2 != NULL) t2 = t2->right;
        
        mergeTrees(t1, t2);
               
        cout << 'print tree: \n';
        printTree(tree_prev);
        return tree_prev;
    }
    
private:
    TreeNode* treeIndex;
    
    void printTree(TreeNode* tree) {
        if (tree == NULL)
            return;        
        cout << tree->val;
        printTree(tree->left);
        printTree(tree->right);
    }
};
