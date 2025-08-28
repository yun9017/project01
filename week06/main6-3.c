#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    char str[100];   // 문자열 저장할 배열
    int num = 0;     // 숫자 개수 세는 변수
    int i;

    printf("문자열을 입력하세요 : ");
    scanf("%s", str);   // 문자열 입력

    // 문자열 길이만큼 돌면서 숫자 확인
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num++;
        }
    }

    printf("숫자의 개수는 %d개 입니다.\n", num);

    return 0;
}

