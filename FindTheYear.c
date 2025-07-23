//FindTheYear.c
//
/***************************************************************************************************************
파일명칭 : FindTheYear.c
기    능 : 1996년 H시의 인구는 250만명, 연 증가율은 3.6% 이고, K시의 인구는 180만 명이며 연증가율은 4.2%일 때,
		   K시의 인구가 H시의 인구보다 많아지게 되는 연도를 구한다.
함수명칭 : main
입    력 : 없음
출    력 : 연도, H시 인구, K시 인구
작성일자 : 2025년 7월 24일
****************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//매크로 상수들
#define ANNUALGROWTHRATEOFHCITY 1.036F
#define ANNUALGROWTHRATEOFKCITY 1.042F

//함수 원형
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned short int year=1996;
	unsigned long int populationOfHCity=2500000;
	unsigned long int populationOfKCity = 1800000;

	//1. K시의 인구가 H시의 인구보다 적거나 같은동안 반복한다.
	while (populationOfKCity <= populationOfHCity) {
		//1.4 연도, H시 인구, K시 인구를 출력한다.
		printf("%d년 H시 인구 : %d명, K시 인구 : %d명\n", year, populationOfHCity, populationOfKCity);
		//1.1 연도를 세다.
		year++;
		//1.2 H시의 인구를 구하다.
		populationOfHCity *= ANNUALGROWTHRATEOFHCITY;
		//1.3 K시의 인구를 구한다.
		populationOfKCity *= ANNUALGROWTHRATEOFKCITY;
	}
	//2.연도, H시 인구, K시 인구를 출력한다.
	printf("%d년 H시 인구 : %d명, K시 인구 : %d명", year, populationOfHCity, populationOfKCity);
	//3. 끝내다.
	return 0;
}