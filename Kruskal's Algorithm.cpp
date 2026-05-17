#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Edge {
    int u, v, weight;
};

int parent[100], rankArr[100];

int find(int x) {
    if (parent[x] != x)
        parent[x] = find(parent[x]);
    return parent[x];
}

void unionSets(int x, int y) {
    int px = find(x), py = find(y);
    if (rankArr[px] < rankArr[py]) swap(px, py);
    parent[py] = px;
    if (rankArr[px] == rankArr[py]) rankArr[px]++;
}

int main() {
    int n = 4, e = 5;
    vector<Edge> edges = {
        {0, 1, 10}, {0, 2, 6}, {0, 3, 5},
        {1, 3, 15}, {2, 3, 4}
    };

    sort(edges.begin(), edges.end(), [](Edge a, Edge b) {
        return a.weight < b.weight;
    });

    for (int i = 0; i < n; i++) { parent[i] = i; rankArr[i] = 0; }

    cout << "Edges in MST:\n";
    int totalCost = 0;
    for (auto& edge : edges) {
        if (find(edge.u) != find(edge.v)) {
            cout << edge.u << " - " << edge.v << " : " << edge.weight << "\n";
            totalCost += edge.weight;
            unionSets(edge.u, edge.v);
        }
    }
    cout << "Total Cost: " << totalCost << "\n";
    return 0;
}