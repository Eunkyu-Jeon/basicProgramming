//
//  main.c
//  basicprog
//
//  Created by 전은규 on 2022/03/28.
//
#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    char studentNum[20];
    char major[20];
    int age;
    char address[30];
};
typedef struct Student Student;

int main() {
    Student student[1000];
    int arysize;
    arysize=sizeof(student)/sizeof(student[0]);
    for(int i=0; i<1000; i++) {
        student[i].age=0; //비어있는 구조체배열에서 나이 0으로 초기화
    }
    while (1) { //while을 통해 프로그램 종료가 입력되기 전까지 계속 반복한다
        int n;
        printf("기능을 선택하세요\n");
        printf("1.이름검색 2.학생등록 3.학생삭제 4.종료>>");
        scanf("%d",&n);//프로그램 기능 선택
        if (n==1) {
            char inputName[20];
            printf("검색할 이름을 입력하세요>>");
            scanf("%s",inputName);
            for(int i=0; i<1000; i++) {
                if (strcmp(student[i].name,inputName)==0) { //구조체 배열을 반복하며 검색할 이름 비교
                    printf("%s %s %s %d %s\n",student[i].name, student[i].studentNum, student[i].major, student[i].age, student[i].address);
                    continue;
                } //검색한 이름의 구조체 정보 출력
            }
        }
        else if (n==2) {
            int aryLast;
            if (arysize<=1000) { //구조체 배열크기가 1000보다 작다면 새 정보 등록 가능
                int i=0;
                
                char inputName[20];
                char inputStudentNum[20];
                char inputMajor[20];
                int inputage;
                char inputAddress[20];
                printf("이름을 입력하세요>>");
                scanf("%s",inputName);
                printf("학번을 입력하세요>>");
                scanf("%s",inputStudentNum);
                int n=0;
                for (int i=0; i<1000; i++) {
                    if (strcmp(student[i].studentNum,inputStudentNum)==0) {
                        n=-1;
                    }
                }
                if (n==-1) {
                    printf("이미 등록된 학번입니다.");
                    continue;
                }
                printf("학과를 입력하세요>>");
                scanf("%s",inputMajor);
                printf("나이를 입력하세요>>");
                scanf("%d",&inputage);
                printf("주소를 입력하세요>>");
                scanf("%s",inputAddress);
                while (1) {
                if(student[i].age==0) { //비어있는 구조체 찾기
                    if (i>=1000) {
                        printf("용량이 가득 찼습니다");
                        break;
                    }
                    aryLast=i;
                    strcpy(student[aryLast].name,inputName);
                    strcpy(student[aryLast].studentNum,inputStudentNum);
                    strcpy(student[aryLast].major,inputMajor);
                    student[aryLast].age=inputage;
                    strcpy(student[aryLast].address,inputAddress);
                    printf("입력이 완료됐습니다.\n");
                    break; //비어있는 구조체에 정보 등록 후 반복문 탈출
                    }
                    i++;
                }
            }
        }
        else if (n==3) {
            char ch[20]=" ";
            char inputStudentNum[20];
            printf("정보를 삭제할 학생의 학번을 입력하세요>>");
            scanf("%s",inputStudentNum);
            int k=0;
            while (1) {
                printf("%s",inputStudentNum);
                if(strcmp(student[k].studentNum,inputStudentNum)==0) {
                    
                    strcpy(student[k].name,ch);
                    strcpy(student[k].studentNum,ch);
                    strcpy(student[k].major,ch);
                    student[k].age=0;
                    strcpy(student[k].address,ch); //정보 삭제후 구조체 배열 초기화
                    printf("삭제가 완료되었습니다.\n");
                    break;
                }
                k++;
            }
        }
        else if (n==4) {
            printf("프로그램 종료\n");
            break; //프로그램 종료 후 반복문 탈출
        }
    }
}
