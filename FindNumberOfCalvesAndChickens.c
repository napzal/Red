//FindNumberOfCalvesAndChickens.c
//
/********************************************************************************************************************
* ���ϸ�Ī : FindNumberOfCalvesAndChickens.c
* ��    �� : �Ӹ����� �ٸ����� �־����� �۾����� ���� ���� �� �� �۾��� ���� ���� ���� ���Ѵ�.
* �Լ���Ī : main
* ��    �� : ����
* ��    �� : �۾��� ��, �� ��
* �ۼ����� : 2025/07/26
*********************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//��ũ�� �����
#define TARGETEDNUMBEROFHEAD 46
#define TARGETEDNUMBEROFLEGS 140

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ���� 
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	unsigned short int calves = TARGETEDNUMBEROFHEAD;
	unsigned short int chickens = 0;
	unsigned short int legs;

	//1.�ٸ� ���� ��ǥ�ϴ� �ٸ� �� ���� ũ�� �ݺ��Ѵ�.
	legs = calves * 4;
	while (legs > TARGETEDNUMBEROFLEGS) {
		//1.4 �۾��� ��, �� ��, �ٸ� ���� ����Ѵ�.
		printf("�۾��� �� : %d, �� �� : %d, �ٸ� �� : %d\n", calves, chickens, legs);
		//1.1 �۾��� ���� ����.
		calves--;
		//1.2 �� ���� ����.
		chickens++;
		//1.3 �ٸ� ���� ����.
		legs -= 2;
	}
	//2. �۾��� ��, �� ���� ����Ѵ�.
	printf("�۾����� %d�����̰�, ���� %d���� �Դϴ�.", calves, chickens);
	//3. ������.
	return 0;
}