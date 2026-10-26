
#include <stdio.h>
#define INF 999999

int main() {
    int n, src;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    int graph[n][n], dist[n], visited[n];

    printf("Enter adjacency matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &graph[i][j]);
        }
    }

    printf("Enter source vertex: ");
    scanf("%d", &src);

    for (int i = 0; i < n; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = -1;

        for (int i = 0; i < n; i++) {
            if (!visited[i] &&
                (u == -1 || dist[i] < dist[u]))
                u = i;
        }

        if (u == -1 || dist[u] == INF)
            break;

        visited[u] = 1;

        for (int v = 0; v < n; v++) {
            if (!visited[v] && graph[u][v] != 0 &&
                dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Shortest distances:\n");
    for (int i = 0; i < n; i++) {
        if (dist[i] == INF)
            printf("%d -> %d = Unreachable\n", src, i);
        else
            printf("%d -> %d = %d\n", src, i, dist[i]);
    }

    return 0;
}
