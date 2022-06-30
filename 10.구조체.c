#include <stdio.h>

/*
order라는 구조체를 만들고 typedef로 Order도 가능하게 만든다
product_name,number_of_orders 변수를 선언 하고 함수의 매게변수로 사용한다
*/
typedef struct order {

	char product_name[15];
	int number_of_orders;

} Order;
//typedef 사용

void product_order(Order* parr, int length);			//함수 선언
void print_max_order(Order* parr, int length);			//함수 선언
void print_average_order(Order* parr, int length);		//함수 선언

/*
함수 이름 : main
기능 : 함수 호출
반환값 : 0 -> 정상종료
작성날짜 : 2021/12/03
*/

int main() {

	int length = 3;
	struct order order[3];

	product_order(order,length);			//함수 호출
	print_max_order(order, length);			//함수 호출
	print_average_order(order, length);		//함수 호출

	return 0;
}

/*
함수 이름 : product_order
기능 : 제품 이름 및 주문 수 입력 받기
인자 : Order* parr, int length
작성날짜 : 2021/12/03
*/

void product_order(Order* parr, int length) {

	for (int i = 0; i < length; i++) {

		printf("%d번 제품 이름 :", i + 1);
		gets((parr+i)->product_name);
		printf("%d번 주문 수 :", i + 1);
		scanf("%d%*c", &(parr+i)->number_of_orders);
	}

	// for 문을 통해 제품 이름 과 주문 수를 입력 받는다

	printf("\n"); 
	printf("\n");

}

/*
함수 이름 : print_max_order
기능 : 최대 주문 수 구하기
인자 : Order* parr, int length
작성날짜 : 2021/12/03
*/

void print_max_order(Order* parr, int length) {

	printf("최대 주문 수 :");
	
	int max = 0;

	for (int i = 0; i < length; i++) {
		
		if ((parr + i)->number_of_orders > max) {

			max = (parr + i)->number_of_orders;
		}

		
	 }

	// for 문을 통해 최대 주문수를 구한다

	printf("%d\n", max);
}

/*
함수 이름 : print_average_order
기능 : 평균 주문 수 구하기
인자 : Order* parr, int length
작성날짜 : 2021/12/03
*/

void print_average_order(Order* parr, int length) {

	printf("평균 주문 수 :");

	int sum = 0;

	for (int i = 0; i < length; i++) {

		sum += (parr + i)->number_of_orders;
	}

	// for 문을 통해 평균 주문수를 구한다

	printf("%.1f\n", (float)sum / (float)length);	//typecasting을 통해 소수점도 나오게 한다.
}
	


	