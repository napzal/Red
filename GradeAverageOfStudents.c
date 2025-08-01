//GradeAverageOfStudents.c
//
/*********************************************************************************************************************
파일명칭 : GradeAverageOfStudents.c
기    능 : 학생 10명에 대해 평균을 읽고 평점을 구하여 출력한다.
함수명칭 : main
입    력 : 이름, 평균
출    력 : 번호, 이름, 평균, 평점
작성일자 : 2025/07/28
**********************************************************************************************************************/

//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//매크로 상수들
#define MAX 10
#define HIGHEST 100.0F
#define GRADE_A 90.0F
#define GRADE_B 80.0F
#define GRADE_C 70.0F
#define GRADE_D 60.0F
#define LOWEST 0.0F

//함수 선언
int main(int argc, char* argv[]);
//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	char name[11];
	float average;
	char grade;
	unsigned short int number;

	//1. 번호가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//1.2 이름과 평균을 입력받는다.
		scanf("%s %f", name, &average);
		//1.3 평균에 따라 평점을 매기다.
		if (average >= GRADE_A && average <= HIGHEST) {
			grade = 'A';
		}
		else if (average >= GRADE_B&&average<GRADE_A) {
			grade = 'B';
		}
		else if (average >= GRADE_C && average < GRADE_B) {
			grade = 'C';
		}
		else if (average >= GRADE_D && average < GRADE_C) {
			grade = 'D';
		}
		else if (average >= LOWEST && average < GRADE_D) {
			grade = 'F';
		}
		else {
			grade = 'X';
		}
		//1.4 번호, 이름, 평균, 평점을 출력한다.
		printf("%d. %s %.1f %c\n",number,name,average,grade);
		//1.1 번호를 세다.
	}
	//2. 끝내다.
	return 0;
}