//GradeAverageOfStudents.c
//
/*********************************************************************************************************************
���ϸ�Ī : GradeAverageOfStudents.c
��    �� : �л� 10�� ���� ����� �а� ������ ���Ͽ� ����Ѵ�.
�Լ���Ī : main
��    �� : �̸�, ���
��    �� : ��ȣ, �̸�, ���, ����
�ۼ����� : 2025/07/28
**********************************************************************************************************************/

//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//��ũ�� �����
#define MAX 10
#define HIGHEST 100.0F
#define GRADE_A 90.0F
#define GRADE_B 80.0F
#define GRADE_C 70.0F
#define GRADE_D 60.0F
#define LOWEST 0.0F

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	char name[11];
	float average;
	char grade;
	unsigned short int number;

	//1. ��ȣ�� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	for (number = 1; number <= MAX; number++) {
		//1.2 �̸��� ����� �Է¹޴´�.
		scanf("%s %f", name, &average);
		//1.3 ��տ� ���� ������ �ű��.
		if (average >= GRADE_A && average <= HIGHEST) {
			grade = 'A';
		}
		else if (average >= GRADE_B&&average<GRADE_A) {
			grade = 'B';
		}
		else if (average >= GRADE_C && average < GRADE_B) {
			grade = 'C';
		}
		else if (average >= GRADE_D && average < GRADE_C) {
			grade = 'D';
		}
		else if (average >= LOWEST && average < GRADE_D) {
			grade = 'F';
		}
		else {
			grade = 'X';
		}
		//1.4 ��ȣ, �̸�, ���, ������ ����Ѵ�.
		printf("%d. %s %.1f %c\n",number,name,average,grade);
		//1.1 ��ȣ�� ����.
	}
	//2. ������.
	return 0;
}