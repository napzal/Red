//FindYearsToDoubleThePrincipal.c
//
/**********************************************************************************************************
파일명칭 : FindYearsToDoubleThePrincipal.c
기    능 : 연이율이 7%일 때 몇 년 만에 원금이 2배가 되는지 구한다.(단 이자는 복리식으로 계산한다.)
함    수 : main
입    력 : 없음
출    력 : 연이율, 연수, 원금
작성일자 : 2025/07/25
***********************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//매크로 상수
#define ANNUALRATE 1.07

//통화 자료형 선언
typedef double Currency;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned short int years = 0;
	Currency principal = 10000000;
	Currency twice = principal * 2;

	//1. 원금이 twice보다 적으면 반복한다.
	while (principal < twice) {
		//1.3 연수와 원금을 출력한다.
		printf("연수 : %d년차, 원금 : %.f원\n", years, principal);
		//1.1 연수를 세다.
		years++;
		//1.2 원금을 구하다.
		principal *= ANNUALRATE;
	}
	//2. 연이율, 연수, 원금을 출력한다.
	printf("연이율이 %.f%%인 상황에서 원금이 2배가 되는 연수는 %d년차이고 원금은 %.f원 입니다.", (ANNUALRATE-1)*100, years, principal);
	//3. 끝내다.
	return 0;
}