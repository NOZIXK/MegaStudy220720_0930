/*
* C* chapter 02
*/

#include <stdio.h>

#include <stdlib.h>

#include <Windows.h>

struct Vector2
{
	int x, y;
};




// ** true/false 둘 중에 하나만 반환
bool Horzontal = false;
bool Vertical = false; 



void InputKey(Vector2* _Position, char* Tex);
void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);



int main(void)
{
	// ** 커서를 안보이게 설정
	ShowCursor(false);
	ULONGLONG Time = GetTickCount64();

	// ** 플레이어 좌표
	Vector2 PlayerPosition;
	PlayerPosition.x = 0;
	PlayerPosition.y = 0;

	// ** 플레이어 Texture
	char* Tex = (char*)"△";





	while (true)
	{
		// ** 0.05초 간격
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			// ** 화면 클리어
			system("cls");

			/*
			Vertical = false;
			Horzontal = false;
			*/

			
			// ** 키 입력

			// GetAsyncKeyState() = 키입력 함수
			// 
			// 상황에 따라서 다음을 반환함.
			// 0x0000, 0x0001, 0x8000, 0x8001
			// 
			//  ** 뒤쪽 1 과 0 의 차이
			//  0 : 이전에 눌린적 없음
			//  1 : 이전에 눌린적 있음
			// 
			//  ** 앞쪽 0과 8의 차이
			//  0 : 현재 눌리지 않음 
			//  8 : 현재 눌림

			// printf("%x\n", GetAsyncKeyState(VK_UP & 0x8001));
			if (GetAsyncKeyState(VK_UP) && !Vertical)
			{
				// ** y좌표가 0보다 클 때에만 입력을 받는다.
				if (PlayerPosition.y > 0)
					PlayerPosition.y--;
				/*
				if (y <= 0)
					y = 0;
				*/

				Tex = (char*)"△";
				Vertical = true;
			}
			else
			{
				Vertical = false;
			}
			if (GetAsyncKeyState(VK_DOWN) && !Vertical)
			{
				// ** y좌표가 39보다 작을 때에만 입력을 받는다.
				if (PlayerPosition.y < 39)
					PlayerPosition.y++;
				Tex = (char*)"▽";
				Vertical = true;
			}
			else
			{
				Vertical = false;
			}
			if (GetAsyncKeyState(VK_LEFT) && !Horzontal)
			{ 
				// ** x좌표가 0보다 클 때에만 입력을 받는다.
				if (PlayerPosition.x>0)
					PlayerPosition.x--;
				Tex = (char*)"◁";
				Horzontal = true;
			}
			else
			{
				Horzontal = false;
			}
			if (GetAsyncKeyState(VK_RIGHT) && !Horzontal)
			{
				// ** y좌표가 118보다 작을 때에만 입력을 받는다.
				if (PlayerPosition.x < 118)
					PlayerPosition.x++;
				Tex = (char*)"▷";
				Horzontal = true;
			}
			else
			{
				Horzontal = false;
			}
			/*
			// ** 매개변수로 Virtual Key 를 입력 받는다.
			if (GetAsyncKeyState(VK_UP))
				printf("UP\n");
			if (GetAsyncKeyState(VK_DOWN))
				printf("Down\n");
			if (GetAsyncKeyState(VK_LEFT))
				printf("LEFT\n");
			if (GetAsyncKeyState(VK_RIGHT))
				printf("RIGHT\n");
			*/
			SetCursorPosition(PlayerPosition.x, PlayerPosition.y);
			printf("%s", Tex);
		}






	}




	return 0;
}




// ** 커서의 위치를 이동시킨다.
void SetCursorPosition(int _x, int _y)
{

	// ** 좌표를 설정.
	COORD pos = { _x, _y };

	// ** 설정한 좌표로 이동시키는 함수
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = 현재 콘솔의 핸들
	// ** HANDLE : 윈도우 창의 기본 설정값을 셋팅할 수 있음.
}


// ** 커서
void ShowCursor(bool _b)
{
	// ** 커서의 기본정보를 생성한다.
	CONSOLE_CURSOR_INFO Info;

	// ** 커서의 기본정보를 셋팅한다.
	// ** 커서를 보이게/안 보이게 한다.
	Info.bVisible = _b;

	// ** 커서의 크기를 설정한다.
	Info.dwSize = 1;

	// ** 커ㅓ서의 설정을 적용시키는 함수
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);


}

// ** 플레이어의 키 입력을 받고, 입력에 따라 tex 를 변경한다.
void InputKey(Vector2* _Position, char* Tex)
{
	// ** 키 입력

			// GetAsyncKeyState() = 키입력 함수
			// 
			// 상황에 따라서 다음을 반환함.
			// 0x0000, 0x0001, 0x8000, 0x8001
			// 
			//  ** 뒤쪽 1 과 0 의 차이
			//  0 : 이전에 눌린적 없음
			//  1 : 이전에 눌린적 있음
			// 
			//  ** 앞쪽 0과 8의 차이
			//  0 : 현재 눌리지 않음 
			//  8 : 현재 눌림

			// printf("%x\n", GetAsyncKeyState(VK_UP & 0x8001));
	if (GetAsyncKeyState(VK_UP) && !Vertical)
	{
		// ** y좌표가 0보다 클 때에만 입력을 받는다.
		if (_Position->y > 0)
			_Position->y--;
		/*
		if (y <= 0)
			y = 0;
		*/

		Tex = (char*)"△";
		Vertical = true;
	}
	else
	{
		Vertical = false;
	}
	if (GetAsyncKeyState(VK_DOWN) && !Vertical)
	{
		// ** y좌표가 39보다 작을 때에만 입력을 받는다.
		if (_Position->y < 39)
			_Position->y++;
		Tex = (char*)"▽";
		Vertical = true;
	}
	else
	{
		Vertical = false;
	}
	if (GetAsyncKeyState(VK_LEFT) && !Horzontal)
	{
		// ** x좌표가 0보다 클 때에만 입력을 받는다.
		if (_Position->x > 0)
			_Position->x--;
		Tex = (char*)"◁";
		Horzontal = true;
	}
	else
	{
		Horzontal = false;
	}
	if (GetAsyncKeyState(VK_RIGHT) && !Horzontal)
	{
		// ** y좌표가 118보다 작을 때에만 입력을 받는다.
		if (_Position->x < 118)
			_Position->x++;
		Tex = (char*)"▷";
		Horzontal = true;
	}
	else
	{
		Horzontal = false;
	}
}









// 실시간 날씨정보, 정부기관에 건물 높이 정보, 삼각함수 

