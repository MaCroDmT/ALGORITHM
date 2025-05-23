#include <iostream>
#include <queue>

using namespace std;

const int N = 8;  // number of nodes
int adj[N][N];  // adjacency matrix
bool visited[N];  // visited array

void bfs(int s) {
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        cout << u << " ";  // print the current node
        q.pop();

        for (int v = 0; v < N; v++) {
            if (adj[u][v] && !visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
}

int main() {
    // construct the graph as an adjacency matrix
    int arr[N][N] = {{0, 1, 0, 0, 0, 0, 0, 0},
                     {1, 0, 0, 0, 1, 0, 0, 0},
                     {0, 0, 0, 0, 0, 1, 1, 0},
                     {0, 0, 0, 0, 0, 0, 0, 1},
                     {0, 1, 0, 0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0, 0, 0},
                     {0, 0, 0, 1, 0, 0, 0, 0}};

    // copy the array into adj
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            adj[i][j] = arr[i][j];
        }
    }

    // initialize visited array
    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }

    // start BFS from node 0
    bfs(0);

    return 0;
}
