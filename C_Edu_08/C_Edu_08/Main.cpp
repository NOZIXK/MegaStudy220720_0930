/*
* chapter 08
*/


#include <stdio.h>

int main(void)
{

	// ** ������ ���� �����Ͽ� ���
	int Number1 = 1;
	int Number2 = 2;
	int Number3 = 3;
	int Number4 = 4;
	int Number5 = 5;


	printf("%d\n", Number1);
	printf("%d\n", Number2);
	printf("%d\n", Number3);
	printf("%d\n", Number4);
	printf("%d\n", Number5);

	printf("\n\n");

	// ** ���� : ������ �������� ���� �ۼ��Ͽ��� �Ѵ�. ���ŷο�.
	
	// ==============================

	// ** �ϳ��� �迭�� �����Ͽ� ���
	int Number[5] = {1, 2, 3, 4, 5};

	printf("%d\n", Number[0]);
	printf("%d\n", Number[1]);
	printf("%d\n", Number[2]);
	printf("%d\n", Number[3]);
	printf("%d\n", Number[4]);
	
	printf("\n\n");

	// ** ����1 : �迭�� ���������ν�, �ʱ�ȭ ������ ������ �پ���.

	// ==��==��==��==��==��==��==��==��==��==��==��==��==��==��==
	//                       ��       ��
	// ==��==��==��==��==��==��==��==��==��==��==��==��==��==��==
	
	// �迭�� ����Ͽ� ����� ������ �Ʒ��� ���� �ݺ����� ���� �迭�� Ȱ���� �� �ִ�.
	for (int i = 0; i < 5; ++i)
	{
		printf("Number[0] : %d\n", Number[i]);
	}
	printf("\n");

	// ** ����2 : ���� ���� ��������ν�. ����� ������ ������ �پ���.

	// ==================================================

	



	return 0;
}