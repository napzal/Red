//GetHighestNumeral.c
//
/***************************************************************************************************************************
* ���ϸ�Ī : GetHighestNumeral.c
* ��    �� : ����ؼ� �� ���� ���� �Էµ� �� ���� ū ���� ���ϴ�.
* �Լ���Ī : main
* ��    �� : ù ��° ��, �� ��° ��, �� ��° ��
* ��    �� : ���� ū ��
* �ۼ����� : 2025/08/05
****************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ���� 
int main(int argc, char* argv[]);

//SLong �ڷ��� ����
typedef signed long int SLong;

//�Լ� ���� 
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	SLong higestNumeral;
	SLong firstNumeral;
	SLong secondNumeral;
	SLong thirdNumeral;

	//1. ������ ���� �ƴѵ��� �ݺ��ϴ�.
	scanf("%ld %ld %ld", &firstNumeral, &secondNumeral, &thirdNumeral);
	while (!feof(stdin)) {
		//1.2 ������ ���Ͽ� ���� ū ���� ���ϴ�.
		if (firstNumeral > secondNumeral) {
			higestNumeral = firstNumeral;
		}
		else {
			higestNumeral = secondNumeral;
		}
		if (thirdNumeral > higestNumeral) {
			higestNumeral = thirdNumeral;
		}
		//1.3 ���� ū ���� ����ϴ�.
		printf("���� ū ���� %ld�Դϴ�.\n", higestNumeral);
		//1.1 ù ��° ��, �� ��° ��, �� ��° ���� �Է¹޴�.
		scanf("%ld %ld %ld", &firstNumeral, &secondNumeral, &thirdNumeral);
	}
	//2. ������.
	return 0;
}