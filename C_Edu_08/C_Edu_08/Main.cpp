/*
* chapter 08
*/


#include <stdio.h>

int main(void)
{

	// ** 변수를 각각 선언하여 출력
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

	// ** 단점 : 각각의 변수명을 직접 작성하여야 한다. 번거로움.
	
	// ==============================

	// ** 하나의 배열을 선언하여 출력
	int Number[5] = {1, 2, 3, 4, 5};

	printf("%d\n", Number[0]);
	printf("%d\n", Number[1]);
	printf("%d\n", Number[2]);
	printf("%d\n", Number[3]);
	printf("%d\n", Number[4]);
	
	printf("\n\n");

	// ** 장점1 : 배열로 선언함으로써, 초기화 구문이 현저히 줄었다.

	// ==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==
	//                       응       용
	// ==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==▼==
	
	// 배열을 사용하여 출력할 떄에는 아래와 같이 반복문을 통해 배열을 활용할 수 있다.
	for (int i = 0; i < 5; ++i)
	{
		printf("Number[0] : %d\n", Number[i]);
	}
	printf("\n");

	// ** 장점2 : 위와 같이 출력함으로써. 출력의 구문도 현저히 줄었다.

	// ==================================================

	



	return 0;
}