//CalculateAverage.c
/****************************************************************************************************************
파일명칭 : CalculateAverage.c
기    능 : 1000개의 숫자를 읽어 평균을 계산한다.
함수명칭 : main
입    력 : 수
출    력 : 평균
작성일자 : 2025년 07월 31일
*****************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable : 4996)

//매크로 상수
#define MAX 1000

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float average;
	int number;
	int sum=0;
	unsigned short int i;

	//1. i가 MAX보다 작거나 같은동안 반복한다.
	for (i = 1; i <= MAX; i++) {
		//1.1 수를 입력 받는다.
		scanf("%d", &number);
		//1.2 합을 구한다.
		sum += number;
		//1.3 합을 출력하다.
		printf("합 : %d\n", sum);
	}
	//2. 평균을 구한다.
	average = sum / (MAX*1.0F);
	//3. 평균을 출력한다.
	printf("평균 : %.2f", average);
	//4. 끝내다.
	return 0;
}