//IsPrimeNumber.c
//
/***************************************************************************************************************************
* 파일명칭 : IsPrimeNumber.c
* 기    능 : 10개의 자연수가 입력되면 소수인지 합성수인지 판단하다.
* 함수명칭 : main
* 입    력 : 수
* 출    력 : 소수 여부
* 작성일자 : 2025/08/04
****************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//매크로 상수
#define MAX 10

//ULong, UShort 자료형 선언
typedef unsigned long int ULong;
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	char (*isPrimeNumber);
	ULong numeral;
	UShort remainder;
	UShort i;
	ULong divisor;
	UShort flag;

	//1. MAX만큼 반복하다.
	for (i = 1; i <= MAX; i++) {
		//1.1 수를 입력받다.
		scanf("%lu", &numeral);
		//1.2 1과 자기자신 외 약수의 존재 여부를 판단하다.
		flag = 0;
		divisor = 2;
		while (divisor <= numeral / 2 && flag == 0) {
			remainder = numeral % divisor;
			if (remainder == 0) {
				flag = 1;
			}
			divisor++;
		}
		//1.3 약수의 존재 여부에 따라 소수인지 판단하다.
		if (flag == 0) {
			isPrimeNumber = "소수";
		}
		else {
			isPrimeNumber = "합성수";
		}
		//1.4 판단 여부를 출력하다.
		printf("%lu는 %s입니다.\n", numeral, isPrimeNumber);
	}
	//2. 끝내다.
	return 0;
}