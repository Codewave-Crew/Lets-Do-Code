#include<bits/stdc++.h>
using namespace std;

template<typename T>
// Class containing graph and its functions
class Graph{
    // Map where each node contains a list of its neighbours
    map<T, list<T> > l;
    int ne = 0;
    public:
    // Function to add an edge between two node x and y
    void addEdge(int x, int y){
        l[x].push_back(y);
        l[y].push_back(x);
        ne++;
    }
    // Function to perform bfs
    void bfs(T src)
    {
        // map containing whether a particular node has been visited or not so that no node gets printed more than one time
        map<T, bool> visited;
        // A queue used to push the current node's neighbours and pop the current node
        queue<T> q;

        q.push(src);
        visited[src] = true;

        while(!q.empty())
        {
            T node = q.front();
            q.pop();
            cout<<node<<endl;

            for(T nbr : l[node])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                }
            }
        }
    }
};

int main()
{
    Graph<int> g;
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(1, 5);

    g.bfs(3);
}