#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
    char str[100];   // ���ڿ� ������ �迭
    int num = 0;     // ���� ���� ���� ����
    int i;

    printf("���ڿ��� �Է��ϼ��� : ");
    scanf("%s", str);   // ���ڿ� �Է�

    // ���ڿ� ���̸�ŭ ���鼭 ���� Ȯ��
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            num++;
        }
    }

    printf("������ ������ %d�� �Դϴ�.\n", num);

    return 0;
}

