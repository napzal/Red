//FindAverages.c
//
/****************************************************************************************************************
* ���ϸ�Ī : FindAverages.c
* ��    �� : 60�� �л��� ����� 3���� ������ �Էµ� ��, ������ ��հ� �� ����� ���ϴ�.
* �Լ���Ī : main
* ��    �� : ����, ���� ����, ���� ����, ���� ����
* ��    �� : ���� ���, �� ���
* �ۼ����� : 2025/08/02
*****************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable : 4996)

//��ũ�� �����
#define STUDENTS 60
#define SUBJECTS 3.0F

//UShort �ڷ��� ����
typedef unsigned short int UShort;

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	float average;
	float classAverage;
	char name[11];
	UShort koreanScore;
	UShort englishScore;
	UShort mathScore;
	UShort sum;
	unsigned long int total = 0;
	UShort i;

	//1. �л�����ŭ �ݺ��ϴ�.
	for (i = 1; i <= STUDENTS; i++) {
		//1.1 ����, ��������, ��������, ���������� �Է¹޴�.
		printf("����, ���� ����, ���� ����, ���� ������ ���ʷ� �Է��Ͻÿ�.\n");
		scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
		//1.2 ���� ���ϴ�.
		sum = koreanScore + englishScore + mathScore;
		//1.3 ���� ����� ���ϴ�.
		average = sum / SUBJECTS;
		//1.4 ���� ����� ����ϴ�.
		printf("%s�� ��� : %.1f\n", name, average);
		//1.5 ������ ���ϴ�.
		total += sum;
	}
	//2. �� ����� ���ϴ�.
	classAverage = total / (SUBJECTS * STUDENTS);
	//3. �� ����� ����ϴ�.
	printf("�� ��� : %.2f", classAverage);
	//4. ������.
	return 0;
}