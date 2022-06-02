https://practice.geeksforgeeks.org/problems/help-the-old-man3848/1

class Solution{
public:

    int cnt=0,a,b;
    
    void TOH(int N,int n,int from,int to,int aux){
        if(cnt>=n || N==0)
            return;
        TOH(N-1,n,from,aux,to);
        cnt+=1;
        if(cnt==n){
            a=from;
            b=to;
            return;
        }
        TOH(N-1,n,aux,to,from);
    }
    
    vector<int> shiftPile(int N, int n){
        a=0,b=0;
        TOH(N,n,1,3,2);
        return {a,b};
        }
};
