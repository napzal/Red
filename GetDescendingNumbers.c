//GetDescendingNumbers.c
//
/*******************************************************************************************************************************
* ���ϸ�Ī : GetDescendingNumbers.c
* ��    �� : ����ؼ� �� ���� �о� �Էµ� ������ ũ���� ������������ ����Ѵ�.
* �Լ���Ī : main
* ��    �� : ù ��° ��, �� ��° ��, �� ��° ��
* ��    �� : ���� ū ��, �߰� ��, ���� ���� ��
* �ۼ����� : 2025/08/12
********************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include <stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	float largestNumber;
	float middleNumber;
	float smallestNumber;
	float firstNumber;
	float secondNumber;
	float thirdNumber;

	//1. ������ ���� �ƴ� ���� �ݺ��ϴ�.
	printf("�� ���� �Է��Ͻÿ�.\n");
	scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	while (!feof(stdin)) {
		//1.2 �� ���� ���Կ� ����
		if (firstNumber > secondNumber) {
			//1.2.1 ���� ū ���� ���ϴ�.
			largestNumber = firstNumber;
			//1.2.2 ���� �� ���� ���Կ� ����
			if (secondNumber > thirdNumber) {
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = secondNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = thirdNumber;
			}
			else {
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = thirdNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = secondNumber;
			}
		}
		else {
			//1.2.1 ���� ū ���� ���ϴ�.
			largestNumber = secondNumber;
			//1.2.2 ���� �� ���� ���Կ� ����
			if(firstNumber>thirdNumber){
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = firstNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = thirdNumber;
			}
			else {
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = thirdNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = firstNumber;
			}
		}
		//1.2 �� ���� ���Կ� ����
		if (thirdNumber > largestNumber) {
			//1.2.1 ���� ū ���� ���ϴ�.
			largestNumber = thirdNumber;
			//1.2.2 ���� �� ���� ���Կ� ����
			if (firstNumber > secondNumber) {
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = firstNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = secondNumber;
			}
			else {
				//1.2.2.1 �߰� ���� ���ϴ�.
				middleNumber = secondNumber;
				//1.2.2.2 ���� ���� ���� ���ϴ�.
				smallestNumber = firstNumber;
			}
		}
		//1.3 ���� ū ��, �߰� ��, ���� ���� ���� ����ϴ�.
		printf("%.1f %.1f %.1f\n", largestNumber, middleNumber, smallestNumber);
		//1.1 ù ��° ��, �� ��° ��, �� ��° ���� �Է��ϴ�.
		printf("�� ���� �Է��Ͻÿ�.\n");
		scanf("%f %f %f", &firstNumber, &secondNumber, &thirdNumber);
	}
	//2. ������.
	return 0;
}
