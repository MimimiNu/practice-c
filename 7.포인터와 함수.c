#include <stdio.h>

void add_two_integers(int src1[], int src2[], int destination[], int len);


/*
�Լ��̸� : main
��� : �� �迭�� ���� �ٸ� �迭�� ������ ���� ����Ѵ�
���� : �迭��
��ȯ�� : 0 
�ۼ� ��¥ : 11/05
*/
int main() {

	int source1[5] = { -2, 4, -3, 1, 5 };
	int source2[5] = { 6, -7, 2, 3, -1 };
	int destination[5] = { 0 };
	// �迭���� �����Ѵ�

	printf("source1 : ");
	for (int i = 0; i < 5; i++) {
		if (i < 4) {
			printf("%d,", source1[i]);
		}

		else {
			printf("%d", source1[i]);
		}
			
	}
	//���� source1�� ��� �迭�� ����Ѵ�. �׸��� for���� �̿��Ͽ� ","�� �������Ѵ�

	printf("\n");

	printf("source2 : ");
	for (int j = 0; j < 5; j++) {

		if (j < 4) {
			printf("%d,", source2[j]);
		}

		else {
			printf("%d", source2[j]);
		}

	}
	//���� source2�� ��� �迭�� ����Ѵ�. �׸��� for���� �̿��Ͽ� ","�� �������Ѵ�

	printf("\n");

	add_two_integers(source1, source2, destination, 5);
	// �Լ��� ����Ѵ�

	printf("destination : ");
	for (int k = 0; k < 5; k++) {

		if (k < 4) {
			printf("%d,", destination[k]);
		}

		else {
			printf("%d", destination[k]);
		}
	}
	// �Լ��� ����ѵ� destination�� ����Ѵ�. �׸��� for���� �̿��Ͽ� ","�� �������Ѵ�
	return 0;
}

/*
�Լ��̸� : add_two_integers
��� : �� �迭�� ���� ���� �Ѱ��� �����Ѵ�
���� : int src1[], int src2[], int destination[], int len
��ȯ�� : ����
�ۼ� ��¥ : 11/05
*/
void add_two_integers(int src1[], int src2[], int destination[], int len) {

	for (int t = 0; t < len; t++) {
		destination[t] = src1[t] + src2[t];
	}
	// for���� �̿��Ͽ� src1 src2���� ���� destination�� �����Ѵ�
}