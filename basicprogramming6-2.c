#include <stdio.h>
int main() {
    float a, b, r, x, y;
    printf("원의 중심을 입력하세요 (a,b): ");
    scanf_s("%f %f", &a, &b);
    printf("원의 반지름을 입력하세용 r : ");
    scanf_s("%f", &r);
    printf("좌표를 입력하세요 (x,y) : ");
    scanf_s("%f %f", &x, &y); //원의 중심, 반지름, 위치를 알고싶은 점의 좌표를 입력받는다.

    float circle = r * r;
    float d = (a - x) * (a - x) + (b - y) * (b - y); //원의 반지름의 제곱과 원의중심에서 점까지의 거리의 제곱을 비교한다.
    if (circle > d) { //반지름이 거리보다 큰경우 좌표는 원내부에 존재
        printf("원 안에 있음\n");
    }
    else if (circle == d) { //반지름과 거리가 같은경우 좌표는 원 위에 존재
        printf("원 위에 있음\n");
    }
    else if (circle < d) { //반지름이 거리보다 작은경우 좌표는 원 밖에 존재.
        printf("원 밖에 있음\n");
    }
}
