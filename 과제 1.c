#include <stdio.h>

/*
함수를 정의하기 전에 함수를 먼저 선언한다
*/
int firstQuestion(oddNum);
int secondQuestion(oddNum);
int thirdQuestion(oddNum);
int fourthQuestion(oddNum);
int fifthQuestion(oddNum);


int main() {

	/*
	홀수를 입력 받기 위해 변수를 설정한다
	*/
	int oddNum;

	/*
	키보드로 부터 3 이상 7 이하의 양의 홀수를 입력받아 oddNum에 저장한다
	*/
	printf("3 이상 7 이하의 양의 홀수 하나를 입력하시오 : ");
	scanf("%d", &oddNum);

	printf("1)");
	printf("\n");
	firstQuestion(oddNum);  // 함수를 이용하여 출력한다
	printf("\n");           // 한칸 띄어준다

	printf("2)");
	printf("\n");
	secondQuestion(oddNum); // 함수를 이용하여 출력한다
	printf("\n");           // 한칸 띄어준다

	printf("3)");
	printf("\n");
	thirdQuestion(oddNum);  // 함수를 이용하여 출력한다
	printf("\n");           // 한칸 띄어준다

	printf("4)");
	printf("\n");
	fourthQuestion(oddNum); // 함수를 이용하여 출력한다      
	printf("\n");           // 한칸 띄어준다

	printf("5)");
	printf("\n");
	fifthQuestion(oddNum);  // 함수를 이용하여 출력한다       
	

	return 0;
}
/*
함수 이름: firstQuestion
기능 : 1부터 입력 받은 홀수 까지 출력을 하는데 1은 입력 받은 홀수 만큼 하나씩 작아지면서 홀수는 한번 출력되게 한다
인자 : oddNum : 3 이상 7 이하의 양의 홀수 
반환값: 1부터 입력 받은 홀수 까지 출력을 하는데 1은 입력 받은 홀수 만큼 하나씩 작아지면서 홀수는 한번 출력되게 한다
작성 날짜 : 2021/10/19
*/
int firstQuestion(oddNum) {

	/*
	반복문을 이용하여 출력받는다
	*/

	for (int column = 0; column < oddNum; column++) {

		for (int print_blank = 0; print_blank < column; print_blank++) {

			printf(" ");
		} 

		for (int print_num = oddNum; print_num > column; print_num--) {
			printf("%d", column + 1);
		}

		printf("\n");
	}
}
/*
함수 이름: secondQuestion
기능 : 입력받은 홀수 만큼 반복하고 숫자가 하나씩 늘어나게 출력한다
인자 : oddNum : 3 이상 7 이하의 양의 홀수
반환값: 입력받은 홀수 만큼 반복하고 숫자 갯수가 하나씩 늘어나게 출력한다
작성 날짜 : 2021/10/19
*/
int secondQuestion(oddNum) {

	/*
	반복문을 이용하여 출력받는다
	*/

	for (int column = 0; column < oddNum; column++) {

		int value = oddNum;

		for (int row = 0; row <= column; row++) {
			printf("%d", value);
			value--;
		}

		printf("\n");
	}
	
}
/*
함수 이름: thirdQuestion
기능 : 입력 받은 홀수 만큼 출력을 시작해 중간 줄로 갈수록 수 갯수가 줄어들다가 늘어나게 출력한다
인자 : oddNum : 3 이상 7 이하의 양의 홀수
반환값: 입력 받은 홀수 만큼 출력을 시작해 중간 줄로 갈수록 수 갯수가 줄어들다가 늘어나게 출력한다
작성 날짜 : 2021/10/19
*/
int thirdQuestion(oddNum) {

	/*
	반복문을 이용하여 출력받는다
	*/

	for (int column_for_top = 0; column_for_top < oddNum; column_for_top += 2) {
		
		for (int print_blank_top = 0; print_blank_top < column_for_top; print_blank_top++) {

			printf(" ");
		}
		
		for (int print_num_top = column_for_top; print_num_top < oddNum; print_num_top++) {
			
			printf("%d", print_num_top + 1);
		}

		printf("\n");
	}
	for (int column_for_bottom = oddNum - 2; column_for_bottom > 0; column_for_bottom -= 2) {
		
		for (int print_blank_bottom = 1; print_blank_bottom < column_for_bottom; print_blank_bottom++) {

				printf(" ");
		}
		
		for (int print_num_bottom = column_for_bottom; print_num_bottom <= oddNum ; print_num_bottom++) {
			
			printf("%d", print_num_bottom);
		}

		printf("\n");
		}
		
	
}
/*
함수 이름: fourthQuestion
기능 : 1부터 입력받은 홀수를 대각선으로 나오게 출력한다
인자 : oddNum : 3 이상 7 이하의 양의 홀수
반환값: 1부터 입력받은 홀수를 대각선으로 나오게 출력한다
작성 날짜 : 2021/10/19
*/
int fourthQuestion(oddNum) {

	/*
	반복문을 이용하여 출력받는다
	*/

	for (int column = 1; column <= oddNum; column++) {
		
		for (int print_blank = 1; print_blank < column; print_blank++) {

			printf(" ");
		}

		printf("%d", column);
		printf("\n");
	}
}
/*
함수 이름: fifthQuestion
기능 : 홀수 번째 줄에 있는 수는 왼쪽에서 갯수가 1,3,5 ... 씩홀수 개로 늘어가게 출력하고 짝수 번쨰 줄에 있는 수는 오른쪽에서 부터 2,4,...짝수개로 늘어가게 출력한다
인자 : oddNum : 3 이상 7 이하의 양의 홀수
반환값: 홀수 번째 줄에 있는 수는 왼쪽에서 갯수가 1,3,5 ... 씩홀수 개로 늘어가게 출력하고 짝수 번쨰 줄에 있는 수는 오른쪽에서 부터 2,4,...짝수개로 늘어가게 출력한다
작성 날짜 : 2021/10/19
*/
int fifthQuestion(oddNum) {

	/*
	반복문을 이용하여 출력받는다
	*/

	for (int column = 1; column <= 5; column++) {

		if (column % 2 == 0) {

			for (int print_blank = 0; print_blank < oddNum - column; print_blank++) {

				printf(" ");
			}

			for (int print_num_top = 0; print_num_top < column; print_num_top++) {

				printf("%d", column);
			}
		}
		else {

			for (int print_num_bottom = 0; print_num_bottom < column; print_num_bottom++) {

				printf("%d", column);
			}
		}
		printf("\n");
	}
}
