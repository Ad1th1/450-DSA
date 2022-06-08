//Disjoint Set | Union By Rank and Path Compression

//-> find parent for each node
//-> do unions
//-> compress path by reducing depth of tree

//Time Complexity = O(4X)
//Space Complexity = O(n)   ---> rank and parent array

#include<iostream>

int parent[100000];
int rank[100000];

void makeSet(){
    
    for(int i=1;i<=n;i++){
        parent[i] = i;  // //make every node's parent themself
        rank[i] = 0;    //depth of nodes connected to it, updated only if the nodes, whose union you are forming have the same initial rank
    }
}

int findPar(int node){
    if(node == parent(node))
        return node;
    return parent[node] = findPar(parent[node]);
}

// 7 -> 6 -> 4 -> 3
// Path compression makes 7 -> 3


void union(int u, int v){
    u = findPar(u);
    v = findPar(v);

    if(rank[u]<rank[v])
        parent[u] = v;

    else if(rank[v]<rank[u])
        parent[v] = u;
    
    else{   //when they have the same rank
        parent[v] = u;
        rank[u] ++;
    }
    }
  
 int main(){
     makeSet();
     int m;
     cin>>m;
     while(m--){
         int u,v;
         union(u,v);
     }
      if(findPar(2)!=findPar(3)){
          cout<<"Different Component";
        else
            cout<<"Same";
      }
 }
