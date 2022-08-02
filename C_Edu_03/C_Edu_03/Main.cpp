/*
* chapter 03
*/

// 1 bit = 0 or 1 = 2��
// 2 bit = 00, 01, 10, 11 =4��
// 3 bit = 000, 001, 010, 011, 100, 101, 110, 111 = 8��
/*
*  4 bit = 16��
*  0000, 0001, 0010, 0100, 0101, 0110, 0111
*  1000, 1001, 1010, 1011, 1101, 1110, 1111
*/
// 8 bit = 256�� = 1 byte

// 0 0 0 0 0 0 0 0
// => ���� �տ� �ִ� �� : 0 -> ��� , 1 -> ����

#include <stdio.h>

int main(void)
{
	//signed
	// ** sizeof() = �������� ũ�⸦ ������ ��ȯ
	printf("char : %d\n", sizeof(char));
	printf("short : %d\n", sizeof(short));
	printf("int : %d\n", sizeof(int));
	printf("long : %d\n", sizeof(long));
	printf("__int64 : %d\n", sizeof(__int64));
	printf("\n");

	//unsigned
	// ** sizeof() = �������� ũ�⸦ ������ ��ȯ
	printf("char : %d\n", sizeof(unsigned char));
	printf("short : %d\n", sizeof(unsigned short));
	printf("int : %d\n", sizeof(unsigned int));
	printf("long : %d\n", sizeof(unsigned long));
	printf("__int64 : %d\n", sizeof(unsigned __int64));
	printf("\n");


		// ** ���� ����
	char c;  // (�ڷ���) (���� �̸� : c)

	// ** ���� �ʱ�ȭ.
	c = 127; // (���� �̸� : c) (���� ������ : =) (�� : 127)

	// ** ���� ���� �� �ʱ�ȭ.
	short s = 32767;
	int i = 2147483647;
	long n = 2147483647;

	// ** �ʱ�ȭ �� ������ ���� ���
	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");

	c = c + 1;
	s = s + 1;
	i = i + 1;
	n = n + 1;

	printf("char : %d\n", c);
	printf("short : %d\n", s);
	printf("int : %d\n", i);
	printf("long : %d\n", n);
	printf("\n");


	/* unsigned ������ ������ Ÿ������ ���� ��
	*  �� ������ �Ȱ��� ������ �ʱ�ȭ
	*/
	unsigned char uc = 127;
	unsigned short us = 32767;
	unsigned int ui = 2147483647;
	unsigned long un = 2147483647;

	uc = uc + 1;
	us = us + 1;
	ui = ui + 1;
	un = un + 1;

	printf("unsigned char : %d\n", uc);
	printf("unsigned short : %d\n", us);
	printf("unsigned int : %u\n", ui);
	printf("unsigned long : %u\n", un);
	printf("\n");

	// ** �Ǽ��� ������ Ÿ�� ũ�� Ȯ��
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("long double : %d\n", sizeof(long double));
	printf("\n");


	return 0;
}