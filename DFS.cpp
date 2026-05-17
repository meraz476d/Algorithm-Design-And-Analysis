#include <iostream>
#include <vector>
using namespace std;

void DFS(vector<vector<int>>& adj, int v, vector<bool>& visited) {
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v])
        if (!visited[u])
            DFS(adj, u, visited);
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    addEdge(0, 1); addEdge(0, 2); addEdge(1, 3);
    addEdge(2, 4); addEdge(3, 5);
    vector<bool> visited(n, false);
    cout << "DFS from 0: ";
    DFS(adj, 0, visited);
    return 0;
}