#include <stdio.h>
#include <stdlib.h>
/*
* chapter 02
*/


// **함수
// 출력의 형태, 반환값
// void(성) 이름(이름)
void Output() 
{
	printf_s("hello world\n");

}

int main(void) 
{
	// rvalue는 리터럴 상수이다
	// 모든 상수는 rvalue이다
	Output();


	// 'A' = 문자
	// 'AB' = X
	// "A" = 문자열
	// "AB" = O
	// "Hello"

	// ** 서식문자
	// %d = 정수표현
	// %f = 실수 표현
	// %c = 문자 표현
	// %s = 문자열 표현
	// %% = % 표현

	printf("정수 출력 : %d \n", 10);
	//실수 출력을 할 때는 꼭 마지막에 f 를 적어줘야함. f 까지가 하나의 숫자다.
	printf("실수 출력 : %f \n", 3.141592f);
	printf("문자 출력 : %c \n", 'A');
	printf("문자 출력 : %c%c%c%c%c \n", 'H', 'e', 'l', 'l', 'o');
	printf("문자열 출력 : %s \n", "Hello");
	printf("%d%% 입니다.\n", 100);

	printf("\n");

	// \n = 줄 바꿈 표시
	// \\ = \ 표시를 출력 함
	// \b = backspace(삭제)
	// \t = (tab)탭 표현

	printf("goot\bd\tchance\n");
	printf("10,000\\\n");
	printf("%d와 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);

	// ** 진수 표현

	printf("10진수의 10 : %d\n", 10);
	printf("8진수의 10 : %d\n", 010);
	printf("16진수의 10 : %d\n", 0x10);

	// ** 아스키 코드표

	printf("65 문자 출력 : %c\n", 65);
	printf("A 정수 출력 : %d\n", 'A');
	//printf("16진수의 10 : %d\n", 0x10);


	return 0;
}