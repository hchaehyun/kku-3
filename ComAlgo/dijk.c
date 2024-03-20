#include <stdio.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>

#define NUM_CITIES 10
#define INF INT_MAX

const char *cities[] = {"서울", "원주", "천안", "강릉", "대구", "포항", "대전", "논산", "광주", "부산"};

void print_path(int parent[], int city);

int main() {
    int city_distances[NUM_CITIES][NUM_CITIES] = {
        {0, 15, 12, INF, INF, INF, INF, INF, INF, INF},
        {15, 0, INF, 21, 7, INF, INF, INF, INF, INF},
        {12, INF, 0, INF, INF, INF, 10, 4, INF, INF},
        {INF, 21, INF, 0, INF, 25, INF, INF, INF, INF},
        {INF, 7, INF, INF, 0, 19, 10, INF, INF, 9},
        {INF, INF, INF, 25, 19, 0, INF, INF, INF, 5},
        {INF, INF, 10, INF, 10, INF, 0, INF, INF, INF},
        {INF, INF, 4, INF, INF, INF, 3, 0, 13, INF},
        {INF, INF, INF, INF, INF, INF, INF, 13, 0, 15},
        {INF, INF, INF, INF, 9, 5, INF, INF, 15, 0}
    };

    int dist[NUM_CITIES], parent[NUM_CITIES];
    bool visited[NUM_CITIES] = {false};

    for (int i = 0; i < NUM_CITIES; i++) {
        dist[i] = INF;
        parent[i] = -1;
    }

    dist[0] = 0;

    for (int i = 0; i < NUM_CITIES - 1; i++) {
        int min_dist = INF;
        int u = -1;

        for (int j = 0; j < NUM_CITIES; j++) {
            if (!visited[j] && dist[j] < min_dist) {
                min_dist = dist[j];
                u = j;
            }
        }

        visited[u] = true;

        for (int v = 0; v < NUM_CITIES; v++) {
            if (!visited[v] && city_distances[u][v] != INF && dist[u] + city_distances[u][v] < dist[v]) {
                dist[v] = dist[u] + city_distances[u][v];
                parent[v] = u;
            }
        }
    }

    for (int i = 1; i < NUM_CITIES; i++) {
        printf("경로: ");
        print_path(parent, i);
        printf("\n");
    }

    return 0;
}

void print_path(int parent[], int city) {
    if (parent[city] == -1) {
        printf("%s ", cities[city]);
        return;
    }
    print_path(parent, parent[city]);
    printf("-> %s ", cities[city]);
}

