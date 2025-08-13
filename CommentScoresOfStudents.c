//CommentScoresOfStudents.c
//
/********************************************************************************************************************************
* 파일명칭 : CommentScoresOfStudents.c
* 기    능 : 계속해서 성명과 국어, 영어, 수학 3과목 점수가 입력되면 개인 평균을 구하고, 90점 이상이면 "EXCELLENT", 60점 미만이면
			 "FAIL"을 입력 자료 및 개인 평균과 함께 출력하고, 마지막으로 각 과목별 평균을 구해서 출력한다.
* 함수명칭 : main
* 입    력 : 성명, 국어 점수, 영어 점수, 수학 점수
* 출    력 : 성명, 국어 점수, 영어 점수, 수학 점수, 평균, 평가, 국어 평균, 영어 평균, 수학 평균
* 작성일자 : 2025/08/13
*********************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 선언
int main(int argc, char* argv[]);

//UShort,ULong 자료형 선언
typedef unsigned short int UShort;
typedef unsigned long int ULong;

//함수 정의 
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	char name[11];
	UShort koreanScore;
	UShort englishScore;
	UShort mathScore;
	float average;
	char(*comment);
	float averageOfKorean;
	float averageOfEnglish;
	float averageOfMath;
	UShort sum;
	ULong sumOfKorean = 0;
	ULong sumOfEnglish = 0;
	ULong sumOfMath = 0;
	UShort count = 0;

	//1. 파일이 끝이 아닌 동안 반복한다.
	printf("성명, 국어 점수, 영어 점수, 수학 점수 순으로 입력하시오.\n");
	scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
	while (!feof(stdin)) {
		count++;
		//1.2 합을 구하다.
		sum = koreanScore + englishScore + mathScore;
		//1.3 평균을 구하다.
		average = sum / (3.0F);
		//1.4 평가하다.
		if (average >= 90.0F) {
			comment = "EXCELLENT";
		}
		else if(average < 60.0F) {
			comment = "FAIL";
		}
		else {
			comment = "";
		}
		//1.5 성명, 국어 점수, 영어 점수, 수학 점수, 평균, 평가를 출력하다.
		printf("%s 국어 : %hu, 영어 : %hu, 수학 : %hu, 평균 : %.2f, %s\n", name, koreanScore, englishScore, mathScore, average, comment);
		//1.6 국어 점수 합을 구하다.
		sumOfKorean += koreanScore;
		//1.7 영어 점수 합을 구하다.
		sumOfEnglish += englishScore;
		//1.8 수학 점수 합을 구하다.
		sumOfMath += mathScore;
		//1.1 성명, 국어 점수, 영어 점수, 수학 점수를 입력 받다.
		printf("성명, 국어 점수, 영어 점수, 수학 점수 순으로 입력하시오.\n");
		scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
	}
	//2. 국어 평균을 구하다.
	averageOfKorean = sumOfKorean / (count * 1.0F);
	//3. 영어 평균을 구하다.
	averageOfEnglish = sumOfEnglish / (count * 1.0F);
	//4. 수학 평균을 구하다.
	averageOfMath = sumOfMath / (count * 1.0F);
	//5. 국어 평균, 영어 평균, 수학 평균을 출력하다.
	printf("국어 과목 평균 : %.2f, 영어 과목 평균 : %.2f, 수학 과목 평균 : %.2f", averageOfKorean, averageOfEnglish, averageOfMath);
	//6. 끝내다.
	return 0;
}