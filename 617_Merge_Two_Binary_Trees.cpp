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
        /*
        if (t1 == NULL && t2 == NULL) {
            return NULL;
        } else {    
            this->treeIndex = new TreeNode(0);
            
            if (t1 != NULL)
                this->treeIndex->val += t1->val;                
            if (t2 != NULL)
                this->treeIndex->val += t2->val;
            //cout << treeIndex->val << endl;
        }
        
        TreeNode* tree_prev = this->treeIndex;
        TreeNode* t1_prev = t1;
        TreeNode* t2_prev = t2;
        
        this->treeIndex = this->treeIndex->left;
        if (t1 != NULL) t1 = t1->left;
        if (t2 != NULL) t2 = t2->left;
        
        mergeTrees(t1, t2);        
        
        this->treeIndex = tree_prev;
        t1 = t1_prev;
        t2 = t2_prev;
        
        this->treeIndex = this->treeIndex->right;
        if (t1 != NULL) t1 = t1->right;
        if (t2 != NULL) t2 = t2->right;
        
        mergeTrees(t1, t2);
               
        //cout << "print tree: \n" << endl;
        //printTree(tree_prev);
        return tree_prev;
        
        */
        
        printTree(test(t1, t2));
        return NULL;
    }
    
private:
    TreeNode* treeIndex = NULL;
    
    void printTree(TreeNode* tree) {
        if (tree == NULL)
            return;        
        cout << tree->val << ' ' << endl;;
        printTree(tree->left);
        printTree(tree->right);
    }
    
    TreeNode* test(TreeNode* t1, TreeNode* t2) {
        if (t1 == NULL && t2 == NULL) {
            return treeIndex;
        } else {    
            this->treeIndex = new TreeNode(0);
            
            if (t1 != NULL)
                this->treeIndex->val += t1->val;                
            if (t2 != NULL)
                this->treeIndex->val += t2->val;
            //cout << treeIndex->val << endl;
        }
        
        TreeNode* tree_prev = this->treeIndex;
        TreeNode* t1_prev = t1;
        TreeNode* t2_prev = t2;
        
        //this->treeIndex = this->treeIndex->left;
        if (t1 != NULL) t1 = t1->left;
        if (t2 != NULL) t2 = t2->left;
        
        treeIndex->left = test(t1, t2);        
        
        this->treeIndex = tree_prev;
        t1 = t1_prev;
        t2 = t2_prev;
        
        //this->treeIndex = this->treeIndex->right;
        if (t1 != NULL) t1 = t1->right;
        if (t2 != NULL) t2 = t2->right;
        
        treeIndex->right = test(t1, t2);
               
        //cout << "print tree: \n" << endl;
        //printTree(tree_prev);
        return tree_prev;
    }
};
