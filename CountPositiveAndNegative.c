//CountPositiveAndNegative.c
//
/*******************************************************************************************************************
* ���ϸ�Ī : CountPositiveAndNegative.c
* ��    �� : 100���� ���ڰ� �Էµ� �� ����� ������ ������ ������ ���� ��� �߿��� Ȧ���� ¦���� ������ ����.
* �Լ���Ī : main
* ��    �� : ����
* ��    �� : ����� ����, ������ ����, Ȧ���� ����, ¦���� ����
* �ۼ����� : 2025/08/01
********************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//��ũ�� ���
#define MAX 100

//UShort �ڷ��� ����
typedef unsigned short int UShort;

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	UShort countPositive = 0;
	UShort countNegative = 0;
	UShort countOdd = 0;
	UShort countEven = 0;
	int numeral;
	UShort i;
	UShort remainder;

	//1. i�� MAX���� �۰ų� �������� �ݺ��ϴ�.
	for (i = 1; i <= MAX; i++) {
		//1.1 ���� �Է� �޴�.
		scanf("%d", &numeral);
		//1.2 ���� ������� �������� �Ǵ��ϴ�.
		//1.3 ���� ����̸�
		if (numeral > 0) {
			//1.3.1 ����� ������ ����.
			countPositive++;
			//1.3.2 ���� Ȧ������ ¦������ �Ǵ��ϴ�.
			remainder = numeral % 2;
			//1.3.3 ���� Ȧ���̸� Ȧ���� ������ ����.
			if (remainder > 0) {
				countOdd++;
			}
			//1.3.4 ���� ¦���̸� ¦���� ������ ����.
			else {
				countEven++;
			}
		}
		//1.4 ���� �����̸� ������ ������ ����.
		else if(numeral<0){
			countNegative++;
		}
		//1.5 ����� ����, ������ ����, Ȧ���� ����, ¦���� ������ ����ϴ�.
		printf("����� ���� : %d��, ������ ���� : %d��, Ȧ���� ���� : %d��, ¦���� ���� : %d��\n",
			countPositive, countNegative, countOdd, countEven);
	}
	//2. ������.
	return 0;
}