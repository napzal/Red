//FindTimeWhenOverTaking.c
//
/**************************************************************************************************************************************
* ���ϸ�Ī : FindTimeWhenOverTaking.c
* ��    �� : �� ���� ������ ������ ���� ��, �� ���� ������ ���� A�� � �ӵ�(m/s)�� ����� �� ��� �Ÿ���ŭ �޷��� �� �ٸ� ��
			 ���� ������ ���� B�� ����Ѵٸ� �� �� �Ŀ� B�� A�� �߿��ϴ��� ���Ѵ�. ����ؼ� A�ӵ�, B�ӵ� �׸��� A�� �� �Ÿ��� �Էµȴ�.
* �Լ���Ī : main
* ��    �� : A �ӵ�, B �ӵ�, A�� �� �Ÿ�
* ��    �� : ��, A�� �� �Ÿ�, B�� �� �Ÿ�
* �ۼ����� : 2025/08/09
***************************************************************************************************************************************/
//�Լ� ���� ���� ���� ��ũ��
#include<stdio.h>

//scanf �Լ� ����
#pragma warning(disable:4996)

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ� ������ ���� �� ���� 
	unsigned short int second;
	float distanceOfB;
	float distanceOfA;
	float speedOfA;
	float speedOfB;

	//1. ������ ���� �ƴѵ��� �ݺ��ϴ�.
	printf("A�ӵ�, B�ӵ�, A�� �� �Ÿ��� �Է��Ͻÿ�.\n");
	scanf("%f %f %f", &speedOfA, &speedOfB, &distanceOfA);
	while (!feof(stdin)) {
		//1.2 B�� A�� �߿��� ������ �ݺ��ϴ�.
		second = 0;
		distanceOfB = 0;
		while (distanceOfB <= distanceOfA) {
			//1.2.4 ��, A�� �� �Ÿ�, B�� �� �Ÿ��� ����ϴ�.
			printf("%d��, A�� �� �Ÿ� : %.1fm, B�� �� �Ÿ� : %.1fm\n", second, distanceOfA, distanceOfB);
			//1.2.1 �ʸ� ����.
			second++;
			//1.2.2 A�� �� �Ÿ��� ���ϴ�.
			distanceOfA += speedOfA;
			//1.2.3 B�� �� �Ÿ��� ���ϴ�.
			distanceOfB += speedOfB;
		}
		printf("%d��, A�� �� �Ÿ� : %.1fm, B�� �� �Ÿ� : %.1fm\n", second, distanceOfA, distanceOfB);
		//1.1 A�ӵ�, B�ӵ�, A�� ���Ÿ��� �Է¹޴�.
		printf("A�ӵ�, B�ӵ�, A�� �� �Ÿ��� �Է��Ͻÿ�.\n");
		scanf("%f %f %f", &speedOfA, &speedOfB, &distanceOfA);
	}
	//2. ������.
	return 0;
}