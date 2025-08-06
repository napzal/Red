//GetHighestNumeral.c
//
/***************************************************************************************************************************
* 파일명칭 : GetHighestNumeral.c
* 기    능 : 계속해서 세 개의 수가 입력될 때 가장 큰 수를 구하다.
* 함수명칭 : main
* 입    력 : 첫 번째 수, 두 번째 수, 세 번째 수
* 출    력 : 가장 큰 수
* 작성일자 : 2025/08/05
****************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 선언 
int main(int argc, char* argv[]);

//SLong 자료형 선언
typedef signed long int SLong;

//함수 정의 
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	SLong higestNumeral;
	SLong firstNumeral;
	SLong secondNumeral;
	SLong thirdNumeral;

	//1. 파일이 끝이 아닌동안 반복하다.
	scanf("%ld %ld %ld", &firstNumeral, &secondNumeral, &thirdNumeral);
	while (!feof(stdin)) {
		//1.2 수들을 비교하여 가장 큰 수를 구하다.
		if (firstNumeral > secondNumeral) {
			higestNumeral = firstNumeral;
		}
		else {
			higestNumeral = secondNumeral;
		}
		if (thirdNumeral > higestNumeral) {
			higestNumeral = thirdNumeral;
		}
		//1.3 가장 큰 수를 출력하다.
		printf("가장 큰 수는 %ld입니다.\n", higestNumeral);
		//1.1 첫 번째 수, 두 번째 수, 세 번째 수를 입력받다.
		scanf("%ld %ld %ld", &firstNumeral, &secondNumeral, &thirdNumeral);
	}
	//2. 끝내다.
	return 0;
}