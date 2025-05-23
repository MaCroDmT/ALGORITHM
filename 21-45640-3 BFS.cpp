#include <iostream>
#include <queue>

using namespace std;

const int N = 8;
int adj[N][N];
bool visited[N];

void bfs(int s) {
    queue<int> q;
    visited[s] = true;
    q.push(s);

    while (!q.empty()) {
        int u = q.front();
        cout << u << " ";
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

    int arr[N][N] = {{0, 1, 0, 0, 0, 0, 0, 0},
                     {1, 0, 0, 0, 1, 0, 0, 0},
                     {0, 0, 0, 1, 0, 1, 1, 0},
                     {0, 0, 1, 0, 0, 0, 0, 1},
                     {0, 1, 0, 0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0, 0, 0},
                     {0, 0, 1, 0, 0, 0, 0, 0},
                     {0, 0, 0, 1, 0, 0, 0, 0}};


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            adj[i][j] = arr[i][j];
        }
    }


    for (int i = 0; i < N; i++) {
        visited[i] = false;
    }


    bfs(0);

    return 0;
}
