#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char a, b, c, d, e;//char형 변수 5개 선언
    printf("소문자 다섯개 입력 :");
    scanf("%c %c %c %c %c", &a, &b, &c, &d, &e); //scanf를 통해 소문자 다섯개를 입력받는다
    a -= 32;
    b -= 32;
    c -= 32;
    d -= 32;
    e -= 32; //char형의 알파벳은 ASCII코드의 숫자로 저장되며 대문자로 변환하기 위해 -32를 해준다.

    printf("%c %c %c %c %c\n", a, b, c, d, e); //바뀐 ASCII코드를 %c를 이용해 char형으로 다시 출력
}
