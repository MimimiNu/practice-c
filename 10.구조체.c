#include <stdio.h>

/*
order��� ����ü�� ����� typedef�� Order�� �����ϰ� �����
product_name,number_of_orders ������ ���� �ϰ� �Լ��� �ŰԺ����� ����Ѵ�
*/
typedef struct order {

	char product_name[15];
	int number_of_orders;

} Order;
//typedef ���

void product_order(Order* parr, int length);			//�Լ� ����
void print_max_order(Order* parr, int length);			//�Լ� ����
void print_average_order(Order* parr, int length);		//�Լ� ����

/*
�Լ� �̸� : main
��� : �Լ� ȣ��
��ȯ�� : 0 -> ��������
�ۼ���¥ : 2021/12/03
*/

int main() {

	int length = 3;
	struct order order[3];

	product_order(order,length);			//�Լ� ȣ��
	print_max_order(order, length);			//�Լ� ȣ��
	print_average_order(order, length);		//�Լ� ȣ��

	return 0;
}

/*
�Լ� �̸� : product_order
��� : ��ǰ �̸� �� �ֹ� �� �Է� �ޱ�
���� : Order* parr, int length
�ۼ���¥ : 2021/12/03
*/

void product_order(Order* parr, int length) {

	for (int i = 0; i < length; i++) {

		printf("%d�� ��ǰ �̸� :", i + 1);
		gets((parr+i)->product_name);
		printf("%d�� �ֹ� �� :", i + 1);
		scanf("%d%*c", &(parr+i)->number_of_orders);
	}

	// for ���� ���� ��ǰ �̸� �� �ֹ� ���� �Է� �޴´�

	printf("\n"); 
	printf("\n");

}

/*
�Լ� �̸� : print_max_order
��� : �ִ� �ֹ� �� ���ϱ�
���� : Order* parr, int length
�ۼ���¥ : 2021/12/03
*/

void print_max_order(Order* parr, int length) {

	printf("�ִ� �ֹ� �� :");
	
	int max = 0;

	for (int i = 0; i < length; i++) {
		
		if ((parr + i)->number_of_orders > max) {

			max = (parr + i)->number_of_orders;
		}

		
	 }

	// for ���� ���� �ִ� �ֹ����� ���Ѵ�

	printf("%d\n", max);
}

/*
�Լ� �̸� : print_average_order
��� : ��� �ֹ� �� ���ϱ�
���� : Order* parr, int length
�ۼ���¥ : 2021/12/03
*/

void print_average_order(Order* parr, int length) {

	printf("��� �ֹ� �� :");

	int sum = 0;

	for (int i = 0; i < length; i++) {

		sum += (parr + i)->number_of_orders;
	}

	// for ���� ���� ��� �ֹ����� ���Ѵ�

	printf("%.1f\n", (float)sum / (float)length);	//typecasting�� ���� �Ҽ����� ������ �Ѵ�.
}
	


	