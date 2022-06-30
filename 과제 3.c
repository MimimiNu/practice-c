#include <stdio.h>
#include <string.h>

void input_char(char* pinput_str);                                        //함수 선언
void first_question(char* pinput_str, char pword_list[][50], int* pword); //함수 선언
void second_question(char pword_list[][50], int word);					  //함수 선언
void third_question(char pwordlist[][50]);								  //함수 선언

/*
함수 이름 : main
기능 : 함수를 통해 문자열을 입력받고 3가지 문제를 함수를 통해 실행한다
반환값: 0 --> 정상종료
작성 날짜: 2021/11/30
*/

int main() {

	int word = 0;
	char input_str[50] , word_list[10][50], sub_str[50] ;

	input_char(input_str);                      //함수 사용
	strcpy(sub_str, input_str);                 //함수 사용

	first_question(sub_str, word_list, &word);  //함수 사용

	second_question(word_list, word);           //함수 사용

	third_question(word_list);                  //함수 사용

	return 0;
}

/*
함수 이름 : input_char
기능 : 문자열을 입력받는 함수이다
인자 : char* pinput_str
작성 날짜: 2021/11/30
*/

void input_char(char* pinput_str) {

	printf("문자열을 입력하시오:");

	gets(pinput_str); //문자열을 입력 받는다

}

/*
함수 이름 : first_question
기능 : 문자열을 단어로 분리 하는 함수이다
인자 : char* pinput_str, char pword_list[][50], int *pword
작성 날짜: 2021/11/30
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
	// for문과 조건문을 통해 단어로 구별한다

	for (int i = 0; i < word; i++) {

		printf("word_list[%d] -> %s\n",i, pword_list[i]);
	}

	// 그리고 이를 출력한다

	printf("\n");
	*pword = word;
	
}

/*
함수 이름 : second_question 
기능 : 단어 앞뒤를 교체하는 함수
인자 : char pword_list[][50], int word
작성 날짜: 2021/11/30
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

	/* for문을 사용하여 단어 앞뒤를 교체한다
	   단, 단어 갯수가 홀수면 앞쪽에 붙여 교체한다*/

	printf("\n\n");
}

/*
함수 이름 : third_question
기능 : 첫 두 단어 사이에서 빠진 문자 찾기
인자 : char pwordlist[][50]
작성 날짜: 2021/11/30
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

		//for 문과 새로 만든 함수 is_asc를 통해 첫 두 단어를 비교하며 빠진 문자를 찾는다

		printf("\n");
	}

	else {

		printf("단어가 오름차순으로 정렬되어 있지 않습니다.\n");
	}
}

/*
함수 이름 : is_asc
기능 : 오름 차순 
인자 : char word[50]
반환값: 1 --> 정상종료
작성 날짜: 2021/11/30
*/

int is_asc(char word[50]) {

	for (int i = 1; i < strlen(word); i++) {

		if (word[i - 1] > word[i]) {

			return 0;
		}
	}

	// for문과 조건문을 통해 오름차순을 확인한다

	return 1;
}

