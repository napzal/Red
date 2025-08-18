//CountTheNumberOfTimesAPaperIsFolded.c
//
/*****************************************************************************************************************************
* 파일명칭 : CountTheNumberOfTimesAPaperIsFolded.c
* 기    능 : 계속해서 종이의 두께가 입력될 때, 두께가 얼마나 되던지 종이를 접을 수 있다고 가정하고 몇 번을 접어야 1YARD 이상이
			 되는지 구한다. (입력되는 종이의 두께의 단위는 inch이고 1YARD는 32inch이다.)
* 함수명칭 : main
* 입    력 : 종이의 두께
* 출    력 : 종이의 두께, 접은 횟수
* 작성일자 : 2025/08/17
******************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable :4996)

//매크로 상수
#define AYARD 32.0F

//함수 선언
int main(int argc, char* argv[]);

//UShort 자료형 선언
typedef unsigned short int UShort;

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	UShort count = 0;
	float thickness;

	//파일이 끝이 아닌 동안 반복하다.
	printf("종이의 두께를 입력하시오.\n");
	scanf("%f", &thickness);
	while (!feof(stdin)) {
		//1.2 종이의 두께가 1YARD보다 얇으면 반복하다.
		while (thickness < AYARD) {
			//1.2.3 종이의 두께와 접은 횟수를 출력하다.
			printf("종이의 두께 : %.1f, 접은 횟수 : %hu\n", thickness, count);
			//1.2.1 접은 횟수를 세다.
			count++;
			//1.2.2 종이의 두께를 구하다.
			thickness *= 2;
		}
		printf("종이의 두께 : %.1f, 접은 횟수 : %hu\n", thickness, count);
		count = 0;
		//1.1 종이의 두께를 입력받다.
		printf("종이의 두께를 입력하시오.\n");
		scanf("%f", &thickness);
	}
	//2. 끝내다.
	return 0;
}