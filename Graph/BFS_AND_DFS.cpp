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
        l[u].push_back(v);
        l[v].push_back(u);
    }

    void bfs()
    {
        // BFS traversal O(V+E)
        queue<int> Q;
        vector<bool> vis(V, false);

        Q.push(0);
        vis[0] = true;

        while (Q.size() > 0)
        {
            int u = Q.front(); // u-v
            Q.pop();

            cout << u << " ";

            for (int v : l[u])
            { // immediate neighbers
                if (!vis[v])
                {
                    vis[v] = true;
                    Q.push(v);
                }
            }
        }
        cout << endl;
    }

    void dfsHelper(int u, vector<bool> &vis)
    {
        // DFS traversal O(V+E)
        cout << u << " ";
        vis[u] = true;

        for (int v : l[u])
        {
            if (!vis[v])
            {
                dfsHelper(v, vis);
            }
        }
    }

    void dfs()
    {
        int src = 0;
        vector<bool> vis(V, false);
        dfsHelper(src, vis);
    }

    void dfsDisconnected()
    {
        int src = 0;
        vector<bool> vis(V, false);
        for (int i = 0; i < V; i++)
        {
            if (!vis[i])
            {
                dfsHelper(i, vis);
            }
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.addEdge(2, 3);

    cout << "BFS Traversal : ";
    g.bfs();

    cout << "BFS Traversal : ";
    g.dfsDisconnected();
}