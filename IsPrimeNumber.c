//IsPrimeNumber.c
//
/***************************************************************************************************************************
* ���ϸ�Ī : IsPrimeNumber.c
* ��    �� : 10���� �ڿ����� �ԷµǸ� �Ҽ����� �ռ������� �Ǵ��ϴ�.
* �Լ���Ī : main
* ��    �� : ��
* ��    �� : �Ҽ� ����
* �ۼ����� : 2025/08/04
****************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//��ũ�� ���
#define MAX 10

//ULong, UShort �ڷ��� ����
typedef unsigned long int ULong;
typedef unsigned short int UShort;

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	char (*isPrimeNumber);
	ULong numeral;
	UShort remainder;
	UShort i;
	ULong divisor;
	UShort flag;

	//1. MAX��ŭ �ݺ��ϴ�.
	for (i = 1; i <= MAX; i++) {
		//1.1 ���� �Է¹޴�.
		scanf("%lu", &numeral);
		//1.2 1�� �ڱ��ڽ� �� ����� ���� ���θ� �Ǵ��ϴ�.
		flag = 0;
		divisor = 2;
		while (divisor <= numeral / 2 && flag == 0) {
			remainder = numeral % divisor;
			if (remainder == 0) {
				flag = 1;
			}
			divisor++;
		}
		//1.3 ����� ���� ���ο� ���� �Ҽ����� �Ǵ��ϴ�.
		if (flag == 0) {
			isPrimeNumber = "�Ҽ�";
		}
		else {
			isPrimeNumber = "�ռ���";
		}
		//1.4 �Ǵ� ���θ� ����ϴ�.
		printf("%lu�� %s�Դϴ�.\n", numeral, isPrimeNumber);
	}
	//2. ������.
	return 0;
}