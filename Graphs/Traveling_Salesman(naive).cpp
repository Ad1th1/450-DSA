// Naive approach of iterating through each path and choosing minimum path

#include<bits/stdc++.h>
using namespace std;
#define V 4

int tsp(int graph[][V],int s){
    vector<int> vertex;
    for(int i=0;i<V;i++){
        if(i!=s)
            vertex.push_back(i);
    }
    int min_path = INT_MAX;
    do{
        int curr=0;
        int k=s;

        for(int i=0;i<vertex.size();i++){
            curr +=graph[k][vertex[i]];
            k= vertex[i];
        }
        curr+=graph[k][s];
        min_path=min(min_path,curr);

    }while(next_permutation(vertex.begin(),vertex.end()));
    return min_path;
}

int main(){
    int graph[][V] = {{0,10,15,20},{10,0,35,25},{15,35,0,30},{20,25,30,0}};
    
    int s = 0;
    cout<<tsp(graph,s);
    return 0;

}
