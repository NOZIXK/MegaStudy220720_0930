/*
* chapter 03
*/

// 1 bit = 0 or 1 = 2개
// 2 bit = 00, 01, 10, 11 =4개
// 3 bit = 000, 001, 010, 011, 100, 101, 110, 111 = 8개
/*
*  4 bit = 16개
*  0000, 0001, 0010, 0100, 0101, 0110, 0111
*  1000, 1001, 1010, 1011, 1101, 1110, 1111
*/
// 8 bit = 256개 = 1 byte

// 0 0 0 0 0 0 0 0
// => 제일 앞에 있는 수 : 0 -> 양수 , 1 -> 음수

#include <stdio.h>

int main(void)
{
	//signed
	// ** sizeof() = 데이터의 크기를 정수로 반환
	printf("char : %d\n", sizeof(char));
	printf("short : %d\n", sizeof(short));
	printf("int : %d\n", sizeof(int));
	printf("long : %d\n", sizeof(long));
	printf("__int64 : %d\n", sizeof(__int64));
	printf("\n");

	//unsigned
	// ** sizeof() = 데이터의 크기를 정수로 반환
	printf("char : %d\n", sizeof(unsigned char));
	printf("short : %d\n", sizeof(unsigned short));
	printf("int : %d\n", sizeof(unsigned int));
	printf("long : %d\n", sizeof(unsigned long));
	printf("__int64 : %d\n", sizeof(unsigned __int64));
	printf("\n");


		// ** 변수 선언
	char c;  // (자료형) (변수 이름 : c)

	// ** 변수 초기화.
	c = 127; // (변수 이름 : c) (대입 연산자 : =) (값 : 127)

	// ** 변수 선언 및 초기화.
	short s = 32767;
	int i = 2147483647;
	long n = 2147483647;

	// ** 초기화 된 변수의 값을 출력
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


	/* unsigned 형태의 데이터 타입으로 생성 후
	*  위 예제와 똑같은 값으로 초기화
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

	// ** 실수형 데이터 타입 크기 확인
	printf("float : %d\n", sizeof(float));
	printf("double : %d\n", sizeof(double));
	printf("long double : %d\n", sizeof(long double));
	printf("\n");


	return 0;
}