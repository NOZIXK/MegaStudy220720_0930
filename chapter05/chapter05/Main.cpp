/*
* chapter05
*/

#include <stdio.h>



int main (void)
{
	
	// ** 1.  정수기 앞에서 물을 마신다.
	// ** 2.  그런데 만약에 정수기 앞에 컵이 없다면...
	// ** 3.  - 인포에서 컵을 받아온다.

	// ** 1. 정수기 앞에 선다.
	// ** 2. 컵을 탐색한다.
	// ** 3. 만약 컵이 없다면... if(조건)
	//      - 인포에서 컵을 받아온다. {조건이 맞다면 행동하게 될 것)
	//		
	// ** 4. 민약 컵이 있다면...
	//			
	//		- 컵을 손에 쥔다.
	//		- 컵에 물을 담아 마신다.

	{
	
		char* Name;
		int Number;

		printf("입력 : ");
		scanf_s("%d", &Number);

		if (Number == 1)
		{
			Name = (char*)"홍길동";
		}
		else if (Number == 2)
		{
			Name = (char*)"임꺽정";
		}
		else
		{
			Name = (char*)"이몽룡";
		}

		printf("결과 값 : %s", Name);
		printf("\n");
	}



	/*
	char Answer;
	printf("물을 마시러 정수기 앞으로 간다 \n");
	printf("컵이 있다 : 예\n");
	printf("컵이 없다 : 아니오\n");
	printf("정수기 앞에 컵이 있는가?");
	scanf_s("%d", &Answer);

	if (Answer == "아니요")
	{
		printf_s("정수기 앞에 컵이 없으니 인포에 가서 컵을 받아오자.\n");

		
	}
	else if (Answer == "예")
	{
		printf("컵이 있다.\n");
	}

		printf("컵을 손에 쥔다.\n");
		printf("컵에 물을 담아 마신다.\n");
	*/
	



	return 0;
}