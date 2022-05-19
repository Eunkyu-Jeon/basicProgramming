#include <stdio.h>
int main(void) {
    int a[4] = { 1,3,6,8 };
    int* pa = &a[0];

    printf("%d %d %d %d\n", *(pa), *(pa + 1), *(pa + 2), *(pa + 3));//a[0],a[1],a[2],a[3]
    printf("%d %d %d %d\n", pa[0], pa[1], pa[2], pa[3]);//a[0],a[1],a[2],a[3]
    printf("%d ", ++ * pa);//a[0]=a[0]+1 ==>2
    printf("%d ", *++pa);//a[0]=a[0]+1 ==>3
    printf("%d ", *pa++);//pa값 출력후 주소 1증가 pa=a[1]
    printf("%d ", -- * pa++);//pa값-1출력 후 주소 1증가
    printf("%d\n", (*pa)--);//pa값 출력 후 주소 1감소

    printf("%d %d %d %d\n", a[0], a[1], a[2], a[3]);//포인터로 조절한 배열 출력
    return 0;
}
