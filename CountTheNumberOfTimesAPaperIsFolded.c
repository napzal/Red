//CountTheNumberOfTimesAPaperIsFolded.c
//
/*****************************************************************************************************************************
* ���ϸ�Ī : CountTheNumberOfTimesAPaperIsFolded.c
* ��    �� : ����ؼ� ������ �β��� �Էµ� ��, �β��� �󸶳� �Ǵ��� ���̸� ���� �� �ִٰ� �����ϰ� �� ���� ����� 1YARD �̻���
			 �Ǵ��� ���Ѵ�. (�ԷµǴ� ������ �β��� ������ inch�̰� 1YARD�� 32inch�̴�.)
* �Լ���Ī : main
* ��    �� : ������ �β�
* ��    �� : ������ �β�, ���� Ƚ��
* �ۼ����� : 2025/08/17
******************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable :4996)

//��ũ�� ���
#define AYARD 32.0F

//�Լ� ����
int main(int argc, char* argv[]);

//UShort �ڷ��� ����
typedef unsigned short int UShort;

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	UShort count = 0;
	float thickness;

	//������ ���� �ƴ� ���� �ݺ��ϴ�.
	printf("������ �β��� �Է��Ͻÿ�.\n");
	scanf("%f", &thickness);
	while (!feof(stdin)) {
		//1.2 ������ �β��� 1YARD���� ������ �ݺ��ϴ�.
		while (thickness < AYARD) {
			//1.2.3 ������ �β��� ���� Ƚ���� ����ϴ�.
			printf("������ �β� : %.1f, ���� Ƚ�� : %hu\n", thickness, count);
			//1.2.1 ���� Ƚ���� ����.
			count++;
			//1.2.2 ������ �β��� ���ϴ�.
			thickness *= 2;
		}
		printf("������ �β� : %.1f, ���� Ƚ�� : %hu\n", thickness, count);
		count = 0;
		//1.1 ������ �β��� �Է¹޴�.
		printf("������ �β��� �Է��Ͻÿ�.\n");
		scanf("%f", &thickness);
	}
	//2. ������.
	return 0;
}