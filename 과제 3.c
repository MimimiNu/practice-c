#include <stdio.h>
#include <string.h>

void input_char(char* pinput_str);                                        //�Լ� ����
void first_question(char* pinput_str, char pword_list[][50], int* pword); //�Լ� ����
void second_question(char pword_list[][50], int word);					  //�Լ� ����
void third_question(char pwordlist[][50]);								  //�Լ� ����

/*
�Լ� �̸� : main
��� : �Լ��� ���� ���ڿ��� �Է¹ް� 3���� ������ �Լ��� ���� �����Ѵ�
��ȯ��: 0 --> ��������
�ۼ� ��¥: 2021/11/30
*/

int main() {

	int word = 0;
	char input_str[50] , word_list[10][50], sub_str[50] ;

	input_char(input_str);                      //�Լ� ���
	strcpy(sub_str, input_str);                 //�Լ� ���

	first_question(sub_str, word_list, &word);  //�Լ� ���

	second_question(word_list, word);           //�Լ� ���

	third_question(word_list);                  //�Լ� ���

	return 0;
}

/*
�Լ� �̸� : input_char
��� : ���ڿ��� �Է¹޴� �Լ��̴�
���� : char* pinput_str
�ۼ� ��¥: 2021/11/30
*/

void input_char(char* pinput_str) {

	printf("���ڿ��� �Է��Ͻÿ�:");

	gets(pinput_str); //���ڿ��� �Է� �޴´�

}

/*
�Լ� �̸� : first_question
��� : ���ڿ��� �ܾ�� �и� �ϴ� �Լ��̴�
���� : char* pinput_str, char pword_list[][50], int *pword
�ۼ� ��¥: 2021/11/30
*/

void first_question(char* pinput_str, char pword_list[][50], int *pword) {

	int word = 0;

	for (int i = 0; i < strlen(pinput_str); i++) {

		if (pinput_str[i] != ' ') {

			for (int j = 0; j < strlen(pinput_str); j++) {

				if (pinput_str[i + j] == ' ' || pinput_str[i + j] == '\0') {

					pword_list[word][j] = '\0';
					i = i + j;

					break;
				}

				else {

					pword_list[word][j] = pinput_str[i + j];
				}
			}

			word++;
		}
	}
	// for���� ���ǹ��� ���� �ܾ�� �����Ѵ�

	for (int i = 0; i < word; i++) {

		printf("word_list[%d] -> %s\n",i, pword_list[i]);
	}

	// �׸��� �̸� ����Ѵ�

	printf("\n");
	*pword = word;
	
}

/*
�Լ� �̸� : second_question 
��� : �ܾ� �յڸ� ��ü�ϴ� �Լ�
���� : char pword_list[][50], int word
�ۼ� ��¥: 2021/11/30
*/

void second_question(char pword_list[][50], int word) {

	for (int i = 0; i < word; i++) {

		int length = strlen(pword_list[i]);
		int left;

		left = length / 2 + length % 2;

		for (int j = left; j < length; j++) {

			printf("%c", pword_list[i][j]);
		}

		for (int j = 0; j < left; j++) {

			printf("%c", pword_list[i][j]);
		}

		printf(" ");
	}

	/* for���� ����Ͽ� �ܾ� �յڸ� ��ü�Ѵ�
	   ��, �ܾ� ������ Ȧ���� ���ʿ� �ٿ� ��ü�Ѵ�*/

	printf("\n\n");
}

/*
�Լ� �̸� : third_question
��� : ù �� �ܾ� ���̿��� ���� ���� ã��
���� : char pwordlist[][50]
�ۼ� ��¥: 2021/11/30
*/

void third_question(char pwordlist[][50]) {

	if (is_asc(pwordlist[0]) && is_asc(pwordlist[1])) {

		for (int i = 0; i < strlen(pwordlist[0]); i++) {

			int is_in = 0;

			for (int j = 0; j < strlen(pwordlist[1]); j++) {

				if (pwordlist[0][i] == pwordlist[1][j]) {

					is_in = 1;
				}
			}

			if (is_in == 0) {

				printf("%c ", pwordlist[0][i]);
			}
		}

		//for ���� ���� ���� �Լ� is_asc�� ���� ù �� �ܾ ���ϸ� ���� ���ڸ� ã�´�

		printf("\n");
	}

	else {

		printf("�ܾ ������������ ���ĵǾ� ���� �ʽ��ϴ�.\n");
	}
}

/*
�Լ� �̸� : is_asc
��� : ���� ���� 
���� : char word[50]
��ȯ��: 1 --> ��������
�ۼ� ��¥: 2021/11/30
*/

int is_asc(char word[50]) {

	for (int i = 1; i < strlen(word); i++) {

		if (word[i - 1] > word[i]) {

			return 0;
		}
	}

	// for���� ���ǹ��� ���� ���������� Ȯ���Ѵ�

	return 1;
}

