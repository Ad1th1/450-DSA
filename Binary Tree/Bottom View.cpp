// Bottom view of a binary tree


class Solution {
  public:
    vector <int> bottomView(Node *root) {
        if(root==NULL)
            return {};
        queue<pair<Node*,int>> q;
        map<int,int>m;
        q.push({root,0});
        while(!q.empty()){
            
            for(int i=0;i<q.size();i++){
                pair<Node*,int>p = q.front();
                q.pop();
                Node* n = p.first;
                int hd = p.second;
                m[hd] = n->data;
                if(n->left)
                    q.push({n->left,hd-1});
                if(n->right)
                    q.push({n->right,hd+1});
                }
            
        }
        vector<int>res;
        for(auto it:m)
            res.push_back(it.second);
            return res;
    }
};
