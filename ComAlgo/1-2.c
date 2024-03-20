// 재귀적인 알고리즘으로 짠 것
// 이 코드를 chat gpt에서 검색해볼것
#include <stdio.h>
int bsearch(int arr[], int key, int beg, int end);
int main(){
    int a[] = {10,20,25,35,45,55,60,76,80,90,95};
    int beg = 0, end, mid, key;
    //key==55;
    end = sizeof(a) / sizeof(int);
    scanf("%d", &key);
    mid = bsearch(a, key, beg, end);
    if(mid == -1) 
        printf("%d is not found\n", key);
    else 
        printf("A[%d]=%d\n", mid, a[mid]);
}
int bsearch(int arr[], int key, int beg, int end){
    int mid = (beg + end)/2; // 가운데를 찾는다
    if(end - beg <= 1) // 가운데랑 키값을 비교하는대
        return arr[mid] == key ? mid : -1;
    if(key < arr[mid]) //키가 왼쪽에 있으면
        return bsearch(arr, key, beg, mid); //앞 절반을 검색하고
    else // 아니면
        return bsearch(arr, key, mid, end); // 뒤 절반을 검색한다
}