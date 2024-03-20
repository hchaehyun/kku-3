//prim_algorithm
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

typedef struct Graph {
    int V, E;
    int** adjMatrix;
} Graph;

int minKey(int key[], bool mstSet[], int V) {
    int min = INT_MAX;
    int min_index;

    for (int v = 0; v < V; v++) {
        if (mstSet[v] == false && key[v] < min) {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void printMST(int parent[], Graph* graph) {
    printf("Edge \tWeight\n");
    for (int i = 1; i < graph->V; i++) {
        printf("%d - %d \t%d\n", parent[i], i, graph->adjMatrix[i][parent[i]]);
    }
}

void PrimMST(Graph* graph) {
    int V = graph->V;
    int parent[V];
    int key[V];
    bool mstSet[V];

    for (int i = 0; i < V; i++) {
        key[i] = INT_MAX;
        mstSet[i] = false;
    }

    key[0] = 0;
    parent[0] = -1;

    for (int count = 0; count < V - 1; count++) {
        int u = minKey(key, mstSet, V);
        mstSet[u] = true;

        for (int v = 0; v < V; v++) {
            if (graph->adjMatrix[u][v] && mstSet[v] == false && graph->adjMatrix[u][v] < key[v]) {
                parent[v] = u;
                key[v] = graph->adjMatrix[u][v];
            }
        }
    }

    printMST(parent, graph);
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

    graph->adjMatrix = (int**)malloc(V * sizeof(int*));
    for (int i = 0; i < V; i++) {
        graph->adjMatrix[i] = (int*)malloc(V * sizeof(int));
        for (int j = 0; j < V; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }

    for (int i = 0; i < E; i++) {
        int src, dest, weight;
        fscanf(file, "%d %d %d", &src, &dest, &weight);
        graph->adjMatrix[src][dest] = weight;
        graph->adjMatrix[dest][src] = weight;
    }
    fclose(file);

    PrimMST(graph);

    for (int i = 0; i < V; i++) {
        free(graph->adjMatrix[i]);
    }
    free(graph->adjMatrix);
    free(graph);
    return 0;
}
