#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v]) {
        if (!visited[u]) {
            dfs(u);
        }
    }
}

int main() {
    int arr[] = {1, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    adj.resize(n);
    visited.assign(n, false);
    for (int i = 0; i < n; i++) {
        if (i > 0) {
            adj[i].push_back(i - 1);
        }
        if (i < n - 1) {
            adj[i].push_back(i + 1);
        }
    }
    int start = 0;
    dfs(start);
    return 0;
}
