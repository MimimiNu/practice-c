#include <stdio.h>

int input_student_num( );
int max_student_num(int max_student_value, int student_age);

//함수 정의 하기 전에 먼저 선언

int main() {

	int student_num = input_student_num();
	int student_ages[10] = { 0 };
	int max_student_value = 0;

	for (int i = 0; i < student_num; i++) {

		printf("학생 %d  나이 : ", i + 1);
		scanf("%d", &student_ages[i]);
		max_student_value = max_student_num(max_student_value, student_ages[i]) ;
	}	
	
	// for문을 통해 학생 나이 입력 받기

	printf("학생의 최대 나이 : %d", max_student_value);

	return 0;
}

/*
함수 이름 : input_student_num
기능 : 학생수 입력 받기
인자 : 없음
반환값: student_num_in_function
작성 날짜 : 2021/10/22
*/

int input_student_num() {

	int student_num_in_function = 0;

	printf("학생 수를 입력하시오 : ");
	scanf("%d", &student_num_in_function);

	return student_num_in_function;
}

/*
함수 이름 : max_student_num
기능 : 학생 최대 나이 비교하기 
인자 : int max_student_value : 학생 최대 수
       int student_age : 학생 나이
반환값: student_age
작성 날짜 : 2021/10/22
*/

int max_student_num(int max_student_value, int student_age) {

	if (max_student_value < student_age) {

		return student_age;
	}

	else {
		return max_student_value;
	}
}