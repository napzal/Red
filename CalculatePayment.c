//CalculatePayment.c
//
/**************************************************************************************************************************
* ���ϸ�Ī : CalculatePayment.c
* ��    �� : ����ؼ� �����ȣ, ���� �ð�, �ð��� �ӱ��� �о ����� �޿��� ����Ѵ�. ���� �ð��� 40�ð��� �ʰ��� ���,
			 40�ð� �ʰ��п� ���ؼ��� �ӱ��� 1.5��� ����ϰ� �� ���޾��� 40������ �ʰ��� ��쿡�� �������� 3������ ����.
			 (�ñ� å���� 30�� ������ �Ѵ�.)
* �Լ���Ī : main
* ��    �� : ��� ��ȣ, ���� �ð�, �ð��� �ӱ�
* ��    �� : ��� ��ȣ, ���� �ð�, �ð��� �ӱ�, �ʰ� �ð�, �ʰ� �ӱ�, �޿�, ���� ����, ���޾�
* �ۼ����� : 2025/08/06
***************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//��ũ�� �����
#define BASIC_WORKING_HOURS 40.0F
#define TAX 30000L
#define CRITERIAOFTAX 400000L

//�Լ� ����
int main(int argc, char* argv[]);

//Currency �ڷ��� ����
typedef unsigned long int Currency;

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	float overTime;
	Currency excessWage;
	Currency salary;
	Currency payment;
	char isTaxed;
	char employeeNumber[8];
	float workingTime;
	Currency hourlyWage;

	//1. ������ ���� �ƴ� ���� �ݺ��ϴ�.
	printf("��� ��ȣ, ���� �ð�, �ð��� �ӱ� ������ ���ʷ� �Է��Ͻʽÿ�.\n");
	scanf("%s %f %lu", &employeeNumber, &workingTime, &hourlyWage);
	while (!feof(stdin)) {
		//1.2 40�ð� �ʰ� ���ο� ����
		if (workingTime > BASIC_WORKING_HOURS) {
			//1.2.1 �ʰ� �ð��� ���ϴ�.
			overTime = workingTime - BASIC_WORKING_HOURS;
			//1.2.2 �ʰ� �ӱ��� ���ϴ�.
			excessWage = overTime * hourlyWage * 1.5;
			//1.2.3 �޿��� ���ϴ�.
			salary = BASIC_WORKING_HOURS * hourlyWage + excessWage;
		}
		else {
			//1.2.1 �ʰ� �ð��� ���ϴ�.
			overTime = 0;
			//1.2.2 �ʰ� �ӱ��� ���ϴ�.
			excessWage = 0;
			//1.2.3 �޿��� ���ϴ�.
			salary = workingTime * hourlyWage;
		}
		//1.3 ���� ���ο� ���� ���޾��� ���ϴ�.
		if (salary > CRITERIAOFTAX) {
			isTaxed = 'O';
			payment = salary - TAX;
		}
		else {
			isTaxed = 'X';
			payment = salary;
		}
		//1.4 ��� ��ȣ, ���� �ð�, �ð��� �ӱ�, �ʰ��ð�, �ʰ� �ӱ�, �޿�, ���� ����, ���޾��� ����ϴ�.
		printf("��� ��ȣ, ���� �ð�, �ð��� �ӱ�, �ʰ� �ð�,	�ʰ� �ӱ�,	  �޿�, ���� ����,	���޾�\n");
		printf("%s	,  %.1f,	%lu��,	%.1f,	%lu��,	%lu��,	%c,	%lu��\n\n", 
			employeeNumber, workingTime, hourlyWage, overTime, excessWage, salary, isTaxed, payment);
		//1.1 ��� ��ȣ, ���� �ð�, �ð��� �ӱ��� �Է� �޴�.
		printf("��� ��ȣ, ���� �ð�, �ð��� �ӱ� ������ ���ʷ� �Է��Ͻʽÿ�.\n");
		scanf("%s %f %lu", &employeeNumber, &workingTime, &hourlyWage);
	}
	//2. ������.
	return 0;
}