#include <stdio.h>

int main() {

	int employee_num = 0 ,num=0,age=0,result=0 ;
	double divResult = 0;
	printf("���� ���� �Է��Ͻÿ� : ");
	scanf("%d", &employee_num);
	// �ݺ����� ����� ������ ���ϱ� ���ؼ� �������� �Է¹޴´�
	while (num < employee_num) {
		printf("���� %d ���� : ", num+1);
		scanf("%d", &age);
		result = result + age;
		num++;
	}
	//�ݺ����� ���� ���� �������� ���̸� �Է� �޴´�
	divResult = (double)result / (double)num;
	// ����� �� ��ȯ(type casting) �� ���� �������� �Ǽ������� �ٲ��ش�
	printf("%d�� �������� ���� ����� %0.1f",num, divResult);
	//0.1f�� ���� �Ҽ� ù°�ڸ� ������ �Է� �޴´�


	return 0;
}