#include<stdio.h>

int main() {

	int inputNum, forValue =1, runValue ;

	printf("����� ��� ���� ���� �Է��Ͻÿ�: ");
	scanf("%d", &inputNum);
	// ��� ���� ��� �ݺ� ���� �Է¹޴´�
	for (forValue; forValue <= inputNum; forValue++) {
		// �Է� �޴� ����ŭ �ݺ��� �Ѵ�
		for (runValue = 1; runValue <= inputNum; runValue++) {
			printf("%d", forValue);

			if (forValue % 2 == 0 && runValue==2) {
				break;
			}
		}
		// Ȧ���� �Է¹��� ����ŭ �ݺ��ϰ� ¦���� ������ �ι��� �ݺ��Ѵ�
		printf("\n");
	}






	return 0;
}