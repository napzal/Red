//FindYearsToDoubleThePrincipal.c
//
/**********************************************************************************************************
���ϸ�Ī : FindYearsToDoubleThePrincipal.c
��    �� : �������� 7%�� �� �� �� ���� ������ 2�谡 �Ǵ��� ���Ѵ�.(�� ���ڴ� ���������� ����Ѵ�.)
��    �� : main
��    �� : ����
��    �� : ������, ����, ����
�ۼ����� : 2025/07/25
***********************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//��ũ�� ���
#define ANNUALRATE 1.07

//��ȭ �ڷ��� ����
typedef double Currency;

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	unsigned short int years = 0;
	Currency principal = 10000000;
	Currency twice = principal * 2;

	//1. ������ twice���� ������ �ݺ��Ѵ�.
	while (principal < twice) {
		//1.3 ������ ������ ����Ѵ�.
		printf("���� : %d����, ���� : %.f��\n", years, principal);
		//1.1 ������ ����.
		years++;
		//1.2 ������ ���ϴ�.
		principal *= ANNUALRATE;
	}
	//2. ������, ����, ������ ����Ѵ�.
	printf("�������� %.f%%�� ��Ȳ���� ������ 2�谡 �Ǵ� ������ %d�����̰� ������ %.f�� �Դϴ�.", (ANNUALRATE-1)*100, years, principal);
	//3. ������.
	return 0;
}