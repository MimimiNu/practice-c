#include<stdio.h>

int main() {

	int inputNum, forValue =1, runValue ;

	printf("출력할 행과 열의 수를 입력하시오: ");
	scanf("%d", &inputNum);
	// 몇개의 행을 몇번 반복 할지 입력받는다
	for (forValue; forValue <= inputNum; forValue++) {
		// 입력 받는 수만큼 반복을 한다
		for (runValue = 1; runValue <= inputNum; runValue++) {
			printf("%d", forValue);

			if (forValue % 2 == 0 && runValue==2) {
				break;
			}
		}
		// 홀수는 입력받은 수만큼 반복하고 짝수는 무조건 두번을 반복한다
		printf("\n");
	}






	return 0;
}