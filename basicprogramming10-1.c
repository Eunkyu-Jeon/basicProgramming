#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void printArr(int* a, int* b, int m, int n);//배열을 출력하는 함수
void changeArr(int* a, int* b, int m, int n);//배열의 요소를 서로 바꾸는 함수
int main() {
    int m, n;
    printf("배열 1 크기 입력: ");
    scanf("%d", &m);
    printf("배열 2 크기 입력: ");
    scanf("%d", &n);
    int* a=(int*)malloc(m*sizeof(m));
    int* b = (int*)malloc(n * sizeof(n));
    for (int i = 0; i < m; i++) {
        int s;
        printf("배열1 %d번째 요소입력 :", i);
        scanf("%d", &s);
        *(a + i) = s;
    }
    for (int i = 0; i < n; i++) {
        int s;
        printf("배열2 %d번째 요소입력 :", i);
        scanf("%d", &s);
        *(b + i) = s;
    }//배열 크기와 요소 입력받는다.

    printf("함수 사용 전\n");
    printArr(a, b, m, n);//입력받은 배열 출력

    printf("함수 사용 후\n");
    changeArr(a, b, m, n);//배열 요소 교환
}
void printArr(int* a, int* b, int m, int n) {
    printf("배열 1: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", *(a + i));
    }//배열 주소 증가시켜가며 배열출력
    printf("\n배열 2: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(b + i));
    }
    printf("\n");
}
void changeArr(int* a, int* b, int m, int n) {
    if (m != n) //크기가 다를경우 교환불가
        printf("교환불가!\n");
    else {//배열의 크기가 같을경우
        for (int i = 0; i < m; i++) {
            int tmp;
            tmp = *(a + i);
            *(a + i) = *(b + i);
            *(b + i) = tmp;//임시로 배열요소 tmp에 저장한다음에 요소 교환
        }
        printArr(a, b, m, n);//배열크기가 같아서 교한이 되면 함수를 이용해 배열 출력
    }
}
