#include <stdio.h>

/*
�Լ��� �����ϱ� ���� �Լ��� ���� �����Ѵ�
*/
int firstQuestion(oddNum);
int secondQuestion(oddNum);
int thirdQuestion(oddNum);
int fourthQuestion(oddNum);
int fifthQuestion(oddNum);


int main() {

	/*
	Ȧ���� �Է� �ޱ� ���� ������ �����Ѵ�
	*/
	int oddNum;

	/*
	Ű����� ���� 3 �̻� 7 ������ ���� Ȧ���� �Է¹޾� oddNum�� �����Ѵ�
	*/
	printf("3 �̻� 7 ������ ���� Ȧ�� �ϳ��� �Է��Ͻÿ� : ");
	scanf("%d", &oddNum);

	printf("1)");
	printf("\n");
	firstQuestion(oddNum);  // �Լ��� �̿��Ͽ� ����Ѵ�
	printf("\n");           // ��ĭ ����ش�

	printf("2)");
	printf("\n");
	secondQuestion(oddNum); // �Լ��� �̿��Ͽ� ����Ѵ�
	printf("\n");           // ��ĭ ����ش�

	printf("3)");
	printf("\n");
	thirdQuestion(oddNum);  // �Լ��� �̿��Ͽ� ����Ѵ�
	printf("\n");           // ��ĭ ����ش�

	printf("4)");
	printf("\n");
	fourthQuestion(oddNum); // �Լ��� �̿��Ͽ� ����Ѵ�      
	printf("\n");           // ��ĭ ����ش�

	printf("5)");
	printf("\n");
	fifthQuestion(oddNum);  // �Լ��� �̿��Ͽ� ����Ѵ�       
	

	return 0;
}
/*
�Լ� �̸�: firstQuestion
��� : 1���� �Է� ���� Ȧ�� ���� ����� �ϴµ� 1�� �Է� ���� Ȧ�� ��ŭ �ϳ��� �۾����鼭 Ȧ���� �ѹ� ��µǰ� �Ѵ�
���� : oddNum : 3 �̻� 7 ������ ���� Ȧ�� 
��ȯ��: 1���� �Է� ���� Ȧ�� ���� ����� �ϴµ� 1�� �Է� ���� Ȧ�� ��ŭ �ϳ��� �۾����鼭 Ȧ���� �ѹ� ��µǰ� �Ѵ�
�ۼ� ��¥ : 2021/10/19
*/
int firstQuestion(oddNum) {

	/*
	�ݺ����� �̿��Ͽ� ��¹޴´�
	*/

	for (int column = 0; column < oddNum; column++) {

		for (int print_blank = 0; print_blank < column; print_blank++) {

			printf(" ");
		} 

		for (int print_num = oddNum; print_num > column; print_num--) {
			printf("%d", column + 1);
		}

		printf("\n");
	}
}
/*
�Լ� �̸�: secondQuestion
��� : �Է¹��� Ȧ�� ��ŭ �ݺ��ϰ� ���ڰ� �ϳ��� �þ�� ����Ѵ�
���� : oddNum : 3 �̻� 7 ������ ���� Ȧ��
��ȯ��: �Է¹��� Ȧ�� ��ŭ �ݺ��ϰ� ���� ������ �ϳ��� �þ�� ����Ѵ�
�ۼ� ��¥ : 2021/10/19
*/
int secondQuestion(oddNum) {

	/*
	�ݺ����� �̿��Ͽ� ��¹޴´�
	*/

	for (int column = 0; column < oddNum; column++) {

		int value = oddNum;

		for (int row = 0; row <= column; row++) {
			printf("%d", value);
			value--;
		}

		printf("\n");
	}
	
}
/*
�Լ� �̸�: thirdQuestion
��� : �Է� ���� Ȧ�� ��ŭ ����� ������ �߰� �ٷ� ������ �� ������ �پ��ٰ� �þ�� ����Ѵ�
���� : oddNum : 3 �̻� 7 ������ ���� Ȧ��
��ȯ��: �Է� ���� Ȧ�� ��ŭ ����� ������ �߰� �ٷ� ������ �� ������ �پ��ٰ� �þ�� ����Ѵ�
�ۼ� ��¥ : 2021/10/19
*/
int thirdQuestion(oddNum) {

	/*
	�ݺ����� �̿��Ͽ� ��¹޴´�
	*/

	for (int column_for_top = 0; column_for_top < oddNum; column_for_top += 2) {
		
		for (int print_blank_top = 0; print_blank_top < column_for_top; print_blank_top++) {

			printf(" ");
		}
		
		for (int print_num_top = column_for_top; print_num_top < oddNum; print_num_top++) {
			
			printf("%d", print_num_top + 1);
		}

		printf("\n");
	}
	for (int column_for_bottom = oddNum - 2; column_for_bottom > 0; column_for_bottom -= 2) {
		
		for (int print_blank_bottom = 1; print_blank_bottom < column_for_bottom; print_blank_bottom++) {

				printf(" ");
		}
		
		for (int print_num_bottom = column_for_bottom; print_num_bottom <= oddNum ; print_num_bottom++) {
			
			printf("%d", print_num_bottom);
		}

		printf("\n");
		}
		
	
}
/*
�Լ� �̸�: fourthQuestion
��� : 1���� �Է¹��� Ȧ���� �밢������ ������ ����Ѵ�
���� : oddNum : 3 �̻� 7 ������ ���� Ȧ��
��ȯ��: 1���� �Է¹��� Ȧ���� �밢������ ������ ����Ѵ�
�ۼ� ��¥ : 2021/10/19
*/
int fourthQuestion(oddNum) {

	/*
	�ݺ����� �̿��Ͽ� ��¹޴´�
	*/

	for (int column = 1; column <= oddNum; column++) {
		
		for (int print_blank = 1; print_blank < column; print_blank++) {

			printf(" ");
		}

		printf("%d", column);
		printf("\n");
	}
}
/*
�Լ� �̸�: fifthQuestion
��� : Ȧ�� ��° �ٿ� �ִ� ���� ���ʿ��� ������ 1,3,5 ... ��Ȧ�� ���� �þ�� ����ϰ� ¦�� ���� �ٿ� �ִ� ���� �����ʿ��� ���� 2,4,...¦������ �þ�� ����Ѵ�
���� : oddNum : 3 �̻� 7 ������ ���� Ȧ��
��ȯ��: Ȧ�� ��° �ٿ� �ִ� ���� ���ʿ��� ������ 1,3,5 ... ��Ȧ�� ���� �þ�� ����ϰ� ¦�� ���� �ٿ� �ִ� ���� �����ʿ��� ���� 2,4,...¦������ �þ�� ����Ѵ�
�ۼ� ��¥ : 2021/10/19
*/
int fifthQuestion(oddNum) {

	/*
	�ݺ����� �̿��Ͽ� ��¹޴´�
	*/

	for (int column = 1; column <= 5; column++) {

		if (column % 2 == 0) {

			for (int print_blank = 0; print_blank < oddNum - column; print_blank++) {

				printf(" ");
			}

			for (int print_num_top = 0; print_num_top < column; print_num_top++) {

				printf("%d", column);
			}
		}
		else {

			for (int print_num_bottom = 0; print_num_bottom < column; print_num_bottom++) {

				printf("%d", column);
			}
		}
		printf("\n");
	}
}
