#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(vector<vector<int>>& adj, int start, int n) {
    vector<bool> visited(n, false);
    queue<int> q;
    visited[start] = true;
    q.push(start);
    while (!q.empty()) {
        int v = q.front(); q.pop();
        cout << v << " ";
        for (int u : adj[v])
            if (!visited[u]) {
                visited[u] = true;
                q.push(u);
            }
    }
}

int main() {
    int n = 6;
    vector<vector<int>> adj(n);
    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    };
    addEdge(0, 1); addEdge(0, 2);
    addEdge(1, 3); addEdge(2, 4); addEdge(3, 5);
    cout << "BFS from 0: ";
    BFS(adj, 0, n);
    return 0;
}