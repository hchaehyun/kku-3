//kruskal algorithm
#include <stdio.h>
#include <stdlib.h>

typedef struct Edge {
    int src, dest, weight;
} Edge;

typedef struct Graph {
    int V, E;
    Edge* edges;
} Graph;

int cmp(const void* a, const void* b) {
    return ((Edge*)a)->weight - ((Edge*)b)->weight;
}

int find(int* parent, int i) {
    if (parent[i] == -1) {
        return i;
    }
    return find(parent, parent[i]);
}

void Union(int* parent, int x, int y) {
    int xset = find(parent, x);
    int yset = find(parent, y);
    parent[xset] = yset;
}

void KruskalMST(Graph* graph) {
    int V = graph->V;
    int E = graph->E;
    Edge result[V];
    int e = 0;
    int i = 0;

    qsort(graph->edges, E, sizeof(Edge), cmp);

    int* parent = (int*)malloc(V * sizeof(int));
    for (int i = 0; i < V; i++) {
        parent[i] = -1;
    }

    while (e < V - 1 && i < E) {
        Edge next_edge = graph->edges[i++];
        int x = find(parent, next_edge.src);
        int y = find(parent, next_edge.dest);

        if (x != y) {
            result[e++] = next_edge;
            Union(parent, x, y);
        }
    }

    printf("Edges in the constructed MST:\n");
    for (i = 0; i < e; i++) {
        printf("%d - %d (Weight: %d)\n", result[i].src, result[i].dest, result[i].weight);
    }
    free(parent);
}

int main() {
    FILE* file = fopen("aa.gp", "r");
    if (!file) {
        printf("Error: Unable to open file.\n");
        return 1;
    }

    int E, V;
    fscanf(file, "%d %d", &E, &V);

    Graph* graph = (Graph*)malloc(sizeof(Graph));
    graph->V = V;
    graph->E = E;
    graph->edges = (Edge*)malloc(E * sizeof(Edge));

    for (int i = 0; i < E; i++) {
        fscanf(file, "%d %d %d", &graph->edges[i].src, &graph->edges[i].dest, &graph->edges[i].weight);
    }
    fclose(file);

    KruskalMST(graph);

    free(graph->edges);
    free(graph);
    return 0;
}
