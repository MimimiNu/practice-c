#include <stdio.h>

int main() {

	int fst_project, sec_project, trd_project;
	double fst_change_score, sec_change_score, trd_change_score,result;
	printf("1번 과제 점수 : ");
	scanf("%d", &fst_project);
	// 과제 점수를 입력 받는다
	printf("\n");

	printf("2번 과제 점수 : ");
	scanf("%d", &sec_project);
	// 과제 점수를 입력 받는다
	printf("\n");

	printf("3번 과제 점수 : ");
	scanf("%d", &trd_project);
	// 과제 점수를 입력 받는다
	printf("\n");

	fst_change_score = fst_project * 0.2;
	sec_change_score = sec_project * 0.3;
	trd_change_score = trd_project * 0.5;
	//각 과제 별 점수에 변환 점수를 구해준다
	printf("1번 과제 변환 점수(20%%) : %0.2f", fst_change_score);
	printf("\n");

	printf("2번 과제 변환 점수(30%%) : %0.2f", sec_change_score);
	printf("\n");

	printf("3번 과제 변환 점수(50%%) : %0.2f", trd_change_score);
	printf("\n");

	result = fst_change_score + sec_change_score + trd_change_score;
	printf("총 변환 점수의 합 : %0.2f", result);



	return 0;
}