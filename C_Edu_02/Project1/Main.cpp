#include <stdio.h>
#include <stdlib.h>
/*
* chapter 02
*/


// **�Լ�
// ����� ����, ��ȯ��
// void(��) �̸�(�̸�)
void Output() 
{
	printf_s("hello world\n");

}

int main(void) 
{
	// rvalue�� ���ͷ� ����̴�
	// ��� ����� rvalue�̴�
	Output();


	// 'A' = ����
	// 'AB' = X
	// "A" = ���ڿ�
	// "AB" = O
	// "Hello"

	// ** ���Ĺ���
	// %d = ����ǥ��
	// %f = �Ǽ� ǥ��
	// %c = ���� ǥ��
	// %s = ���ڿ� ǥ��
	// %% = % ǥ��

	printf("���� ��� : %d \n", 10);
	//�Ǽ� ����� �� ���� �� �������� f �� ���������. f ������ �ϳ��� ���ڴ�.
	printf("�Ǽ� ��� : %f \n", 3.141592f);
	printf("���� ��� : %c \n", 'A');
	printf("���� ��� : %c%c%c%c%c \n", 'H', 'e', 'l', 'l', 'o');
	printf("���ڿ� ��� : %s \n", "Hello");
	printf("%d%% �Դϴ�.\n", 100);

	printf("\n");

	// \n = �� �ٲ� ǥ��
	// \\ = \ ǥ�ø� ��� ��
	// \b = backspace(����)
	// \t = (tab)�� ǥ��

	printf("goot\bd\tchance\n");
	printf("10,000\\\n");
	printf("%d�� %d�� ���� %d�Դϴ�.\n", 10, 20, 10 + 20);

	// ** ���� ǥ��

	printf("10������ 10 : %d\n", 10);
	printf("8������ 10 : %d\n", 010);
	printf("16������ 10 : %d\n", 0x10);

	// ** �ƽ�Ű �ڵ�ǥ

	printf("65 ���� ��� : %c\n", 65);
	printf("A ���� ��� : %d\n", 'A');
	//printf("16������ 10 : %d\n", 0x10);


	return 0;
}