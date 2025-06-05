#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#pragma region �Լ� ����
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
		printf("��");
	}
	printf("\n\n");
}

void GotoXY(int x, int y)
{
	COORD pos = { x,y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
#pragma endregion

enum �����
{
	û��,
	��ȣ,
	����,
	����,
	Ȳ��
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
#pragma region �ǻ� ����
	// rand() : 0~32767 ������ ������ ���� ��ȯ�ϴ� �Լ��̴�.
	// time(NULL) : 1970�� 1�� 1��  (00 : 00 : 00) UTC ���Ŀ� ���� ��(Second)�� ��ȯ�ϴ� �Լ��̴�.
	// srand(seed) : ���� �������� �õ带 �����ϴ� �Լ��̴�.

	//int max = 10;
	//
	//srand(time(NULL));
	//
	//for (int i = 0; i < 10; i++)
	//{
	//	printf("%d ", rand() % max + 1);	// 1���� 10���� ���
	//
	//}



#pragma endregion

#pragma region ���� �Լ�
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

	

	printf("���� ���� ���߱�\n");
	printf("1~50 ����\n");


	// 5�� �� �������� ���ƾ��ϴϱ� while�� ���°� �´°� �����ѵ� ���ڵ� ��� �� �� �ִ� ��� 1. �޸��� 2. ��� 3. pureRef? 4. �׸����� ������� �� 

	while (try > hp)
	{
		//GotoXY(30, 0);
		PlayerHp(try);

		scanf_s("%d", &me);
		//printf("%d\n", me);

		if (me > randNum || me < randNum)
		{
			printf("�ٽ� �Է�\n");
		}

		try--;

		if (me > randNum)		// ���� �Է��� ���� randNum���� Ŭ�� == ���� �� => ü���ϳ� �𿩾���
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
			//printf("���� : %d\n", randNum);
			
		}

		if (try == hp)
		{
			printf("Lose\n");
			printf("���� : %d\n", randNum);

			break;
		}
	}

#pragma endregion

#pragma region ������
	// enum ���

	// ������ ����
	printf("")
#pragma endregion


	return 0;
}