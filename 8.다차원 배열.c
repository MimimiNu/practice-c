#include<stdio.h>

void print_source1_and_2(int src1[][2], int src2[][2]);						// �Լ� ����
int compare_rows_of_arrays(int src1[][2], int src2[][2], int target_row);	// �Լ� ����

/*
�Լ� �̸� : main �Լ�
��� : �迭���� �����ϰ� �Լ� �ΰ��� ���� ��Ų��.
���� : x
��ȯ��: 0 -> ��������
�ۼ� ��¥: 2021/11/12
*/
int main() {
	
	int source1[3][2] = { {1, 2},{3, 4},{5, 6} };
	int source2[3][2] = { {1, 2},{3, 5},{5, 6} };
	int result = 0;

	/*
	ù��° ��� �ϴ� �Լ� ����
	*/

	print_source1_and_2(source1, source2);
	printf("�� ���� �� ��� :");
	printf("\n");

	/*
	�ι�° ���ϴ� �Լ� ����
	*/

	compare_rows_of_arrays(source1, source2, result);

	return 0;
}

/*
�Լ� �̸� : print_source1_and_2 �Լ�
��� : �迭 �ΰ��� ����Ѵ�
���� : int src1[][2], int src2[][2]
��ȯ��: ����
�ۼ� ��¥: 2021/11/12
*/

void print_source1_and_2(int src1[][2], int src2[][2]){
	
	printf("source1 :");
	printf("\n");

	/*
	for ���� ���� �迭�� ����Ѵ�
	*/

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j <  2; j++) {
			printf("%d ", src1[i][j]);
		}
		printf("\n");
	}

	printf("source2 :");
	printf("\n");

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			printf("%d ", src2[i][j]);
		}
		printf("\n");
	}
}

/*
�Լ� �̸� : compare_rows_of_arrays �Լ�
��� : �迭 �ΰ��� ���Ͽ� ������ ������ �ٸ��� ������ 0 �� ����Ѵ�
���� : int src1[][2], int src2[][2], int target_row
��ȯ��: 0 --> ��������
�ۼ� ��¥: 2021/11/12
*/

int compare_rows_of_arrays(int src1[][2], int src2[][2], int target_row) {

	/*
	for ���� ���� �迭�� �� �ϰ� ����Ѵ�.
	*/

	for (int i = 0; i < 3; i++) {
		int result1 = 0, result2 = 0;

		for (int j = 0; j < 2; j++) {

			result1 = result1 + src1[i][j];
		}

		for (int j = 0; j < 2; j++) {

			result2 = result2 + src2[i][j];
		}

		if (result1 == result2) {

			printf("%d,", 1);
		}

		else {
			printf("%d,", 0);
			break;
		}

	}

	/*
	���ǹ��� ���� ������ Ʋ���� ���Ѵ�
	*/

	if (src1[3][0] + src1[3][1] == src2[3][0] + src2[3][1]) {

		printf("%d", 1);
	}

	else{
		printf("%d", 0);
	}

	return 0;
}