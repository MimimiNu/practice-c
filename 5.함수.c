#include <stdio.h>

int multTwoSquaresNum(float inputedNum1, float inputedNum2, int result1);
// �Լ� ���� ����
int addTwoSquaresNum(float inputedNum1, float inputedNum2, int result2);
// �Լ� ���� ����

int main()
{
	float inputedNum1 = 0, inputedNum2 = 0;
	int result1 = 0, result2 = 0 ;

	printf("�� �Ǽ��� �Է��Ͻÿ� : ");
	scanf("%f %f", &inputedNum1, &inputedNum2);
	

	printf("%0.1f�� %0.1f�� ���� �κ��� ���� ���� ���� ���� ���� %d�Դϴ�.", inputedNum1, inputedNum2, multTwoSquaresNum (inputedNum1,inputedNum2, result1) - addTwoSquaresNum( inputedNum1, inputedNum2, result2));
	// �Լ� ���


	return 0;
}

int multTwoSquaresNum(float inputedNum1, float inputedNum2, int result1) {

	inputedNum1 = (int)inputedNum1 * (int)inputedNum1;
	inputedNum2 = (int)inputedNum2 * (int)inputedNum2;
	//type cating�� ���� float���� integer������ �ٲ��ش�
	result1 = inputedNum1 * inputedNum2;
	return result1;
	
}
//�Լ� ����

int addTwoSquaresNum(float inputedNum1, float inputedNum2, int result2)
{
	inputedNum1 = (int)inputedNum1 * (int)inputedNum1;
	inputedNum2 = (int)inputedNum2 * (int)inputedNum2;
	//type cating�� ���� float���� integer������ �ٲ��ش�
	result2 = inputedNum1 + inputedNum2;
	return result2;

}
//�Լ� ����
