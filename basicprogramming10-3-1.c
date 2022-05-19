#include <stdio.h>

int main(void) {
    int input;
    printf("정수 입력: ");
    scanf_s("%d", &input);
    printf("입력값: %d\n", input);
    printf("주소값: %u(십진수), %p(16진수)\n", &input, &input);//input의 주소값 출력
    printf("주소값: %d(십진수), %#p(16진수)\n", &input, &input);//주소값에 진수기호 붙여서 출력
    printf("주소값 크기: %d\n", sizeof(&input));//주소값의 데이터 크기 출력

    return 0;
}
