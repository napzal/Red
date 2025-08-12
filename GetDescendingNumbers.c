//GetDescendingNumbers.c
//
/*******************************************************************************************************************************
* 파일명칭 : GetDescendingNumbers.c
* 기    능 : 계속해서 세 수를 읽어 입력된 수들의 크기의 내림차순으로 출력한다.
* 함수명칭 : main
* 입    력 : 첫 번째 수, 두 번째 수, 세 번째 수
* 출    력 : 가장 큰 수, 중간 수, 가장 작은 수
* 작성일자 : 2025/08/12
********************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float largestNumber;
	float middleNumber;
	float smallestNumber;
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	//1. 파일이 끝이 아닌 동안 반복하다.
	printf("세 수를 입력하시오.\n");
	scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	while (!feof(stdin)) {
		//1.2 세 수를 비교함에 따라
		if (firstNumber > secondNumber) {
			//1.2.1 가장 큰 수를 구하다.
			largestNumber = firstNumber;
			//1.2.2 남은 두 수를 비교함에 따라
			if (secondNumber > thirdNumber) {
				//1.2.2.1 중간 수를 구하다.
				middleNumber = secondNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = thirdNumber;
			}
			else {
				//1.2.2.1 중간 수를 구하다.
				middleNumber = thirdNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = secondNumber;
			}
		}
		else {
			//1.2.1 가장 큰 수를 구하다.
			largestNumber = secondNumber;
			//1.2.2 남은 두 수를 비교함에 따라
			if(firstNumber>thirdNumber){
				//1.2.2.1 중간 수를 구하다.
				middleNumber = firstNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = thirdNumber;
			}
			else {
				//1.2.2.1 중간 수를 구하다.
				middleNumber = thirdNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = firstNumber;
			}
		}
		//1.2 세 수를 비교함에 따라
		if (thirdNumber > largestNumber) {
			//1.2.1 가장 큰 수를 구하다.
			largestNumber = thirdNumber;
			//1.2.2 남은 두 수를 비교함에 따라
			if (firstNumber > secondNumber) {
				//1.2.2.1 중간 수를 구하다.
				middleNumber = firstNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = secondNumber;
			}
			else {
				//1.2.2.1 중간 수를 구하다.
				middleNumber = secondNumber;
				//1.2.2.2 가장 작은 수를 구하다.
				smallestNumber = firstNumber;
			}
		}
		//1.3 가장 큰 수, 중간 수, 가장 작은 수를 출력하다.
		printf("%.1f %.1f %.1f\n", largestNumber, middleNumber, smallestNumber);
		//1.1 첫 번째 수, 두 번째 수, 세 번째 수를 입력하다.
		printf("세 수를 입력하시오.\n");
		scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	}
	//2. 끝내다.
	return 0;
}
