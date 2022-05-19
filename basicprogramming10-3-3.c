#include <stdio.h>
int main(void) {
    int i = 20;//변수 i
    int* pi = &i;//i의 주소값 저장
    int** dpi = &pi;//pi의 주소값 저장

    printf("%p %p %p\n", &i, pi, *dpi);
    *pi = i + 2;//포인터를 통해 i의 값 2증가
    printf("%d %d %d\n", i, *pi, **dpi);//22출력

    **dpi = *pi + 2;//이중포인터를 통해 i값 2증가
    printf("%d %d %d\n", i, *pi, **dpi);//24출력

    return 0;
}
