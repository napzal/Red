//CountPositiveAndNegative.c
//
/*******************************************************************************************************************
* 파일명칭 : CountPositiveAndNegative.c
* 기    능 : 100개의 숫자가 입력될 때 양수의 개수와 음수의 개수를 세고 양수 중에서 홀수와 짝수의 개수를 세다.
* 함수명칭 : main
* 입    력 : 숫자
* 출    력 : 양수의 개수, 음수의 개수, 홀수의 개수, 짝수의 개수
* 작성일자 : 2025/08/01
********************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//매크로 상수
#define MAX 100

//UShort 자료형 선언
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	UShort countPositive = 0;
	UShort countNegative = 0;
	UShort countOdd = 0;
	UShort countEven = 0;
	int numeral;
	UShort i;
	UShort remainder;

	//1. i가 MAX보다 작거나 같은동안 반복하다.
	for (i = 1; i <= MAX; i++) {
		//1.1 수를 입력 받다.
		scanf("%d", &numeral);
		//1.2 수가 양수인지 음수인지 판단하다.
		//1.3 수가 양수이면
		if (numeral > 0) {
			//1.3.1 양수의 개수를 세다.
			countPositive++;
			//1.3.2 수가 홀수인지 짝수인지 판단하다.
			remainder = numeral % 2;
			//1.3.3 수가 홀수이면 홀수의 개수를 세다.
			if (remainder > 0) {
				countOdd++;
			}
			//1.3.4 수가 짝수이면 짝수의 개수를 세다.
			else {
				countEven++;
			}
		}
		//1.4 수가 음수이면 음수의 개수를 세다.
		else if(numeral<0){
			countNegative++;
		}
		//1.5 양수의 개수, 음수의 개수, 홀수의 개수, 짝수의 개수를 출력하다.
		printf("양수의 개수 : %d개, 음수의 개수 : %d개, 홀수의 개수 : %d개, 짝수의 개수 : %d개\n",
			countPositive, countNegative, countOdd, countEven);
	}
	//2. 끝내다.
	return 0;
}