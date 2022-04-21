#include <stdio.h>

int main(void) {
    int n; //줄 수를 입력받는다.
    printf("정수를 입력하세요 : ");
    scanf_s("%d", &n); //정수를 변수 n에 저장

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            printf(" "); //빈칸을 4개부터 하나씩 줄여가면서 출력
        }
        for (int k = 0; k <= i; k++) {
            printf("*"); //*을 하나씩 늘려가면서 출력
        }
        for (int s = 0; s < i; s++) {
            printf("*"); //*을 하나씩 늘려가면서 출력하지만 두번째줄부터 별을 출력한다.
        }
        printf("\n"); //줄바꿈
    }
    printf("\n\n");

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            printf("*"); //*을 5개부터 하나씩 줄여가면서 출력
        }
        for (int k = i; k < n - 1; k++) {
            printf("*"); //*을 4개부터 하나씩 줄여가면서 출력
        }
        printf("\n");
        for (int s = 0; s <= i; s++) {
            printf(" "); //빈칸을 두번째 줄부터 하나씩 늘려가며 출력
        }
    }
    printf("\n\n");
    int n2 = n / 2; //마름모꼴을 n줄 출력하기 위해 윗부분과 아래부분을 구분해준다.
    for (int i = 0; i <= n2; i++) { //마름모꼴의 윗부분은 세줄을 출력하면 된다.
        for (int j = i; j < n2 + 2; j++) {
            printf(" "); //빈칸을 네개에서 하나씩 줄여가며 출력
        }
        for (int k = 0; k <= i; k++) {
            printf("*"); //*을 한개부터 하나씩 늘려가면서 출력
        }
        for (int s = 0; s < i; s++) {
            printf("*"); //*을 두번째 줄부터 한개를 출력하고 하나씩 늘려간다.
        }
        printf("\n");
    }
    for (int i = 0; i < n2; i++) { //마름모꼴의 아랫부분은 두줄만 출력하면 된다.
        for (int j = 0; j <= i + 2; j++) {
            printf(" "); //빈칸을 세개에서 하나씩 늘려가면서 출력
        }
        for (int k = i; k < n2; k++) {
            printf("*"); //*을 두개에서 하나씩 줄여가면서 출력
        }
        for (int s = i + 1; s < n2; s++) {
            printf("*"); //*을 한개출력하고 그다음줄에선 출력하지 않는다.
        }
        printf("\n");//줄바꿈
    }
}
