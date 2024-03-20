#include <stdio.h>
#include <string.h>

#define N 8 // 도시의 개수
#define INF 999 // 무한대 값

char cityNames[N][10] = { "서울", "원주", "천안", "강릉", "대구", "포항", "부산", "광주" }; // 도시 이름 배열

int D[N][N]; // 최단 거리 배열
int Path[N][N]; // 최단 경로 배열

void print_path(int i, int j);

int main() {
    int i, j, k, tmp;

    // 초기화
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            D[i][j] = (i == j) ? 0 : INF; // 자기 자신으로 가는 거리는 0, 나머지는 무한대로 초기화
            Path[i][j] = -1; // 최단 경로 배열 초기화
        }
    }

    // 데이터 입력
    D[0][1] = 15; // 서울 -> 원주
    D[0][2] = 12; // 서울 -> 천안
    D[1][3] = 21; // 원주 -> 강릉
    D[1][4] = 7;  // 원주 -> 대구
    D[4][5] = 19; // 대구 -> 포항
    D[4][6] = 9;  // 대구 -> 부산
    D[5][6] = 5;  // 포항 -> 부산
    D[3][6] = 15; // 강릉 -> 부산
    D[2][7] = 10; // 천안 -> 대전
    D[2][8] = 4;  // 천안 -> 논산
    D[8][7] = 3;  // 논산 -> 대전
    D[7][9] = 10; // 대전 -> 대구

    // Floyd 알고리즘 적용
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            Path[i][j] = (D[i][j] != INF) ? j : -1; // 경로 초기화
        }
    }

    for (k = 0; k < N; k++) {
        for (i = 0; i < N; i++) {
            if (i == k) continue;
            for (j = 0; j < N; j++) {
                if (j == k || j == i) continue;
                if (D[i][k] == INF || D[k][j] == INF) continue;
                if ((tmp = D[i][k] + D[k][j]) < D[i][j]) {
                    D[i][j] = tmp; // 최단 거리 갱신
                    Path[i][j] = k; // 최단 경로 업데이트
                }
            }
        }
        printf("=======%d=======\n", k + 1);
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                printf((D[i][j] >= INF) ? "INF " : "%3d ", D[i][j]); // 최단 거리 출력
            }
            printf("\n");
        }
    }

    printf("=====================\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (i != j) {
                print_path(i, j); // 최단 경로 출력
            }
        }
    }

    return 0;
}

void print_path(int i, int j) {
    if (Path[i][j] == -1 || i == j) {
        return; // 경로가 없거나 출발 도시와 도착 도시가 같으면 종료
    }
    printf("%3d : %s", D[i][j], cityNames[i]); // 최단 거리와 출발 도시 출력
    while (i != j) {
        i = Path[i][j]; // 다음 경유지로 이동
        printf("-> %s", cityNames[i]); // 경유지 출력
    }
    printf("\n");
}
