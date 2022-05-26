#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* makeLotto(void); //로또번호 부여 후 한명의 번호를 당첨번호로 해 결과를 발표하는 함수

int main() {
    int* arr = makeLotto(); //배열의 주소값을 리턴받아 배열포인터 *arr에 선언
    for (int i = 0; i < 1000; i++) {
        printf("%d ", arr[i]);//결과 배열 출력
    }
}
int* makeLotto(void) {
    int lotto[1000][7]; //1000명에게 7개의 숫자를 부여할 이차원 배열 선언
    int n; //랜덤변수를 입력받을 변수 n
    srand((unsigned)time(NULL)); //시간을 기준으로 하는 시드 생성
    for (int k = 0; k < 1000; k++) {//1000명에게 부여하기 때문에 1000번 반복
        for (int i = 0; i < 7; i++) { //숫자 7번 반벅
            n = (rand() % 70) + 1;
            lotto[k][i] = n;
            for (int j = 0; j < i; j++) {//이미 생성된 i만큼의 수와 비교하며 새로운 숫자가 중복되는 수인지 검사
                if (lotto[k][i] == lotto[k][j]) {//중복되는 수일 경우 i를 다시 감소시키고 검사중단후 새로운 숫자를 부여한다.
                    i--;
                    break;
                }
            }
        }
        for (int j = 0; j < 7; j++) {
            printf("%d ", lotto[k][j]); //1000명의 사람이 받은 번호 출력
        }
        printf("\n");
    }
    int correctLotto[7]; //당첨번호 저장할 배열
    for (int i = 0; i < 7; i++) {
        correctLotto[i] = lotto[0][i]; //편의상 첫번째 사람의 번호가 당첨번호라고 생각한 후 당첨번호 배열에 저장
    }
    printf("당첨 번호!\n");
    for (int i = 0; i < 7; i++) {
        printf("%d ", correctLotto[i]);//당첨번호 출력
    }
    printf("\n");
    printf("순서대로 맞은 개수\n");
    int arr[1000]; //당첨번호와 일치하는 개수 출력

    for (int i = 0; i < 1000; i++) {
        int count = 0; //일치 개수를 셀 변수
        for (int j = 0; j < 7; j++) {
            for (int k = 0; k < 7; k++) {
                if (correctLotto[j] == lotto[i][k]) //당첨번호에서 한사람의 복권 번호를 반복하며 일치하는 수가 있는지 검사
                    count++; //일치할시 변수 count를 +1한다.
            }
        }
        arr[i] = count;//개수 출력 배열에 변수 count 저장

    }
    return arr;//배열 반환
}
