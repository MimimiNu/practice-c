#include <stdio.h> 

void question1(int pinputed_num, int integer_array[]);															 // 문제1 함수 선언
void question2(int positive_num, int times_num, int inputed_num, int integer_array[], int pchanged_list[]);      // 문제2 함수 선언
void calculate_two_end_values(int original_list[], int modified_list[], int len, int target);				     // 문제3 함수 선언

/*
함수 이름 : main 함수
기능 : 정수를 입력받으면서 1~3 문제를 실행시키고 함수를 사용한다
인자 : x
반환값: 0 -> 정상종료
작성 날짜: 2021/11/10
*/
int main() {

	int inputed_num = 0, positive_num = 0, times_num = 0, special_integer = 0;
	int original_array[10], modified_array[10];

	printf("입력받을 정수의 수를 입력하시오 : ");
	/*
	키보드로부터 정수를 입력받는다
	*/
	scanf("%d", &inputed_num); // 3이상 10이하의 수를 입력하시오
	printf("리스트에 저장할 정수 값을 모두 입력하시오 : ");

	question1(inputed_num, original_array);

	printf("배수 조건에 사용될 양의 정수 하나와 곱해질 정수 하나를 입력하시오 : ");
	/*
	키보드로부터 두 정수를 입력받는다
	*/
	scanf("%d %d", &positive_num, &times_num);

	question2(positive_num, times_num, inputed_num, original_array,modified_array);

	printf("특정 정수를 입력하시오 : "); // 범위에 제한이 없다
	/*
	키보드로부터 정수를 입력받는다
	*/
	scanf("%d", &special_integer);
	printf("특정 정수와 리스트의 수정된 각 정수와의 값 차이 : ");


	calculate_two_end_values(original_array, modified_array, inputed_num, special_integer);

	return 0;
}

/*
함수 이름 : question1 함수
기능 : 정수를 입력받고 배열에 저장한다
인자 : int inputed_num, int poriginal_array[]
반환값: 0 -> 정상종료
작성 날짜: 2021/11/10
*/

void question1(int inputed_num, int poriginal_array[]) {


	for (int i = 0; i < inputed_num; i++) {

		/*
		키보드로부터 정수를 입력받는다
		*/
		scanf("%d", &poriginal_array[i]);
	}
}

/*
함수 이름 : question2 함수
기능 : 양의 정수의 배수에 해당되지 않은 리스트 값에 정수를 곱한다
인자 : int p_num, int t_num, int i_num, int poriginal_array[], int pchanged_list[]
반환값: 0 -> 정상종료
작성 날짜: 2021/11/10
*/

void question2(int p_num, int t_num, int i_num, int poriginal_array[], int pchanged_list[]) {

	/*
	for 문을 통해 조건맞게 배열안의 값을 변환한다.
	*/
	for (int j = 0; j < i_num; j++) {

		if (poriginal_array[j] % p_num != 0) {
			pchanged_list[j] = poriginal_array[j] * t_num;
		}
		else {
			pchanged_list[j] = poriginal_array[j];
		}
	}
}

/*
함수 이름 : question3 함수
기능 : 특정값과 차이를 구하고 차이가 작은 것과 큰것을 구한다
인자 : int original_list[], int modified_list[], int len, int target
반환값: 0 -> 정상종료
작성 날짜: 2021/11/10
*/

void calculate_two_end_values(int original_list[], int modified_list[], int len, int target) {
	
	int min, max;

	/*
	for문을 통해 조건에 맞게 배열을 조절하고 차이의 최대와 최소를 구한다
	*/
	for (int k = 0; k < len; k++) {

		if (modified_list[k] > target) {

			modified_list[k] = modified_list[k] - target;
		}
		else {
			modified_list[k] = target - modified_list[k];
		}
		if (k == 0) {

			min = modified_list[k];
			max = modified_list[k];
		}
		else {
			if (min > modified_list[k]) {

				min = modified_list[k];
			}
			if (max < modified_list[k]) {

				max = modified_list[k];
			}
		}
		printf("%d ", modified_list[k]);
	}
	printf("\n");

	printf("특정 정수와 값 차이가 가장 큰 (수정되기 전의) 정수 :");

	for (int t = 0; t < len; t++) {

		if (max == modified_list[t]) {

			printf(" %d", original_list[t]);
		}
	}
	printf("\n");

	printf("특정 정수와 값 차이가 가장 작은 (수정되기 전의) 정수 :");

	for (int t = 0; t < len; t++) {

		if (min == modified_list[t]) {

			printf(" %d", original_list[t]);
		}
	}
}