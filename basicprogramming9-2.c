#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int func(int n); //함수 선언
int main() {
    int n;
    printf("n입력 : ");
    scanf_s("%d", &n);//구하고싶은 n번째 항을 입력받는다
    printf("%d\n", func(n));

}
int func(int n) {
    if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (n == 3)
        return 2; //세개의 항을 더해주어야 하므로 처음세개 항을 지정해준다.
    else if (n >= 3)
        return func(n - 1) + func(n - 2) + func(n - 3); //재귀함수를 통하여 직전 세개의 항의 합 출력
    else
        return -1;
}
