//GetPincipalAndInterest.c
//
/******************************************************************************************************************************
* 파일명칭 : GetPincipalAndInterest.c
* 기    능 : 계속해서 원금, 연이율, 연수가 입력될 때 복리로 계산하여 해마다 원리합계를 구하다.
* 함수명칭 : main
* 입    력 : 원금, 연이율, 연수
* 출    력 : 햇수, 이자, 원리금
* 작성일자 : 2025/08/07
*******************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 원형
int main(int argc, char* argv[]);

//UShort, Currency 자료형 선언
typedef unsigned short int UShort;
typedef double Currency;

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	UShort annualNumber;
	Currency interest;
	Currency principalAndInterest;
	Currency principal;
	float annualRate;
	UShort years;

	//1. 파일이 끝이 아닌 동안 반복하다.
	printf("원금, 연이율(%%), 연수 순으로 입력하시오.\n");
	scanf("%lf %f %hu", &principal, &annualRate, &years);
	while (!feof(stdin)) {
		//1.2 연수만큼 반복하다.
		interest = 0;
		principalAndInterest = principal;
		annualNumber = 0;
		while (annualNumber < years) {
			//1.2.4 햇수, 이자, 원리금을 출력하다.
			printf("%hu년차 이자 : %.lf원, 원리금 : %.lf원\n", annualNumber, interest, principalAndInterest);
			//1.2.2 이자를 구하다.
			interest = principalAndInterest * (annualRate / 100);
			//1.2.3 원리금을 구하다.
			principalAndInterest += interest;
			//1.2.1 햇수를 세다.
			annualNumber++;
		}
		printf("%hu년차 이자 : %.lf원, 원리금 : %.lf원\n", annualNumber, interest, principalAndInterest);
		//1.1 원금, 연이율, 연수를 입력받다.
		printf("원금, 연이율(%%), 연수 순으로 입력하시오.\n");
		scanf("%lf %f %hu", &principal, &annualRate, &years);
	}
	//2. 끝내다.
	return 0;
}