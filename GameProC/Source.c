#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#pragma region 함수 예제
void Shuffle(int array[], int size)
{

	for (int i = 0; i < size; i++)
	{
		int  a = rand() % size;

		int temp = array[a];
		array[a] = array[i];
		array[i] = temp;
	}
}

void PlayerHp(int hp)
{
	printf("Hp : ");

	for (int i = 0; i < hp; i++)
	{
		printf("♥");
	}
	printf("\n\n");
}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
#pragma endregion

enum 오방신
{
	청룡,
	백호,
	현무,
	주작,
	황룡
};

enum BASEBALL_POSITION
{
	Pitcher,
	Catcher,
	InField,
	OutField,
	Coatch
};

int main()
{
#pragma region 의사 난수
	// rand() : 0~32767 사이의 난수의 값을 반환하는 함수이다.
	// time(NULL) : 1970년 1월 1일  (00 : 00 : 00) UTC 이후에 지난 초(Second)를 반환하는 함수이다.
	// srand(seed) : 난수 생성기의 시드를 설정하는 함수이다.

	//int max = 10;
	//
	//srand(time(NULL));
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % max + 1);	// 1부터 10까지 출력
	//
	//}



#pragma endregion

#pragma region 셔플 함수
	//srand(time(NULL));
	//
	//int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int size = sizeof(list) / sizeof(int);
	//
	//Shuffle(list, size);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", list[i]);
	//}
#pragma endregion

#pragma region Up&Down Game

	srand(time(NULL));

	int randNum = rand() % 50 + 1;

	int me = 0;

	int try = 5;
	int hp = 0;

	

	printf("랜덤 숫자 맞추기\n");
	printf("1~50 사이\n");


	// 5번 다 쓸때까지 돌아야하니까 while을 쓰는게 맞는거 같긴한데 손코딩 대신 할 수 있는 대안 1. 메모장 2. 노션 3. pureRef? 4. 그림판은 사용할줄 모름 

	while (try > hp)
	{
		//GotoXY(30, 0);
		PlayerHp(try);

		scanf_s("%d", &me);
		//printf("%d\n", me);

		if (me > randNum || me < randNum)
		{
			printf("다시 입력\n");
		}

		try--;

		if (me > randNum)		// 내가 입력한 값이 randNum보다 클때 == 작을 때 => 체력하나 깎여야함
		{
			printf("Down\n");
		}
		else if (me < randNum)
		{
			printf("Up\n");
		}
		else
		{
			printf("Victory\n");
			//printf("정답 : %d\n", randNum);
			
		}

		if (try == hp)
		{
			printf("Lose\n");
			printf("정답 : %d\n", randNum);

			break;
		}
	}

#pragma endregion

#pragma region 열거형
	// enum 사용

	// 열거형 예시
	printf("")
#pragma endregion


	return 0;
}