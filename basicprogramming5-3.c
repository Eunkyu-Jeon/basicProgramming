#include <stdio.h>
int main() {
    printf("\a h\tw3\n");//경고음과 수평탭 사용
    printf("abcd\befg\n");//백스페이스 사용
    printf("a\nb\n");//줄바꿈 사용
    printf("ab\vcd\n");//수직탭 사용
    printf("abcd\refgh\n");//캐리지리턴 사용
    printf("abcd\fefgh\n");//폼피드 사용
    printf("\"\", \'\',\\\n");//큰따옴표와 작은따옴표, 역슬래시 출력
    printf("abcd\0efgh");//널문자 사용
}
