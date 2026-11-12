#include <stdio.h>
#define INF 999

int main() {
    int n, src, des, i, j, u;

    printf("Enter vertices: ");
    scanf("%d", &n);

    int g[n][n], d[n], v[n];

    printf("Enter adjacency matrix:\n");
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &g[i][j]);

    printf("Enter source and destination: ");
    scanf("%d%d", &src, &des);

    for(i=0;i<n;i++) {
        d[i] = INF;
        v[i] = 0;
    }

    d[src] = 0;

    for(i=0;i<n-1;i++) {
        u = -1;

        for(j=0;j<n;j++)
            if(!v[j] && (u==-1 || d[j]<d[u]))
                u = j;

        if(u==-1 || d[u]==INF)
            break;

        v[u] = 1;

        for(j=0;j<n;j++)
            if(g[u][j] && !v[j] && d[u]+g[u][j]<d[j])
                d[j] = d[u]+g[u][j];
    }

    if(d[des]==INF)
        printf("No path exists");
    else
        printf("Shortest distance = %d", d[des]);

    return 0;
}
