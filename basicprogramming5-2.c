#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    char a, b;
    printf("숫자 두개 입력 :");
    scanf("%c %c", &a, &b); //%c를 이용해 두 수를 입력받는다.
    char a1, b1;

    a1 = a - 48;
    b1 = b - 48; //0~9의 숫자는 ASCII코드상 48~57에 저장되므로 숫자를 맞춰주기 위해 -48을 해준다.

    printf("두 수의 덧셈 : %d\n", a1 + b1);
    printf("두 수의 뺄셈 : %d\n", a1 - b1);
    printf("두 수의 곱셈 : %d\n", a1 * b1); //%d를 이용하여 출력한다.
    printf("두 수의 나눗셈 : %.2f\n", (double)a1 / (double)b1); //나눗셈의 경우 결과로 소수가 나오는 경우도 있으므로 a1과 b1을 double로 형변환을 해준 이후 %.2f를 통해 소수점 두번째 자리까지 결과를 출력한다.
}
