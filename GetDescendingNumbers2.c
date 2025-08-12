//GetDescendingNumbers2.c
//
/******************************************************************************************************************************
* 파일명칭 : GetDescendingNumbers2.c
* 기    능 : 계속해서 세 수를 읽어 입력된 수들의 크기의 내림차순으로 출력한다.
* 함수명칭 : main
* 입    력 : 첫 번째 수, 두 번째 수, 세 번째 수
* 출    력 : 첫 번째 수, 두 번째 수, 세 번째 수
* 작성일자 : 2025/08/12
*******************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float temp;

	//1. 파일이 끝이 아닌 동안 반복하다.
	printf("세 수를 입력하시오.\n");
	scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	while (!feof(stdin)){
		//1.2 첫 번째 수와 두 번째 수를 비교함에 따라 수를 교환하다.
		if (firstNumber < secondNumber) {
			temp = firstNumber;
			firstNumber = secondNumber;
			secondNumber = temp;
		}
		//1.3 첫 번째 수와 세 번째 수를 비교함에 따라 수를 교환하다.
		if (firstNumber < thirdNumber) {
			temp = firstNumber;
			firstNumber = thirdNumber;
			thirdNumber = temp;
		}
		//1.4 두 번째 수와 세 번째 수를 비교함에 따라 수를 교환하다.
		if (secondNumber < thirdNumber) {
			temp = secondNumber;
			secondNumber = thirdNumber;
			thirdNumber = temp;
		}
		//1.5 첫 번째 수, 두 번째 수, 세 번째 수를 출력하다.
		printf("%.1f %.1f %.1f\n", firstNumber, secondNumber, thirdNumber);
		//1.1 첫 번째 수, 두 번째 수, 세 번째 수를 입력받다.
		printf("세 수를 입력하시오.\n");
		scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	}
	//2. 끝내다.
	return 0;
}