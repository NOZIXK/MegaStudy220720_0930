/*
* Chapter 01 
*/

#include <stdio.h> //stdio.h : std -> 스탠다드 , i -> 인풋 , o -> 아웃풋 , h -> 확장자가 헤더
// ** 앞쪽에 #이 붙어있다면 전처리기, 전처리 지시문, 전처리기 지시문 등 으로 표현

#include <stdlib.h> //stdio.h : std -> 스탠다드 , lib -> 라이브러리

// ** 보안을 위한 경고 메시지를 띄우지 말라고 지시함.
#define _CRT_SECURE_NO_WARNINGS

// ** main 함수는 매우 특별한 함수 입니다.
// ** 컴파일러가 프로그램을 실행 시킬 때 main 함수를 찾기 때문에 매우 중요하다.
int main(void) {



	// ** 출력 함수
	printf("be happy!");

	// ** 콘솔 출력 화면을 일시 정지 시켜준다.
	system("pause");

	return 0;
}