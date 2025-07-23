//FindLastTermAndExceededValue.c
//
/*****************************************************************************************************************
파일명칭 : FindLastTermAndExceededValue.c
기    능 : 1+3+5+...식으로 더하여 얼마까지 더하면 합이 1000을 초과하는가 그 때 마지막 항과 초과한 값을 구한다.
함수명칭 : main
입    력 : 없음
출    력 : 초과한 수, 항의 위치, 합, 초과한 값
작성일자 : 2025/07/23
******************************************************************************************************************/
//외부 파일 포함 기능
#include <stdio.h>

//매크로 상수들
#define MAX 1000
#define DIFFERENCE 2

//함수 선언
int main(int argc, char* argv[]);
//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned int number = 1;
	unsigned int positionOfTerm = 1;
	unsigned int sum = 0;
	unsigned int exceededValue;

	//1. 합이 MAX보다 작거나 같은동안 반복한다.
	sum += number;
	while (sum <= MAX) {
		//1.4 수와 합을 출력한다.
		printf("%d   %d\n", number, sum);
		//1.1 수를 세다.
		number += DIFFERENCE;
		//1.2 항 위치를 구한다.
		positionOfTerm++;
		//1.3 합을 구한다.
		sum += number;
	}
	//2. 초과한 값을 구한다.
	exceededValue = sum - MAX;
	//3. 항의 위치, 수, 합, 초과한 값을 출력한다.
	printf("%d번째 항의 값은 %d, 합은 %d, 초과한 값은 %d입니다.", positionOfTerm, number, sum, exceededValue);
	//4. 끝내다.
	return 0;
}
		
