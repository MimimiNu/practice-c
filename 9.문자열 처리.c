#include <stdio.h>
#include <string.h>


void input_char(char pstr[]); // �Է� �Լ� ����
void print_char(char pstr[]); // ������ �ܾ� ��� �Լ� ����

/*
�Լ� �̸� : main
��� : ����� �Լ� ��� 
���� : 
��ȯ�� : 0
�ۼ���¥ : 2021/11/26
*/
int main() {

	char str[30];

	printf("���ڿ��� �Է��Ͻÿ�:");
	input_char(str); //�Լ� ���

	printf("\n");

	printf("������ �ܾ�:");
	print_char(str); //�Լ� ���

	return 0;
}

/*
�Լ� �̸� : input_char
��� : ���ڿ��� �Է¹޴´�
���� : char pstr[]
�ۼ���¥ : 2021/11/26
*/
void input_char(char pstr[]) {
	
	gets(pstr); // ���ڿ��� �Է¹޴´�

}

/*
�Լ� �̸� : print_char
��� : ���ڿ����� ������ �ܾ ����Ѵ�
���� : char pstr[]
�ۼ���¥ : 2021/11/26
*/
void print_char(char pstr[]) {

	int i;

	for (i = strlen(pstr) - 1; i >= 0; i--) { // for ���� ������ �̿��Ͽ� ������ �ܾ �����Ѵ�

		if (pstr[i] == ' ') {

			i++;

			break;
		}
	}

	for (int j = i; j < strlen(pstr); j++) { // for���� �̿��Ͽ� ������ �ܾ ����Ѵ�

		printf("%c", pstr[j]);
	}
}