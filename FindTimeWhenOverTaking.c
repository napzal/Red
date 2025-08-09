//FindTimeWhenOverTaking.c
//
/**************************************************************************************************************************************
* 파일명칭 : FindTimeWhenOverTaking.c
* 기    능 : 두 명의 자전거 선수가 있을 때, 한 명의 자전거 선수 A가 어떤 속도(m/s)로 출발한 후 어느 거리만큼 달렸을 때 다른 한
			 명의 자전거 선수 B가 출발한다면 몇 초 후에 B가 A를 추월하는지 구한다. 계속해서 A속도, B속도 그리고 A가 간 거리가 입력된다.
* 함수명칭 : main
* 입    력 : A 속도, B 속도, A가 간 거리
* 출    력 : 초, A가 간 거리, B가 간 거리
* 작성일자 : 2025/08/09
***************************************************************************************************************************************/
//함수 원형 복사 지시 매크로
#include<stdio.h>

//scanf 함수 지원
#pragma warning(disable:4996)

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동 변수들 선언 및 정의 
	unsigned short int second;
	float distanceOfB;
	float distanceOfA;
	float speedOfA;
	float speedOfB;

	//1. 파일이 끝이 아닌동안 반복하다.
	printf("A속도, B속도, A가 간 거리를 입력하시오.\n");
	scanf("%f %f %f", &speedOfA, &speedOfB, &distanceOfA);
	while (!feof(stdin)) {
		//1.2 B가 A를 추월할 때까지 반복하다.
		second = 0;
		distanceOfB = 0;
		while (distanceOfB <= distanceOfA) {
			//1.2.4 초, A가 간 거리, B가 간 거리를 출력하다.
			printf("%d초, A가 간 거리 : %.1fm, B가 간 거리 : %.1fm\n", second, distanceOfA, distanceOfB);
			//1.2.1 초를 세다.
			second++;
			//1.2.2 A가 간 거리를 구하다.
			distanceOfA += speedOfA;
			//1.2.3 B가 간 거리를 구하다.
			distanceOfB += speedOfB;
		}
		printf("%d초, A가 간 거리 : %.1fm, B가 간 거리 : %.1fm\n", second, distanceOfA, distanceOfB);
		//1.1 A속도, B속도, A가 간거리를 입력받다.
		printf("A속도, B속도, A가 간 거리를 입력하시오.\n");
		scanf("%f %f %f", &speedOfA, &speedOfB, &distanceOfA);
	}
	//2. 끝내다.
	return 0;
}