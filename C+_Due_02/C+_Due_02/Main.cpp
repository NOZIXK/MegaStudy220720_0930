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




// ** true/false �� �߿� �ϳ��� ��ȯ
bool Horzontal = false;
bool Vertical = false; 



void InputKey(Vector2* _Position, char* Tex);
void SetCursorPosition(int _x, int _y);
void ShowCursor(bool _b);



int main(void)
{
	// ** Ŀ���� �Ⱥ��̰� ����
	ShowCursor(false);
	ULONGLONG Time = GetTickCount64();

	// ** �÷��̾� ��ǥ
	Vector2 PlayerPosition;
	PlayerPosition.x = 0;
	PlayerPosition.y = 0;

	// ** �÷��̾� Texture
	char* Tex = (char*)"��";





	while (true)
	{
		// ** 0.05�� ����
		if (Time + 50 < GetTickCount64())
		{
			Time = GetTickCount64();

			// ** ȭ�� Ŭ����
			system("cls");

			/*
			Vertical = false;
			Horzontal = false;
			*/

			
			// ** Ű �Է�

			// GetAsyncKeyState() = Ű�Է� �Լ�
			// 
			// ��Ȳ�� ���� ������ ��ȯ��.
			// 0x0000, 0x0001, 0x8000, 0x8001
			// 
			//  ** ���� 1 �� 0 �� ����
			//  0 : ������ ������ ����
			//  1 : ������ ������ ����
			// 
			//  ** ���� 0�� 8�� ����
			//  0 : ���� ������ ���� 
			//  8 : ���� ����

			// printf("%x\n", GetAsyncKeyState(VK_UP & 0x8001));
			if (GetAsyncKeyState(VK_UP) && !Vertical)
			{
				// ** y��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
				if (PlayerPosition.y > 0)
					PlayerPosition.y--;
				/*
				if (y <= 0)
					y = 0;
				*/

				Tex = (char*)"��";
				Vertical = true;
			}
			else
			{
				Vertical = false;
			}
			if (GetAsyncKeyState(VK_DOWN) && !Vertical)
			{
				// ** y��ǥ�� 39���� ���� ������ �Է��� �޴´�.
				if (PlayerPosition.y < 39)
					PlayerPosition.y++;
				Tex = (char*)"��";
				Vertical = true;
			}
			else
			{
				Vertical = false;
			}
			if (GetAsyncKeyState(VK_LEFT) && !Horzontal)
			{ 
				// ** x��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
				if (PlayerPosition.x>0)
					PlayerPosition.x--;
				Tex = (char*)"��";
				Horzontal = true;
			}
			else
			{
				Horzontal = false;
			}
			if (GetAsyncKeyState(VK_RIGHT) && !Horzontal)
			{
				// ** y��ǥ�� 118���� ���� ������ �Է��� �޴´�.
				if (PlayerPosition.x < 118)
					PlayerPosition.x++;
				Tex = (char*)"��";
				Horzontal = true;
			}
			else
			{
				Horzontal = false;
			}
			/*
			// ** �Ű������� Virtual Key �� �Է� �޴´�.
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




// ** Ŀ���� ��ġ�� �̵���Ų��.
void SetCursorPosition(int _x, int _y)
{

	// ** ��ǥ�� ����.
	COORD pos = { _x, _y };

	// ** ������ ��ǥ�� �̵���Ű�� �Լ�
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE), pos);
	// ** GetStdHandle(STD_OUTPUT_HANDLE) = ���� �ܼ��� �ڵ�
	// ** HANDLE : ������ â�� �⺻ �������� ������ �� ����.
}


// ** Ŀ��
void ShowCursor(bool _b)
{
	// ** Ŀ���� �⺻������ �����Ѵ�.
	CONSOLE_CURSOR_INFO Info;

	// ** Ŀ���� �⺻������ �����Ѵ�.
	// ** Ŀ���� ���̰�/�� ���̰� �Ѵ�.
	Info.bVisible = _b;

	// ** Ŀ���� ũ�⸦ �����Ѵ�.
	Info.dwSize = 1;

	// ** Ŀ�ü��� ������ �����Ű�� �Լ�
	SetConsoleCursorInfo(
		GetStdHandle(STD_OUTPUT_HANDLE), &Info);


}

// ** �÷��̾��� Ű �Է��� �ް�, �Է¿� ���� tex �� �����Ѵ�.
void InputKey(Vector2* _Position, char* Tex)
{
	// ** Ű �Է�

			// GetAsyncKeyState() = Ű�Է� �Լ�
			// 
			// ��Ȳ�� ���� ������ ��ȯ��.
			// 0x0000, 0x0001, 0x8000, 0x8001
			// 
			//  ** ���� 1 �� 0 �� ����
			//  0 : ������ ������ ����
			//  1 : ������ ������ ����
			// 
			//  ** ���� 0�� 8�� ����
			//  0 : ���� ������ ���� 
			//  8 : ���� ����

			// printf("%x\n", GetAsyncKeyState(VK_UP & 0x8001));
	if (GetAsyncKeyState(VK_UP) && !Vertical)
	{
		// ** y��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
		if (_Position->y > 0)
			_Position->y--;
		/*
		if (y <= 0)
			y = 0;
		*/

		Tex = (char*)"��";
		Vertical = true;
	}
	else
	{
		Vertical = false;
	}
	if (GetAsyncKeyState(VK_DOWN) && !Vertical)
	{
		// ** y��ǥ�� 39���� ���� ������ �Է��� �޴´�.
		if (_Position->y < 39)
			_Position->y++;
		Tex = (char*)"��";
		Vertical = true;
	}
	else
	{
		Vertical = false;
	}
	if (GetAsyncKeyState(VK_LEFT) && !Horzontal)
	{
		// ** x��ǥ�� 0���� Ŭ ������ �Է��� �޴´�.
		if (_Position->x > 0)
			_Position->x--;
		Tex = (char*)"��";
		Horzontal = true;
	}
	else
	{
		Horzontal = false;
	}
	if (GetAsyncKeyState(VK_RIGHT) && !Horzontal)
	{
		// ** y��ǥ�� 118���� ���� ������ �Է��� �޴´�.
		if (_Position->x < 118)
			_Position->x++;
		Tex = (char*)"��";
		Horzontal = true;
	}
	else
	{
		Horzontal = false;
	}
}









// �ǽð� ��������, ���α���� �ǹ� ���� ����, �ﰢ�Լ� 

