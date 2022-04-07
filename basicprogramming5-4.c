#include <stdio.h>
#include <limits.h>
int main() {
    int c = CHAR_MAX;//char형 최대값
    int d = CHAR_MIN;//char형 최소값
    printf("%d,%d\n", c, d);

    char maxNum = 128; //char형의 최대값보다 1높은값
    char minNum = -129; //char형의 최소값보다 1작은값
    printf("%d %d\n", maxNum, minNum);
}
