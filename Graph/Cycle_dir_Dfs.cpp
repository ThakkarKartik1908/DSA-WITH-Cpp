#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

class Graph
{ // for un-dir and un-weight Graph
    int V;
    list<int> *l; // int *arr;

public:
    Graph(int V)
    {
        this->V = V;
        l = new list<int>[V]; // arr = new int[v];
    }

    void addEdge(int u, int v)
    {
        l[u].push_back(v); // only directed edges
    }

    bool isCycledirDFS(int curr,vector<bool>& vis,vector<bool> &recPath)
    { // O(V+E)
        vis[curr] = true;
        recPath[curr] = true;

        for(int v : l[curr]){
            if(!vis[v]){
                if(isCycledirDFS(v,vis,recPath)){
                    return true;
                }
            }else if(recPath[v]){
                return true;
            }
        }

        recPath[curr] = false;
        return false;
    }

    bool isCycle()
    {
        vector<bool> vis(V, false);
        vector<bool> recPath(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                if(isCycledirDFS(i,vis,recPath)){
                    return true;
                }
            }
        }

        return false;
    }
};

int main()
{
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 3);
    //g.addEdge(3, 0);

    if(g.isCycle()){
        cout<<"Graph has a Cycle ";
    }else{
        cout<<"Graph Does't has a Cycle ";
    } 
}