#include <stdio.h>

int main() {

	int fst_project, sec_project, trd_project;
	double fst_change_score, sec_change_score, trd_change_score,result;
	printf("1�� ���� ���� : ");
	scanf("%d", &fst_project);
	// ���� ������ �Է� �޴´�
	printf("\n");

	printf("2�� ���� ���� : ");
	scanf("%d", &sec_project);
	// ���� ������ �Է� �޴´�
	printf("\n");

	printf("3�� ���� ���� : ");
	scanf("%d", &trd_project);
	// ���� ������ �Է� �޴´�
	printf("\n");

	fst_change_score = fst_project * 0.2;
	sec_change_score = sec_project * 0.3;
	trd_change_score = trd_project * 0.5;
	//�� ���� �� ������ ��ȯ ������ �����ش�
	printf("1�� ���� ��ȯ ����(20%%) : %0.2f", fst_change_score);
	printf("\n");

	printf("2�� ���� ��ȯ ����(30%%) : %0.2f", sec_change_score);
	printf("\n");

	printf("3�� ���� ��ȯ ����(50%%) : %0.2f", trd_change_score);
	printf("\n");

	result = fst_change_score + sec_change_score + trd_change_score;
	printf("�� ��ȯ ������ �� : %0.2f", result);



	return 0;
}