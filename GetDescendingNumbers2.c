//GetDescendingNumbers2.c
//
/******************************************************************************************************************************
* ���ϸ�Ī : GetDescendingNumbers2.c
* ��    �� : ����ؼ� �� ���� �о� �Էµ� ������ ũ���� ������������ ����Ѵ�.
* �Լ���Ī : main
* ��    �� : ù ��° ��, �� ��° ��, �� ��° ��
* ��    �� : ù ��° ��, �� ��° ��, �� ��° ��
* �ۼ����� : 2025/08/12
*******************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	float firstNumber;
	float secondNumber;
	float thirdNumber;
	float temp;

	//1. ������ ���� �ƴ� ���� �ݺ��ϴ�.
	printf("�� ���� �Է��Ͻÿ�.\n");
	scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	while (!feof(stdin)){
		//1.2 ù ��° ���� �� ��° ���� ���Կ� ���� ���� ��ȯ�ϴ�.
		if (firstNumber < secondNumber) {
			temp = firstNumber;
			firstNumber = secondNumber;
			secondNumber = temp;
		}
		//1.3 ù ��° ���� �� ��° ���� ���Կ� ���� ���� ��ȯ�ϴ�.
		if (firstNumber < thirdNumber) {
			temp = firstNumber;
			firstNumber = thirdNumber;
			thirdNumber = temp;
		}
		//1.4 �� ��° ���� �� ��° ���� ���Կ� ���� ���� ��ȯ�ϴ�.
		if (secondNumber < thirdNumber) {
			temp = secondNumber;
			secondNumber = thirdNumber;
			thirdNumber = temp;
		}
		//1.5 ù ��° ��, �� ��° ��, �� ��° ���� ����ϴ�.
		printf("%.1f %.1f %.1f\n", firstNumber, secondNumber, thirdNumber);
		//1.1 ù ��° ��, �� ��° ��, �� ��° ���� �Է¹޴�.
		printf("�� ���� �Է��Ͻÿ�.\n");
		scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	}
	//2. ������.
	return 0;
}