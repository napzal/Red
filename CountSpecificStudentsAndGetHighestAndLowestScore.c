//CountSpecificStudentsAndGetHighestAndLowestScore.c
//
/*******************************************************************************************************************************
* ���ϸ�Ī : CountSpecificStudentsAndGetHighestAndLowestScore.c
* ��    �� : 50���� �л��� ������ �Էµ� ��, 40�� �̻� 60�� ������ �л� ���� ����, �ְ����� �������� ���ϴ�.(������ �����̴�.)
* �Լ���Ī : main
* ��    �� : ����
* ��    �� : �л� ��, �ְ���, ������
* �ۼ����� : 2025/08/03
********************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable : 4996)

//��ũ�� ���
#define STUDENTS 50

//UShort �ڷ��� ����
typedef unsigned short int UShort;

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	UShort count=0;
	UShort highestScore=0;
	UShort lowestScore=0;
	UShort score;
	UShort i;

	//1. �л� ����ŭ �ݺ��ϴ�.
	for (i = 1; i <= STUDENTS; i++) {
		//1.1 ������ �Է¹޴�.
		scanf("%hu", &score);
		//1.2 40�� �̻� 60�� ���϶�� �л� ���� ����.
		if (score >= 40 && score <= 60) {
			count++;
		}
		//1.3 �ְ����̶�� �ְ����� ���ϴ�.
		if (i == 1 || score > highestScore) {
			highestScore = score;
		}
		//1.4 �������̶�� �������� ���ϴ�.
		if (i == 1 || score < lowestScore) {
			lowestScore = score;
		}
	}
	//2. �л� ��, �ְ���, �������� ����ϴ�.
	printf("40�� �̻� 60�� ���� �л� ���� %hu���̰�, �ְ����� %hu, �������� %hu�Դϴ�.", count, highestScore, lowestScore);
	//3. ������.
	return 0;
}