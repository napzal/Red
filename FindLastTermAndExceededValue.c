//FindLastTermAndExceededValue.c
//
/*****************************************************************************************************************
���ϸ�Ī : FindLastTermAndExceededValue.c
��    �� : 1+3+5+...������ ���Ͽ� �󸶱��� ���ϸ� ���� 1000�� �ʰ��ϴ°� �� �� ������ �װ� �ʰ��� ���� ���Ѵ�.
�Լ���Ī : main
��    �� : ����
��    �� : �ʰ��� ��, ���� ��ġ, ��, �ʰ��� ��
�ۼ����� : 2025/07/23
******************************************************************************************************************/
//�ܺ� ���� ���� ���
#include <stdio.h>

//��ũ�� �����
#define MAX 1000
#define DIFFERENCE 2

//�Լ� ����
int main(int argc, char* argv[]);
//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ����
	unsigned int number = 1;
	unsigned int positionOfTerm = 1;
	unsigned int sum = 0;
	unsigned int exceededValue;

	//1. ���� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	sum += number;
	while (sum <= MAX) {
		//1.4 ���� ���� ����Ѵ�.
		printf("%d   %d\n", number, sum);
		//1.1 ���� ����.
		number += DIFFERENCE;
		//1.2 �� ��ġ�� ���Ѵ�.
		positionOfTerm++;
		//1.3 ���� ���Ѵ�.
		sum += number;
	}
	//2. �ʰ��� ���� ���Ѵ�.
	exceededValue = sum - MAX;
	//3. ���� ��ġ, ��, ��, �ʰ��� ���� ����Ѵ�.
	printf("%d��° ���� ���� %d, ���� %d, �ʰ��� ���� %d�Դϴ�.", positionOfTerm, number, sum, exceededValue);
	//4. ������.
	return 0;
}
		
