/*
* chapter05
*/

#include <stdio.h>



int main (void)
{
	
	// ** 1.  ������ �տ��� ���� ���Ŵ�.
	// ** 2.  �׷��� ���࿡ ������ �տ� ���� ���ٸ�...
	// ** 3.  - �������� ���� �޾ƿ´�.

	// ** 1. ������ �տ� ����.
	// ** 2. ���� Ž���Ѵ�.
	// ** 3. ���� ���� ���ٸ�... if(����)
	//      - �������� ���� �޾ƿ´�. {������ �´ٸ� �ൿ�ϰ� �� ��)
	//		
	// ** 4. �ξ� ���� �ִٸ�...
	//			
	//		- ���� �տ� ���.
	//		- �ſ� ���� ��� ���Ŵ�.


	// ** if ~ else ��
	{
	
		int Number;

		printf("�Է� : ");
		scanf_s("%d", &Number);

		if (Number == 1)
		{
			printf("ȫ�浿");
		}
		else if (Number == 2)
		{
			printf("�Ӳ���");
		}
		else if (Number == 3)
		{
			printf("�̸���");
		}
		else
		{
			printf("�߸��Է��߽��ϴ�.");
		}
		printf("\n\n");
	}


	// ** witch ~ case ��
	{

		int Number;

		printf("�Է� : ");
		scanf_s("%d", &Number);
		

		switch (Number)
		{
		case 1:
			printf("ȫ�浿");
			break;
		case 2:
			printf("�Ӳ���");
			break;
		case 3:
			printf("�̸���");
			break;

		default:
			printf("�߸� �Է� �Ͽ����ϴ�");
		}

		printf("\n\n");
		
	}


	








	/*
	int Answer;
	printf("���� ���÷� ������ ������ ���� \n");
	printf("���� �ִ� : 1\n");
	printf("���� ���� : 2\n");
	printf("������ �տ� ���� �ִ°�?");
	scanf_s("%d", &Answer);

	if (Answer == 2)
	{
		printf_s("������ �տ� ���� ������ ������ ���� ���� �޾ƿ���.\n");

		
	}
	else if (Answer == 1)
	{
		printf("���� �ִ�.\n");
	}

		printf("���� �տ� ���.\n");
		printf("�ſ� ���� ��� ���Ŵ�.\n");
	*/
	



	return 0;
}