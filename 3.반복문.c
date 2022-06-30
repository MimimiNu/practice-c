#include <stdio.h>

int main() {

	int employee_num = 0 ,num=0,age=0,result=0 ;
	double divResult = 0;
	printf("직원 수를 입력하시오 : ");
	scanf("%d", &employee_num);
	// 반복문을 몇번을 돌릴지 정하기 위해서 직원수를 입력받는다
	while (num < employee_num) {
		printf("직원 %d 나이 : ", num+1);
		scanf("%d", &age);
		result = result + age;
		num++;
	}
	//반복문을 통해 직원 개개인의 나이를 입력 받는다
	divResult = (double)result / (double)num;
	// 명시적 형 변환(type casting) 을 통해 정수형을 실수형으로 바꿔준다
	printf("%d명 직원들의 나이 평균은 %0.1f",num, divResult);
	//0.1f를 통해 소수 첫째자리 까지만 입력 받는다


	return 0;
}