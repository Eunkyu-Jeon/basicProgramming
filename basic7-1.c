#include <stdio.h>

int main() {
    for (int i = 2; i < 10; i++) { //각 단을 나타내는 i
        for (int j = 1; j < 10; j++) { //곱하는 수를 나타내는 j
            printf("%dx%d=%d ", i, j, i * j); //i,j,i*j를 차례대로 출력한다.
        }
        printf("\n"); //각 단을 끝나면 줄바꿈을 해준다.
    }
}
