#include <stdio.h>
#include <string.h>


void input_char(char pstr[]); // 입력 함수 선언
void print_char(char pstr[]); // 마지막 단어 출력 함수 선언

/*
함수 이름 : main
기능 : 입출력 함수 사용 
인자 : 
반환값 : 0
작성날짜 : 2021/11/26
*/
int main() {

	char str[30];

	printf("문자열을 입력하시오:");
	input_char(str); //함수 사용

	printf("\n");

	printf("마지막 단어:");
	print_char(str); //함수 사용

	return 0;
}

/*
함수 이름 : input_char
기능 : 문자열을 입력받는다
인자 : char pstr[]
작성날짜 : 2021/11/26
*/
void input_char(char pstr[]) {
	
	gets(pstr); // 문자열을 입력받는다

}

/*
함수 이름 : print_char
기능 : 문자열에서 마지막 단어만 출력한다
인자 : char pstr[]
작성날짜 : 2021/11/26
*/
void print_char(char pstr[]) {

	int i;

	for (i = strlen(pstr) - 1; i >= 0; i--) { // for 문과 공백을 이용하여 마지막 단어를 구별한다

		if (pstr[i] == ' ') {

			i++;

			break;
		}
	}

	for (int j = i; j < strlen(pstr); j++) { // for문을 이용하여 마지막 단어를 출력한다

		printf("%c", pstr[j]);
	}
}