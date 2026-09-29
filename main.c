#include <stdio.h>

int main (void){

    int total_sec;
    int min, sec;

    // 초 입력받기
    printf("Input the second : ");
    scanf("%d", &total_sec);

    // 나누기(/) 연산자로 분 계산
    min = total_sec / 60;

    // 나머지(%) 연산자로 초 계산
    sec = total_sec % 60;

    // 결과 출력
    printf("the time is %d : %d\n", min, sec);

    return 0;
}