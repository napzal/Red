//CountSpecificStudentsAndGetHighestAndLowestScore.c
//
/*******************************************************************************************************************************
* 파일명칭 : CountSpecificStudentsAndGetHighestAndLowestScore.c
* 기    능 : 50명의 학생의 점수가 입력될 때, 40점 이상 60점 이하인 학생 수를 세고, 최고점과 최하점을 구하다.(점수는 정수이다.)
* 함수명칭 : main
* 입    력 : 점수
* 출    력 : 학생 수, 최고점, 최하점
* 작성일자 : 2025/08/03
********************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable : 4996)

//매크로 상수
#define STUDENTS 50

//UShort 자료형 선언
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	UShort count=0;
	UShort highestScore=0;
	UShort lowestScore=0;
	UShort score;
	UShort i;

	//1. 학생 수만큼 반복하다.
	for (i = 1; i <= STUDENTS; i++) {
		//1.1 점수를 입력받다.
		scanf("%hu", &score);
		//1.2 40점 이상 60점 이하라면 학생 수를 세다.
		if (score >= 40 && score <= 60) {
			count++;
		}
		//1.3 최고점이라면 최고점을 구하다.
		if (i == 1 || score > highestScore) {
			highestScore = score;
		}
		//1.4 최하점이라면 최하점을 구하다.
		if (i == 1 || score < lowestScore) {
			lowestScore = score;
		}
	}
	//2. 학생 수, 최고점, 최하점을 출력하다.
	printf("40점 이상 60점 이하 학생 수는 %hu명이고, 최고점은 %hu, 최하점은 %hu입니다.", count, highestScore, lowestScore);
	//3. 끝내다.
	return 0;
}