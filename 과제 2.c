#include <stdio.h> 

void question1(int pinputed_num, int integer_array[]);															 // ����1 �Լ� ����
void question2(int positive_num, int times_num, int inputed_num, int integer_array[], int pchanged_list[]);      // ����2 �Լ� ����
void calculate_two_end_values(int original_list[], int modified_list[], int len, int target);				     // ����3 �Լ� ����

/*
�Լ� �̸� : main �Լ�
��� : ������ �Է¹����鼭 1~3 ������ �����Ű�� �Լ��� ����Ѵ�
���� : x
��ȯ��: 0 -> ��������
�ۼ� ��¥: 2021/11/10
*/
int main() {

	int inputed_num = 0, positive_num = 0, times_num = 0, special_integer = 0;
	int original_array[10], modified_array[10];

	printf("�Է¹��� ������ ���� �Է��Ͻÿ� : ");
	/*
	Ű����κ��� ������ �Է¹޴´�
	*/
	scanf("%d", &inputed_num); // 3�̻� 10������ ���� �Է��Ͻÿ�
	printf("����Ʈ�� ������ ���� ���� ��� �Է��Ͻÿ� : ");

	question1(inputed_num, original_array);

	printf("��� ���ǿ� ���� ���� ���� �ϳ��� ������ ���� �ϳ��� �Է��Ͻÿ� : ");
	/*
	Ű����κ��� �� ������ �Է¹޴´�
	*/
	scanf("%d %d", &positive_num, &times_num);

	question2(positive_num, times_num, inputed_num, original_array,modified_array);

	printf("Ư�� ������ �Է��Ͻÿ� : "); // ������ ������ ����
	/*
	Ű����κ��� ������ �Է¹޴´�
	*/
	scanf("%d", &special_integer);
	printf("Ư�� ������ ����Ʈ�� ������ �� �������� �� ���� : ");


	calculate_two_end_values(original_array, modified_array, inputed_num, special_integer);

	return 0;
}

/*
�Լ� �̸� : question1 �Լ�
��� : ������ �Է¹ް� �迭�� �����Ѵ�
���� : int inputed_num, int poriginal_array[]
��ȯ��: 0 -> ��������
�ۼ� ��¥: 2021/11/10
*/

void question1(int inputed_num, int poriginal_array[]) {


	for (int i = 0; i < inputed_num; i++) {

		/*
		Ű����κ��� ������ �Է¹޴´�
		*/
		scanf("%d", &poriginal_array[i]);
	}
}

/*
�Լ� �̸� : question2 �Լ�
��� : ���� ������ ����� �ش���� ���� ����Ʈ ���� ������ ���Ѵ�
���� : int p_num, int t_num, int i_num, int poriginal_array[], int pchanged_list[]
��ȯ��: 0 -> ��������
�ۼ� ��¥: 2021/11/10
*/

void question2(int p_num, int t_num, int i_num, int poriginal_array[], int pchanged_list[]) {

	/*
	for ���� ���� ���Ǹ°� �迭���� ���� ��ȯ�Ѵ�.
	*/
	for (int j = 0; j < i_num; j++) {

		if (poriginal_array[j] % p_num != 0) {
			pchanged_list[j] = poriginal_array[j] * t_num;
		}
		else {
			pchanged_list[j] = poriginal_array[j];
		}
	}
}

/*
�Լ� �̸� : question3 �Լ�
��� : Ư������ ���̸� ���ϰ� ���̰� ���� �Ͱ� ū���� ���Ѵ�
���� : int original_list[], int modified_list[], int len, int target
��ȯ��: 0 -> ��������
�ۼ� ��¥: 2021/11/10
*/

void calculate_two_end_values(int original_list[], int modified_list[], int len, int target) {
	
	int min, max;

	/*
	for���� ���� ���ǿ� �°� �迭�� �����ϰ� ������ �ִ�� �ּҸ� ���Ѵ�
	*/
	for (int k = 0; k < len; k++) {

		if (modified_list[k] > target) {

			modified_list[k] = modified_list[k] - target;
		}
		else {
			modified_list[k] = target - modified_list[k];
		}
		if (k == 0) {

			min = modified_list[k];
			max = modified_list[k];
		}
		else {
			if (min > modified_list[k]) {

				min = modified_list[k];
			}
			if (max < modified_list[k]) {

				max = modified_list[k];
			}
		}
		printf("%d ", modified_list[k]);
	}
	printf("\n");

	printf("Ư�� ������ �� ���̰� ���� ū (�����Ǳ� ����) ���� :");

	for (int t = 0; t < len; t++) {

		if (max == modified_list[t]) {

			printf(" %d", original_list[t]);
		}
	}
	printf("\n");

	printf("Ư�� ������ �� ���̰� ���� ���� (�����Ǳ� ����) ���� :");

	for (int t = 0; t < len; t++) {

		if (min == modified_list[t]) {

			printf(" %d", original_list[t]);
		}
	}
}