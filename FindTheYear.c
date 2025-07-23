//FindTheYear.c
//
/***************************************************************************************************************
���ϸ�Ī : FindTheYear.c
��    �� : 1996�� H���� �α��� 250����, �� �������� 3.6% �̰�, K���� �α��� 180�� ���̸� ���������� 4.2%�� ��,
		   K���� �α��� H���� �α����� �������� �Ǵ� ������ ���Ѵ�.
�Լ���Ī : main
��    �� : ����
��    �� : ����, H�� �α�, K�� �α�
�ۼ����� : 2025�� 7�� 24��
****************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//��ũ�� �����
#define ANNUALGROWTHRATEOFHCITY 1.036F
#define ANNUALGROWTHRATEOFKCITY 1.042F

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	unsigned short int year=1996;
	unsigned long int populationOfHCity=2500000;
	unsigned long int populationOfKCity = 1800000;

	//1. K���� �α��� H���� �α����� ���ų� �������� �ݺ��Ѵ�.
	while (populationOfKCity <= populationOfHCity) {
		//1.4 ����, H�� �α�, K�� �α��� ����Ѵ�.
		printf("%d�� H�� �α� : %d��, K�� �α� : %d��\n", year, populationOfHCity, populationOfKCity);
		//1.1 ������ ����.
		year++;
		//1.2 H���� �α��� ���ϴ�.
		populationOfHCity *= ANNUALGROWTHRATEOFHCITY;
		//1.3 K���� �α��� ���Ѵ�.
		populationOfKCity *= ANNUALGROWTHRATEOFKCITY;
	}
	//2.����, H�� �α�, K�� �α��� ����Ѵ�.
	printf("%d�� H�� �α� : %d��, K�� �α� : %d��", year, populationOfHCity, populationOfKCity);
	//3. ������.
	return 0;
}