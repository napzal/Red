//FindNumberOfCalvesAndChickens.c
//
/********************************************************************************************************************
* 파일명칭 : FindNumberOfCalvesAndChickens.c
* 기    능 : 머리수와 다리수만 주어지고 송아지와 닭의 수를 모를 때 송아지 수와 닭의 수를 구한다.
* 함수명칭 : main
* 입    력 : 없음
* 출    력 : 송아지 수, 닭 수
* 작성일자 : 2025/07/26
*********************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//매크로 상수들
#define TARGETEDNUMBEROFHEAD 46
#define TARGETEDNUMBEROFLEGS 140

//함수 선언
int main(int argc, char* argv[]);
//함수 정의 
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned short int calves = TARGETEDNUMBEROFHEAD;
	unsigned short int chickens = 0;
	unsigned short int legs;

	//1.다리 수가 목표하는 다리 수 보다 크면 반복한다.
	legs = calves * 4;
	while (legs > TARGETEDNUMBEROFLEGS) {
		//1.4 송아지 수, 닭 수, 다리 수를 출력한다.
		printf("송아지 수 : %d, 닭 수 : %d, 다리 수 : %d\n", calves, chickens, legs);
		//1.1 송아지 수를 세다.
		calves--;
		//1.2 닭 수를 세다.
		chickens++;
		//1.3 다리 수를 세다.
		legs -= 2;
	}
	//2. 송아지 수, 닭 수를 출력한다.
	printf("송아지는 %d마리이고, 닭은 %d마리 입니다.", calves, chickens);
	//3. 끝내다.
	return 0;
}