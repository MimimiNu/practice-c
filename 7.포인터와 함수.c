#include <stdio.h>

void add_two_integers(int src1[], int src2[], int destination[], int len);


/*
함수이름 : main
기능 : 두 배열의 합을 다른 배열에 저장한 것을 출력한다
인자 : 배열값
반환값 : 0 
작성 날짜 : 11/05
*/
int main() {

	int source1[5] = { -2, 4, -3, 1, 5 };
	int source2[5] = { 6, -7, 2, 3, -1 };
	int destination[5] = { 0 };
	// 배열들을 선언한다

	printf("source1 : ");
	for (int i = 0; i < 5; i++) {
		if (i < 4) {
			printf("%d,", source1[i]);
		}

		else {
			printf("%d", source1[i]);
		}
			
	}
	//원래 source1이 라는 배열을 출력한다. 그리고 for문을 이용하여 ","도 나오게한다

	printf("\n");

	printf("source2 : ");
	for (int j = 0; j < 5; j++) {

		if (j < 4) {
			printf("%d,", source2[j]);
		}

		else {
			printf("%d", source2[j]);
		}

	}
	//원래 source2이 라는 배열을 출력한다. 그리고 for문을 이용하여 ","도 나오게한다

	printf("\n");

	add_two_integers(source1, source2, destination, 5);
	// 함수를 사용한다

	printf("destination : ");
	for (int k = 0; k < 5; k++) {

		if (k < 4) {
			printf("%d,", destination[k]);
		}

		else {
			printf("%d", destination[k]);
		}
	}
	// 함수를 사용한뒤 destination를 출력한다. 그리고 for문을 이용하여 ","도 나오게한다
	return 0;
}

/*
함수이름 : add_two_integers
기능 : 두 배열의 값을 더해 한곳에 저장한다
인자 : int src1[], int src2[], int destination[], int len
반환값 : 없음
작성 날짜 : 11/05
*/
void add_two_integers(int src1[], int src2[], int destination[], int len) {

	for (int t = 0; t < len; t++) {
		destination[t] = src1[t] + src2[t];
	}
	// for문을 이용하여 src1 src2값을 더해 destination에 저장한다
}