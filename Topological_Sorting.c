#include<stdio.h>

int graph[10][10], visited[10], stack[10];
int top = -1, n;

void dfs(int node)
{
    visited[node] = 1;

    for(int i=0; i<n; i++)
    {
        if(graph[node][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }

    stack[++top] = node;
}

int main()
{
    int edges, u, v;

    printf("Enter number of vertices: ");
    scanf("%d",&n);

    printf("Enter number of edges: ");
    scanf("%d",&edges);

    printf("Enter edges (u v):\n");

    for(int i=0; i<edges; i++)
    {
        scanf("%d %d",&u,&v);
        graph[u][v] = 1;
    }

    for(int i=0; i<n; i++)
    {
        if(visited[i] == 0)
        {
            dfs(i);
        }
    }

    printf("Topological Sorting: ");

    while(top != -1)
    {
        printf("%d ", stack[top--]);
    }

    return 0;
}
