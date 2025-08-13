//CommentScoresOfStudents.c
//
/********************************************************************************************************************************
* ���ϸ�Ī : CommentScoresOfStudents.c
* ��    �� : ����ؼ� ����� ����, ����, ���� 3���� ������ �ԷµǸ� ���� ����� ���ϰ�, 90�� �̻��̸� "EXCELLENT", 60�� �̸��̸�
			 "FAIL"�� �Է� �ڷ� �� ���� ��հ� �Բ� ����ϰ�, ���������� �� ���� ����� ���ؼ� ����Ѵ�.
* �Լ���Ī : main
* ��    �� : ����, ���� ����, ���� ����, ���� ����
* ��    �� : ����, ���� ����, ���� ����, ���� ����, ���, ��, ���� ���, ���� ���, ���� ���
* �ۼ����� : 2025/08/13
*********************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ����
int main(int argc, char* argv[]);

//UShort,ULong �ڷ��� ����
typedef unsigned short int UShort;
typedef unsigned long int ULong;

//�Լ� ���� 
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	char name[11];
	UShort koreanScore;
	UShort englishScore;
	UShort mathScore;
	float average;
	char(*comment);
	float averageOfKorean;
	float averageOfEnglish;
	float averageOfMath;
	UShort sum;
	ULong sumOfKorean = 0;
	ULong sumOfEnglish = 0;
	ULong sumOfMath = 0;
	UShort count = 0;

	//1. ������ ���� �ƴ� ���� �ݺ��Ѵ�.
	printf("����, ���� ����, ���� ����, ���� ���� ������ �Է��Ͻÿ�.\n");
	scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
	while (!feof(stdin)) {
		count++;
		//1.2 ���� ���ϴ�.
		sum = koreanScore + englishScore + mathScore;
		//1.3 ����� ���ϴ�.
		average = sum / (3.0F);
		//1.4 ���ϴ�.
		if (average >= 90.0F) {
			comment = "EXCELLENT";
		}
		else if(average < 60.0F) {
			comment = "FAIL";
		}
		else {
			comment = "";
		}
		//1.5 ����, ���� ����, ���� ����, ���� ����, ���, �򰡸� ����ϴ�.
		printf("%s ���� : %hu, ���� : %hu, ���� : %hu, ��� : %.2f, %s\n", name, koreanScore, englishScore, mathScore, average, comment);
		//1.6 ���� ���� ���� ���ϴ�.
		sumOfKorean += koreanScore;
		//1.7 ���� ���� ���� ���ϴ�.
		sumOfEnglish += englishScore;
		//1.8 ���� ���� ���� ���ϴ�.
		sumOfMath += mathScore;
		//1.1 ����, ���� ����, ���� ����, ���� ������ �Է� �޴�.
		printf("����, ���� ����, ���� ����, ���� ���� ������ �Է��Ͻÿ�.\n");
		scanf("%s %hu %hu %hu", name, &koreanScore, &englishScore, &mathScore);
	}
	//2. ���� ����� ���ϴ�.
	averageOfKorean = sumOfKorean / (count * 1.0F);
	//3. ���� ����� ���ϴ�.
	averageOfEnglish = sumOfEnglish / (count * 1.0F);
	//4. ���� ����� ���ϴ�.
	averageOfMath = sumOfMath / (count * 1.0F);
	//5. ���� ���, ���� ���, ���� ����� ����ϴ�.
	printf("���� ���� ��� : %.2f, ���� ���� ��� : %.2f, ���� ���� ��� : %.2f", averageOfKorean, averageOfEnglish, averageOfMath);
	//6. ������.
	return 0;
}