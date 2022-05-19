#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int* mul(int* arr1, int* arr2, int a, int b, int c, int d); //행렬의 합,차,곱 구하는 함수 정의
void printArr(int* arr, int a, int b);//행렬 출력하는 함수
int main() {
    int a, b, c, d;
    printf("행렬 1 행");
    scanf("%d", &a);
    printf("행렬 1 열");
    scanf("%d", &b);
    printf("행렬 2 행");
    scanf("%d", &c);
    printf("행렬 2 열");
    scanf("%d", &d);

    int sizeA=a * b;
    int sizeB = c * d;

    int* arr1=(int*)malloc(sizeA*sizeof(int));
    int* arr2=(int*)malloc(sizeB*sizeof(int)); //행렬의 크기 정의

    printf("행렬1 입력\n");
    for (int i = 0; i < sizeA; i++) {
        int k;
        printf("행렬 1 %d 번째 요소 : ",i+1);
        scanf("%d", &k);
        arr1[i] = k;
    } //행렬요소를 입력받는다

    printf("행렬2 입력\n");
    for (int i = 0; i < sizeB; i++) {
        int k;
        printf("행렬 2 %d 번째 요소 : ",i+1);
        scanf("%d", &k);
        arr2[i] = k;
    } //행렬요소를 입력받는다
    if (b == c) { //배열1의 열과 배열2의 행이 같다면 행렬곱 계산 가능
        printArr(mul(arr1, arr2, a, b, c, d), a, d);
    }
    else//그렇지않다면 행렬곱 계산불가
        printf("출력불가");
}
int* mul(int* arr1, int* arr2, int a, int b, int c, int d) { //행렬곱 구하는 함수
    int sizeC = a * d; //결과 행렬의 크기는 배열1의 행과 배열2의 열의 곱
    int* arr3=(int*)malloc(sizeC*sizeof(int));//결과 저장할 배열 생성


    for (int j = 0; j < a; j++) {
        for (int i = 0; i < d; i++) {
            int m = 0;
            for (int k = 0; k < b; k++) {
                m += *(arr1 + (j * b + k)) * *(arr2 + (d * k + i));
            }
            *(arr3 + (j * d + i)) = m;
        }
    }
    return arr3;//결과 행렬의 주소 반환
}
void printArr(int* arr, int a, int b) {
    printf("두 행렬의 곱\n");
    for (int i = 0; i < (a * b); i++) {
        if (i % b == 0)//i가 열만큼 반복되면 줄을 바꾼다
            printf("\n");
        printf("%d ", *(arr + i));

    }
}
