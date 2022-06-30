#include<stdio.h>

void print_source1_and_2(int src1[][2], int src2[][2]);						// 함수 선언
int compare_rows_of_arrays(int src1[][2], int src2[][2], int target_row);	// 함수 선언

/*
함수 이름 : main 함수
기능 : 배열들을 선언하고 함수 두개를 실행 시킨다.
인자 : x
반환값: 0 -> 정상종료
작성 날짜: 2021/11/12
*/
int main() {
	
	int source1[3][2] = { {1, 2},{3, 4},{5, 6} };
	int source2[3][2] = { {1, 2},{3, 5},{5, 6} };
	int result = 0;

	/*
	첫번째 출력 하는 함수 시작
	*/

	print_source1_and_2(source1, source2);
	printf("각 행의 비교 결과 :");
	printf("\n");

	/*
	두번째 비교하는 함수 시작
	*/

	compare_rows_of_arrays(source1, source2, result);

	return 0;
}

/*
함수 이름 : print_source1_and_2 함수
기능 : 배열 두개를 출력한다
인자 : int src1[][2], int src2[][2]
반환값: 없음
작성 날짜: 2021/11/12
*/

void print_source1_and_2(int src1[][2], int src2[][2]){
	
	printf("source1 :");
	printf("\n");

	/*
	for 문을 통해 배열을 출력한다
	*/

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <  2; j++) {
			printf("%d ", src1[i][j]);
		}
		printf("\n");
	}

	printf("source2 :");
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", src2[i][j]);
		}
		printf("\n");
	}
}

/*
함수 이름 : compare_rows_of_arrays 함수
기능 : 배열 두개를 비교하여 같은게 있으면 다른게 있으면 0 을 출력한다
인자 : int src1[][2], int src2[][2], int target_row
반환값: 0 --> 정상종료
작성 날짜: 2021/11/12
*/

int compare_rows_of_arrays(int src1[][2], int src2[][2], int target_row) {

	/*
	for 문을 통해 배열을 비교 하고 출력한다.
	*/

	for (int i = 0; i < 3; i++) {
		int result1 = 0, result2 = 0;

		for (int j = 0; j < 2; j++) {

			result1 = result1 + src1[i][j];
		}

		for (int j = 0; j < 2; j++) {

			result2 = result2 + src2[i][j];
		}

		if (result1 == result2) {

			printf("%d,", 1);
		}

		else {
			printf("%d,", 0);
			break;
		}

	}

	/*
	조건문을 통해 같은지 틀린지 비교한다
	*/

	if (src1[3][0] + src1[3][1] == src2[3][0] + src2[3][1]) {

		printf("%d", 1);
	}

	else{
		printf("%d", 0);
	}

	return 0;
}