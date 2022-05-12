#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#define a 2
#define b 2
#define c 2
#define d 2 //행렬의 크기 정의

void sum(int arr1[a][b], int arr2[c][d]);
void min(int arr1[a][b], int arr2[c][d]);
void mul(int arr1[a][b], int arr2[c][d]); //행렬의 합,차,곱 구하는 함수 정의
int main() {
    int arr1[a][b];
    int arr2[c][d]; //행렬의 크기 정의

    printf("행렬1 입력\n");
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            int k;
            printf("행렬(%d,%d) ", i + 1, j + 1);
            scanf_s("%d", &k);
            arr1[i][j] = k;
        } //행렬요소를 입력받는다
    }

    printf("행렬2 입력\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < d; j++) {
            int k;
            printf("행렬(%d,%d) ", i + 1, j + 1);
            scanf_s("%d", &k);
            arr2[i][j] = k;
        }
    }

    sum(arr1, arr2); //행렬의 합
    min(arr1, arr2); //행렬의 차
    mul(arr1, arr2); //행렬의 곱
}
void sum(int arr1[a][b], int arr2[c][d]) {
    if ((a != c) || (b != d))
        printf("행렬의 크기가 달라 합을 계산할 수 없음\n"); //두 행렬의 행과 열의 크기가 하나라도 다르면 합을 구할 수 없다
    else { //행렬의 크기가 같은경우
        int arr3[a][b];
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                arr3[i][j] = arr1[i][j] + arr2[i][j]; //각 행과 열별로 더한다
            }
        }
        printf("두 행렬의 합\n");
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n");//행렬 출력
        }
    }
}
void min(int arr1[a][b], int arr2[c][d]) {
    if ((a != c) || (b != d))
        printf("행렬의 크기가 달라 차를 계산할 수 없음\n");
    else {
        int arr3[a][b];
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                arr3[i][j] = arr1[i][j] - arr2[i][j]; //각 행과 열의 차를 구한다.
            }
        }
        printf("두 행렬의 차\n");
        for (int i = 0; i < b; i++) {
            for (int j = 0; j < a; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n"); //행렬 출력
        }
    }
}
void mul(int arr1[a][b], int arr2[c][d]) {
    if (b != c)
        printf("행렬의 크기가 달라 곱을 계산할 수 없음"); //첫번째 행렬의 행과 두번째 행렬의 열이 다를경우 곱을 구할수 없다
    else {
        int arr3[a][d]; //계산이 될경우 행렬의 크기는 첫번째행렬의 행과 두번째 행렬의 열의 크기와 같다.
        for (int i = 0; i < a; i++) { //첫번쨰 행렬의 열만큼 반복
            for (int j = 0; j < d; j++) { //두번째 행렬의 행만큼 반복
                int m = 0;
                for (int k = 0; k < b; k++) {
                    m += arr1[i][k] * arr2[k][j]; //b만큼 반복하며 곱의 합을 구한다.
                }
                arr3[i][j] = m; //첫번째 행렬의 행과 두번째 행렬의 열의 곱의 합
            }
        }
        printf("두 행렬의 곱\n");
        for (int i = 0; i < a; i++) {
            for (int j = 0; j < d; j++) {
                printf("%d ", arr3[i][j]);
            }
            printf("\n"); //행렬의 곱 출력
        }
    }
}
