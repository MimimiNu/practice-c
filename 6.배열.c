#include <stdio.h>

int input_student_num( );
int max_student_num(int max_student_value, int student_age);

//�Լ� ���� �ϱ� ���� ���� ����

int main() {

	int student_num = input_student_num();
	int student_ages[10] = { 0 };
	int max_student_value = 0;

	for (int i = 0; i < student_num; i++) {

		printf("�л� %d  ���� : ", i + 1);
		scanf("%d", &student_ages[i]);
		max_student_value = max_student_num(max_student_value, student_ages[i]) ;
	}	
	
	// for���� ���� �л� ���� �Է� �ޱ�

	printf("�л��� �ִ� ���� : %d", max_student_value);

	return 0;
}

/*
�Լ� �̸� : input_student_num
��� : �л��� �Է� �ޱ�
���� : ����
��ȯ��: student_num_in_function
�ۼ� ��¥ : 2021/10/22
*/

int input_student_num() {

	int student_num_in_function = 0;

	printf("�л� ���� �Է��Ͻÿ� : ");
	scanf("%d", &student_num_in_function);

	return student_num_in_function;
}

/*
�Լ� �̸� : max_student_num
��� : �л� �ִ� ���� ���ϱ� 
���� : int max_student_value : �л� �ִ� ��
       int student_age : �л� ����
��ȯ��: student_age
�ۼ� ��¥ : 2021/10/22
*/

int max_student_num(int max_student_value, int student_age) {

	if (max_student_value < student_age) {

		return student_age;
	}

	else {
		return max_student_value;
	}
}