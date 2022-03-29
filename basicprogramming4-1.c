#include <stdio.h>

int main() {
    int a; 
    int b; //두 수를 int 형으로 선언
    int sum, min, mul; //계산의 결과값을 int 형으로 선언한다.
    printf("input number a,b : ");
    scanf_s("%d %d", &a, &b); //scanf_s를 사용해서 두 수를 입력받는다.

    sum = a + b;
    min = a - b;
    mul = a * b;

    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, min);
    printf("%d * %d = %d\n", a, b, mul); //printf를 통하여 출력

}