//GetPincipalAndInterest.c
//
/******************************************************************************************************************************
* ���ϸ�Ī : GetPincipalAndInterest.c
* ��    �� : ����ؼ� ����, ������, ������ �Էµ� �� ������ ����Ͽ� �ظ��� �����հ踦 ���ϴ�.
* �Լ���Ī : main
* ��    �� : ����, ������, ����
* ��    �� : �޼�, ����, ������
* �ۼ����� : 2025/08/07
*******************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ����
int main(int argc, char* argv[]);

//UShort, Currency �ڷ��� ����
typedef unsigned short int UShort;
typedef double Currency;

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	UShort annualNumber;
	Currency interest;
	Currency principalAndInterest;
	Currency principal;
	float annualRate;
	UShort years;

	//1. ������ ���� �ƴ� ���� �ݺ��ϴ�.
	printf("����, ������(%%), ���� ������ �Է��Ͻÿ�.\n");
	scanf("%lf %f %hu", &principal, &annualRate, &years);
	while (!feof(stdin)) {
		//1.2 ������ŭ �ݺ��ϴ�.
		interest = 0;
		principalAndInterest = principal;
		annualNumber = 0;
		while (annualNumber < years) {
			//1.2.4 �޼�, ����, �������� ����ϴ�.
			printf("%hu���� ���� : %.lf��, ������ : %.lf��\n", annualNumber, interest, principalAndInterest);
			//1.2.2 ���ڸ� ���ϴ�.
			interest = principalAndInterest * (annualRate / 100);
			//1.2.3 �������� ���ϴ�.
			principalAndInterest += interest;
			//1.2.1 �޼��� ����.
			annualNumber++;
		}
		printf("%hu���� ���� : %.lf��, ������ : %.lf��\n", annualNumber, interest, principalAndInterest);
		//1.1 ����, ������, ������ �Է¹޴�.
		printf("����, ������(%%), ���� ������ �Է��Ͻÿ�.\n");
		scanf("%lf %f %hu", &principal, &annualRate, &years);
	}
	//2. ������.
	return 0;
}