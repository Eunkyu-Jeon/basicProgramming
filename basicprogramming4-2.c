#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int a = INT_MAX;//int형 최대값
    int b = INT_MIN;//int형 최소값
    printf("%d,%d\n", a, b);

    int c = CHAR_MAX;//char형 최대값
    int d = CHAR_MIN;//char형 최소값
    printf("%d,%d\n", c, d);

    double e = DBL_MAX;//double형 최대값
    double f = DBL_MIN;//double형 최소값
    printf("%e,%e\n", e, f); //수가 크기때문에 지수형태로 출력

    float g = FLT_MAX;//float형 최대값
    float h = FLT_MIN;//float형 최소값
    printf("%e,%e\n", g, h);

}