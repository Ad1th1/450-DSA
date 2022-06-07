// https://practice.geeksforgeeks.org/problems/sorted-list-to-bst/1

// Essentially find the middle element of the linked list recursively

class Solution{
  public:
    LNode* findMid(LNode* head){
        LNode* slow = head;
        LNode* fast = head->next;
        
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
  
    TNode* sortedListToBST(LNode *head) {
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return new TNode(head->data);
            
        LNode* slow = findMid(head);
        LNode* mid = slow->next;
        slow->next = NULL;
        
        TNode* root = new TNode(mid->data);
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(mid->next);
        return root;
        
        
    }
};
