#include <stdio.h>

int main() {
    float arr[3] = { 0 }; //배열 arr초기화, 세변의 길이가 정수로 정해지지 않았으므로 float형 배열 생성
    for (int i = 0; i < 3; i++) {
        printf("삼각형 %d번째 변의 길이 입력 : ", i + 1);
        scanf_s("%f", &arr[i]); //세번 반복하면서 세변의 길이를 배열에 입력받는다.
    }
    for (int j = 0; j < 2; j++) { //전체과정 두번반복
        for (int i = 0; i < 2; i++) { //배열을 반복하며 길이가 작은순서대로 정렬한다.
            if (arr[i] > arr[i + 1]) {
                int tmp;
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
    float a = arr[0] * arr[0] + arr[1] * arr[1];
    float c = arr[2] * arr[2];
    if ((arr[0] + arr[1]) < arr[2]) {
        printf("삼각형이 아닙니다.\n"); //삼각형이 만들어지지 않는경우
    }
    else if (a > c) {
        if (arr[0] == arr[1] && arr[1] == arr[2]) {
            printf("정삼각형\n");//예각삼각형의 공식 중 정삼각형인 경우
        }
        else
            printf("예각삼각형\n");//예각삼각형의 공식을 만족하지만 정삼각형은 아닌경우
    }
    else if (a == c) {
        printf("직각삼각형\n"); //직각삼각형의 경우
    }
    else if (a < c) {
        printf("둔각삼각형\n"); //둔각삼각형의 경우
    }
}
