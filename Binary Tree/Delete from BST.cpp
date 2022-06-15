/* on deleting a node from bst, replace with:
  - max in left or min in right
  - copy value in tartgetted node
  - delete duplicate from right sub-tree */


int minVal(Node* root){
    int minv = root->data;
    while(root->left!=NULL){
        minv = root->left->data;
        root=root->left;
    }
    return minv;
}
// Function to delete a node from BST.
Node *deleteNode(Node *root, int x) {
    if(root==NULL)
        return NULL;
    
    if(x<root->data)
        root->left = deleteNode(root->left,x);
        
    else if(x>root->data)
        root->right = deleteNode(root->right,x);
    
    else{
        if(root->left == NULL)
            return root->right;
        
        else if(root->right == NULL)
            return root->left;    
    
    root->data = minVal(root->right);
    root->right=deleteNode(root->right, root->data);
    
    }
    return root;
}
