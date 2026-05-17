#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n = 5;
    int matrix[5][5] = {0};
    vector<vector<int>> adjList(n);

    auto addEdge = [&](int u, int v) {
        matrix[u][v] = matrix[v][u] = 1;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    };

    addEdge(0, 1); addEdge(0, 2);
    addEdge(1, 3); addEdge(2, 4);

    cout << "Adjacency Matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }

    cout << "\nAdjacency List:\n";
    for (int i = 0; i < n; i++) {
        cout << i << ": ";
        for (int v : adjList[i]) cout << v << " ";
        cout << "\n";
    }
    return 0;
}