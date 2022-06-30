#include <stdio.h>

int main() {

	int num1, num2, num3, result;
	printf("1번 실습 점수: ");
	scanf("%d",&num1);
	// scanf  를 통해 입력값을 받습니다
	printf("\n");
	//이는 위줄과 한칸 띄우기 위해 사용합니다
	printf("2번 실습 점수: ");
	scanf("%d", &num2);
	// scanf  를 통해 입력값을 받습니다
	printf("\n");
	//이는 위줄과 한칸 띄우기 위해 사용합니다
	printf("3번 실습 점수: ");
	scanf("%d", &num3);
	// scanf  를 통해 입력값을 받습니다
	printf("\n");
	result = num1 * 1 + num2 * 2 + num3 * 3;
	printf("가중합 : %d*1 + %d*2 + %d*3 = %d", num1, num2, num3, result);


	return 0;
}