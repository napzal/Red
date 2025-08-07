//CalculatePayment.c
//
/**************************************************************************************************************************
* 파일명칭 : CalculatePayment.c
* 기    능 : 계속해서 사원번호, 일한 시간, 시간당 임금을 읽어서 사원의 급여를 계산한다. 일한 시간이 40시간을 초과한 경우,
			 40시간 초과분에 대해서는 임금을 1.5배로 계산하고 총 지급액이 40만원을 초과한 경우에는 세금으로 3만원을 뺀다.
			 (시급 책정은 30분 단위로 한다.)
* 함수명칭 : main
* 입    력 : 사원 번호, 일한 시간, 시간당 임금
* 출    력 : 사원 번호, 일한 시간, 시간당 임금, 초과 시간, 초과 임금, 급여, 세금 여부, 지급액
* 작성일자 : 2025/08/06
***************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//매크로 상수들
#define BASIC_WORKING_HOURS 40.0F
#define TAX 30000L
#define CRITERIAOFTAX 400000L

//함수 선언
int main(int argc, char* argv[]);

//Currency 자료형 선언
typedef unsigned long int Currency;

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float overTime;
	Currency excessWage;
	Currency salary;
	Currency payment;
	char isTaxed;
	char employeeNumber[8];
	float workingTime;
	Currency hourlyWage;

	//1. 파일이 끝이 아닌 동안 반복하다.
	printf("사원 번호, 일한 시간, 시간당 임금 순으로 차례로 입력하십시오.\n");
	scanf("%s %f %lu", &employeeNumber, &workingTime, &hourlyWage);
	while (!feof(stdin)) {
		//1.2 40시간 초과 여부에 따라
		if (workingTime > BASIC_WORKING_HOURS) {
			//1.2.1 초과 시간을 구하다.
			overTime = workingTime - BASIC_WORKING_HOURS;
			//1.2.2 초과 임금을 구하다.
			excessWage = overTime * hourlyWage * 1.5;
			//1.2.3 급여를 구하다.
			salary = BASIC_WORKING_HOURS * hourlyWage + excessWage;
		}
		else {
			//1.2.1 초과 시간을 구하다.
			overTime = 0;
			//1.2.2 초과 임금을 구하다.
			excessWage = 0;
			//1.2.3 급여를 구하다.
			salary = workingTime * hourlyWage;
		}
		//1.3 세금 여부에 따라 지급액을 구하다.
		if (salary > CRITERIAOFTAX) {
			isTaxed = 'O';
			payment = salary - TAX;
		}
		else {
			isTaxed = 'X';
			payment = salary;
		}
		//1.4 사원 번호, 일한 시간, 시간당 임금, 초과시간, 초과 임금, 급여, 세금 여부, 지급액을 출력하다.
		printf("사원 번호, 일한 시간, 시간당 임금, 초과 시간,	초과 임금,	  급여, 세금 여부,	지급액\n");
		printf("%s	,  %.1f,	%lu원,	%.1f,	%lu원,	%lu원,	%c,	%lu원\n\n", 
			employeeNumber, workingTime, hourlyWage, overTime, excessWage, salary, isTaxed, payment);
		//1.1 사원 번호, 일한 시간, 시간당 임금을 입력 받다.
		printf("사원 번호, 일한 시간, 시간당 임금 순으로 차례로 입력하십시오.\n");
		scanf("%s %f %lu", &employeeNumber, &workingTime, &hourlyWage);
	}
	//2. 끝내다.
	return 0;
}