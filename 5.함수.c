#include <stdio.h>

int multTwoSquaresNum(float inputedNum1, float inputedNum2, int result1);
// 함수 먼저 선언
int addTwoSquaresNum(float inputedNum1, float inputedNum2, int result2);
// 함수 먼저 선언

int main()
{
	float inputedNum1 = 0, inputedNum2 = 0;
	int result1 = 0, result2 = 0 ;

	printf("두 실수를 입력하시오 : ");
	scanf("%f %f", &inputedNum1, &inputedNum2);
	

	printf("%0.1f과 %0.1f의 정수 부분의 제곱 값의 곱과 합의 차는 %d입니다.", inputedNum1, inputedNum2, multTwoSquaresNum (inputedNum1,inputedNum2, result1) - addTwoSquaresNum( inputedNum1, inputedNum2, result2));
	// 함수 사용


	return 0;
}

int multTwoSquaresNum(float inputedNum1, float inputedNum2, int result1) {

	inputedNum1 = (int)inputedNum1 * (int)inputedNum1;
	inputedNum2 = (int)inputedNum2 * (int)inputedNum2;
	//type cating을 통해 float형을 integer형으로 바꿔준다
	result1 = inputedNum1 * inputedNum2;
	return result1;
	
}
//함수 정의

int addTwoSquaresNum(float inputedNum1, float inputedNum2, int result2)
{
	inputedNum1 = (int)inputedNum1 * (int)inputedNum1;
	inputedNum2 = (int)inputedNum2 * (int)inputedNum2;
	//type cating을 통해 float형을 integer형으로 바꿔준다
	result2 = inputedNum1 + inputedNum2;
	return result2;

}
//함수 정의
