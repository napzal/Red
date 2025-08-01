//CountCoins.c
//
/*********************************************************************************************************************
* 파일명칭 : CountCoins.c
* 기    능 : 10원, 100원, 500원 동전이 각각 10개씩 있을 때 3가지 동전을 모두 사용하여 3800원이 되려면 각각 몇 개씩
			 필요한지 구한다.(깎아서 구하는, 반)
* 함수명칭 : main
* 입    력 : 없음
* 출    력 : 500원 개수, 100원 개수, 10원 개수
* 작성일자 : 2025/07/29
**********************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include <stdio.h>

//상수 매크로 
#define MAX 10

//통화 자료형 선언
typedef unsigned long int Currency;

//함수 원형
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의
	unsigned short int count500Won = 0;
	unsigned short int count100Won = 0;
	unsigned short int count10Won = 0;
	Currency cash = 3800;
	
	//1. 현금이 500원 보다 크면 반복한다.
	while (cash > 500 && count500Won < MAX) {
		//1.1 500원 개수를 세다.
		count500Won++;
		//1.2 현금을 세다.
		cash -= 500;
	}
	//2. 현금이 100원 보다 크면 반복한다.
	while (cash > 100 && count100Won < MAX) {
		//2.1 100원 개수를 세다.
		count100Won++;
		//2.2 현금을 세다.
		cash -= 100;
	}
	//3. 현금이 0원 보다 크면 반복한다.
	while (cash > 0 && count10Won < MAX) {
		//3.1 10원 개수를 세다.
		count10Won++;
		//3.2 현금을 세다.
		cash -= 10;
	}
	//4. 500원 개수, 100원 개수, 10원 개수를 출력한다.
	printf("500원 개수 : %d개, 100원 개수 : %d개, 10원 개수 : %d개입니다.", count500Won, count100Won, count10Won);
	//5. 끝내다.
	return 0;
}