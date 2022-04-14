#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)); //srand함수 사용
    int num;
    for (int i = 0; i < 5; i++) {
        num = rand();
        printf("%d\n", num);
    }
}
