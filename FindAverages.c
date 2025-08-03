//FindAverages.c
//
/****************************************************************************************************************
* 파일명칭 : FindAverages.c
* 기    능 : 60명 학생의 성명과 3과목 점수가 입력될 때, 개인의 평균과 반 평균을 구하다.
* 함수명칭 : main
* 입    력 : 성명, 국어 점수, 영어 점수, 수학 점수
* 출    력 : 개인 평균, 반 평균
* 작성일자 : 2025/08/02
*****************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable : 4996)

//매크로 상수들
#define STUDENTS 60
#define SUBJECTS 3.0F

//UShort 자료형 선언
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float average;
	float classAverage;
	char name[11];
	UShort koreanScore;
	UShort englishScore;
	UShort mathScore;
	UShort sum;
	unsigned long int total = 0;
	UShort i;

	//1. 학생수만큼 반복하다.
	for (i = 1; i <= STUDENTS; i++) {
		//1.1 성명, 국어점수, 영어점수, 수학점수를 입력받다.
		printf("성명, 국어 점수, 영어 점수, 수학 점수를 차례로 입력하시오.\n");
		scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
		//1.2 합을 구하다.
		sum = koreanScore + englishScore + mathScore;
		//1.3 개인 평균을 구하다.
		average = sum / SUBJECTS;
		//1.4 개인 평균을 출력하다.
		printf("%s의 평균 : %.1f\n", name, average);
		//1.5 총점을 구하다.
		total += sum;
	}
	//2. 반 평균을 구하다.
	classAverage = total / (SUBJECTS * STUDENTS);
	//3. 반 평균을 출력하다.
	printf("반 평균 : %.2f", classAverage);
	//4. 끝내다.
	return 0;
}