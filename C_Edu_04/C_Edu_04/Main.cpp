/*
* chapter 04
*/

#include <stdio.h>

int main(void)
{
	// ** 산술 연산자
	// +, -, *, /, %
	
	// ** 대입 연산자
	// =

	// ** 복합 대입 연산자
	// +=, -=, *=, /=, %=

	// ** 단항 연산자(증감 연산자)
	// * 전위 연산 : ++ or -- (항목) 
	// * 후위 연산 : (항목) ++ or -- 
	// ++, --
	{
		// ** 1씩 증가 하거나 1씩 감소한다.
		int i = 0;

		// ** 전위 연산 : 연산을 우선 순위로 한다.
		printf_s("%d\n", ++i);

		// ** 후위 연산 : 연산을 후순위로 한다.
		printf_s("%d\n", i--);
	}
	
	// ** 이항 연산자
	// ** (항목 A) + (항목 B)
	// ** (항목 A) + (항목 B) - (항목 C) 

	// ** 삼항 연산자 
	// (조건) ? true : false	

	{
		int i = 10;
		int n = (i > 10) ? i : 0;

		printf_s("n = %d", n);
		printf("\n");
	}

	// ** 관계 연산자(비교 연산자)
	// >, <, >=, <=
	//


	// ** 논리 연산자
	// ==, !=, !, && (그리고), || (또는) 
	// 같다 같지 않다
	{
		int A = 10, B = 11;
		// [A == B] : A 와 B는 같은가 ? false
		printf_s("조건 (A == B) ? 참:1/거짓:0 = %d \n", (A == B));
	    // [A != B] : A 와 B는 같지 않은가 ? true
		printf_s("조건 (A != B) ? 참:1/거짓:0 = %d \n", (A != B));
	}

	//  A = 0
	// ** [!(항목A)]
	{
		int A = 0;
		printf_s("A : %d\n", !A);
		printf("\n");
	}


	{
		// [&&]
		// ** 항목A와 항목B가 모두 true 일 때 true를 반환.
		int A = 0, B = 0;
		printf_s("&& 연산자\n");
		printf_s("A && B ? 참:1/거짓:0 = %d \n", A && B);
		printf("\n");
		
		int a, b, c, d;
		a = 10;
		b = 20;
		c = 30;
		d = 40;

		printf_s("(a > b) && (c > d) ? %d\n", (a > b) && (c > d));
		printf("\n");
	}


	{
		// ||
		// ** 항목A와 항목B중 1개만 true라도 true를 반환.
		int A = 0, B = 0;
		printf_s("|| 연산자\n");
		printf_s("A || B ? 참:1/거짓:0 = %d \n", A || B);
		printf("\n");

		int a, b, c, d;
		a = 10;
		b = 20;
		c = 30;
		d = 40;

		printf_s("(a > b) || (c > d) ? %d\n", (a > b) || (c < d));
		printf("\n");
	}


	// ** 비트 연산자
	// & [AND]
	// | [OR]
	// ^ [XOR]
	



	// ** 형변환
	{
		char c = 'A';
		int i = 100000000;
		short s = 32467;
		
		float f = 3.141592f;
		// 뒤에 f 를 붙이면 float , 뒤에 f를 안 붙이면 double
		{
			i = (int)f;
			printf_s("%d", i);
		}
	}
	 




	return 0;
}