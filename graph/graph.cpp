#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

// void graph(int ver,int edge,vector<pair<int,int>> p,vector<int> adj[]){
//     for(auto it: p){
//         adj[it.first].push_back(it.second);
//         adj[it.second].push_back(it.first);
//     }
    
// }

// int main(){
//     int edge = 5 , ver = 4;
//     vector<pair<int,int> > gr{{0,1},{1,2},{0,2},{1,3},{2,3}};
//     vector<int> adj[ver];
//     graph(ver,edge,gr,adj);
//     for(int i=0;i<ver;i++){
//         cout<<"for "<<i<<" ";
//         for(auto x: adj[i]){
//             cout<<x<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// class Graph{
//     public:
//         unordered_map<int,list<int>> adjList;
//         void addedje(int u,int v ,bool direction ){
//             if(direction==1){
//                 adjList[u].push_back(v);
//             }
//             else{
//                 adjList[u].push_back(v);
//                 adjList[v].push_back(u);


//             }
//         }

//         void printlist(){
//             for(auto it:adjList){
//                 cout<<"at  "<<it.first<<": {";
//                 for(auto inside: it.second ){
//                 cout<<inside<<",";
//                 }
//                 cout<<"}"<<endl;
                
//             }
//         }
// };
class  Graph{
    public:
    unordered_map<int,list<pair<int,int>>> adjList;

    void addedge(int u,int v,int wt, bool direction){
        if(direction == 1){
            adjList[u].push_back({v,wt});
        }
        else{
            adjList[u].push_back({v,wt});
            adjList[v].push_back({u,wt});
        }
    }

    void printGraph(){
        for(auto i :adjList){
            cout<<"at :  "<<i.first;
            for(auto ngh:i.second){
                cout<<" {"<<ngh.first<<","<< "weight : "<<ngh.second<<"}";
            }
            cout<<endl;

        }
    }


};

int main(){
    Graph g;
    g.addedge(0,1,40,0);
    g.addedge(1,2,40,0);
    g.addedge(2,3,50,0);
    g.addedge(1,3,60,0);
    g.printGraph();

    return 0;
}