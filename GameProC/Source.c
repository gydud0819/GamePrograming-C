#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#pragma region �Լ� ����
void Shuffle(int array[], int size)		// ���� �Լ�
{

	for (int i = 0; i < size; i++)		// 0���� size���� ������.(������ �����ŭ ������?)
	{
		int  a = rand() % size;			// �������� a���� �����Ѵ�.

		int temp = array[a];			// �ӽ� ������ temp�� ������ a�� ���� �����Ѵ�.
		array[a] = array[i];			// a��° �迭�� i��° �迭 ���� �����Ѵ�
		array[i] = temp;				// i��° �迭 ���� �ٽ� temp�� �ִ´�. 
	}
}

void Fisher_Yates(int array[], int size)	// �ڿ������� ������ ���� ���� ������ ���� �κи� ��ȯ�Ѵ�.
{
	// i>0�� ���� : i�� 1�� �� ������ ��ȯ�� �̷������ i=0������ �ڱ� �ڽŰ� ��ȯ�ϰ� �ǹǷ� �ǹ̰� ����.
	// ������ ���ǿ��� i�� ���̴� ���� : �̹� �������� ����� ���� �ǵ��� �ʰ� ���α� ���ؼ� 
	for (int i = size - 1; i > 0; i--)	
	{
		int j = rand() % (i + 1);		// j�� 0���� i���� �߿� �������� ���� �����Ѵ�.
		int temp = array[i];
		array[i] = array[j];
		array[j] = temp;
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

typedef enum
{
	PITCHER = 1,
	CATCHER,	// 2
	INFIELDER,	// 3	
	OUTFIELDER,	// 4
	COACH		// 5
}Baseball_Postion;

const char* tarot[] =
{
	"0. �ٺ� : ����, ������, ���ɼ�, ����",
	"1. ������ : ����, â��, ����, �ɷ�",
	"2. ������ : ����, �ź�, �����ǽ�, ���",
	"3. ���� : ǳ��, ��, â����, �ڿ�",
	"4. Ȳ�� : ����, ����, ����, ������",
	"5. ��Ȳ : ����, �ų�, ����, ���� ����",
	"6. ���� : ���, ����, ����, ��ȭ",
	"7. ���� : ���, �γ�, ������ ��",
	"8. �� : �¸�, ����, ����, ��ܷ�",
	"9. ������ : ��, Ž��, ������ ����",
	"10. ����� �������� : ���, ��ȭ, ��ȯ, ��ȸ",
	"11. ���� : ����, ����, ����, ����",
	"12. �Ŵ޸� ��� : ���� ��ȭ, ����, ���",
	"13. ���� : ��, ��ȭ, ���, ���ο� ����",
	"14. ���� : ����, ��ȭ, ����, �γ�",
	"15. �Ǹ� : ��Ȥ, �ӹ�, ����, �׸���",
	"16. ž : �ر�, ���, ��ȭ, �ع�",
	"17. �� : ���, ����, ġ��, ���",
	"18. �� : ���ǽ�, ȯ��, ��Ȯ��, ����",
	"19. �¾� : ����, ���, Ȱ��, ����",
	"20. ���� : ��Ȱ, �ݼ�, ����, ��",
	"21. ���� : �ϼ�, ����, ����, ���",
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
	//int size = sizeof(list) / sizeof(int);	// �迭�� ũ�Ⱑ ������ �𸦶� ũ�� ������ ���� ����Ѵ�.
	//
	//Shuffle(list, size);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", list[i]);
	//}
#pragma region Fisher-Yates ���� �Լ�
	// �迭�� ��� ��Ҹ� �ߺ� ���� �������� ���� ���� ������ �˰����̴�.
	// swap(�� ��ȯ) ������ �������, �迭�� �� �ں��� ������ ���鼭 �� ��ġ�� �� ���� �������� ������ ��ȯ�Ѵ�.
	// �� ������ �迭�� ù ��° ���ұ��� �ݺ��ϸ�, ��� ��Ұ� �� ���� ��ȯ�Ǿ� �ߺ� ���� �����ϰ� ���δ�.
	// ��� ����� ��(����)�� ������ Ȯ���� �������� �����Ѵ�.
	// ex. ī�� ���� ���� ����, �뷡 �÷��̸���Ʈ ���� ��� ��
	
	// ���� �������� ��� �Ǵ� ���� �ڵ� 
	//srand(time(NULL));
	//int list[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int size = sizeof(list) / sizeof(int);
	//
	//Fisher_Yates(list, size);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", list[i]);
	//}
	
#pragma endregion

#pragma region ���� �Լ��� �̿��� Ÿ�� �̱�
	int select = 0;		// Ÿ�δ� 1���� �̱⶧���� 0���� ����
	
	printf("Ÿ��ī�� �̱�\n");
	
	srand(time(NULL));
	
	
	int list[22] = { 0,1,2,3,4,5,6,7,8,9,
					11,12,13,14,15,16,17,18,19,20,21 };
	
	int size = sizeof(list) / sizeof(int);
	
	
	Fisher_Yates(list, size);
	
	while (1)	// 22�� �߿� 1�� �̾ƾ���.
	{
	
		printf("0������ 21������ �̰� ���� ī�� �ϳ��� �����ϼ���. (0-21)\n");
		scanf_s("%d", &select);
	
		if (select >= 0 && select <= 21)	// 1������ 22������ ���ڸ� �����ٸ�
		{
			//printf("������ ī��� %d�� ī�� �Դϴ�.\n", list[select-1]);	// select-1�� �ϴ� ���� : �迭�� 0���� �����ϱ� ������ -1�� ���������� �ڵ尡 ������������ ��µ� �� ����
			printf("������ ī��� %s ī�� �Դϴ�.\n", tarot[select-1]);	// select-1�� �ϴ� ���� : �迭�� 0���� �����ϱ� ������ -1�� ���������� �ڵ尡 ������������ ��µ� �� ����
			break;
		}
	
	}

	/*
	* // �ʱ� �ڵ� 
	* 	int select = 0;		// Ÿ�δ� 1���� �̱⶧���� 0���� ����

	printf("Ÿ��ī�� �̱�\n");
	printf("1������ 22������ �̰� ���� ī�� �ϳ��� �����ϼ���. (1-22)\n");

	scanf_s("%d", &select);

		while (select<1)	// 22�� �߿� 1�� �̾ƾ���.
		{
			srand(time(NULL));

			int list[22] = { 1,2,3,4,5,6,7,8,9,10,11,
							12,13,14,15,16,17,18,19,20,21,22 };

			int size = sizeof(list) / sizeof(int);

			Fisher_Yates(list, size);

			// 1�常 ������ �ؾ��Ѵ�.

			for (int i = 0; i < size; i++)	// ���⿡ size�� �ƴ� select�� �����ϳ�? // �̰� �ƴ� 
			{
				printf("%d ", list[i]);
			}
		}
		printf("������ ī��� %d�� ī�� �Դϴ�.\n"); 

	*/

#pragma endregion



#pragma endregion

#pragma region Up&Down Game

	//srand(time(NULL));
	//
	//int randNum = rand() % 50 + 1;
	//
	//int me = 0;
	//
	//int try = 5;
	//int hp = 0;
	//
	//
	//
	//printf("���� ���� ���߱�\n");
	//printf("1~50 ����\n");
	//
	//
	//// 5�� �� �������� ���ƾ��ϴϱ� while�� ���°� �´°� �����ѵ� ���ڵ� ��� �� �� �ִ� ��� 1. �޸��� 2. ��� 3. pureRef? 4. �׸����� ������� �� 
	//
	//while (try > hp)
	//{
	//	//GotoXY(30, 0);
	//	PlayerHp(try);
	//
	//	scanf_s("%d", &me);
	//	//printf("%d\n", me);
	//
	//	if (me > randNum || me < randNum)
	//	{
	//		printf("�ٽ� �Է�\n");
	//	}
	//
	//	try--;
	//
	//	if (me > randNum)		// ���� �Է��� ���� randNum���� Ŭ�� == ���� �� => ü���ϳ� �𿩾���
	//	{
	//		printf("Down\n");
	//	}
	//	else if (me < randNum)
	//	{
	//		printf("Up\n");
	//	}
	//	else
	//	{
	//		printf("Victory\n");
	//		//printf("���� : %d\n", randNum);
	//		
	//	}
	//
	//	if (try == hp)
	//	{
	//		printf("Lose\n");
	//		printf("���� : %d\n", randNum);
	//
	//		break;
	//	}
	//}

#pragma endregion

#pragma region ������
	/*
	* ���� ���� ���� ����� �ǹ� �ִ� �̸��� �ο��� �ڵ��� �������� ������������ �����ִ� ����� ���� �ڷ����̴�.
	* enum Ű���带 ����� �����ϰ� ������ ���� �������� ������ ù ��° ����� 0���� ����ϰ� ���ķ� 1�� �����Ѵ�.
	* ���ϴ� �׸� ���� ���� ������ �� �ְ� ���� �׸��� ������ ���� �������� 1�� �ڵ� �����Ѵ�.
	* �ʿ�� typedef�� ����� enum Ű���带 �ٿ� ����� �� �ִ�.
	*
	* ex. typedef enum
	* {
	*	APPLE,
	*	BANANA,
	*	ORANGE
	* }Fruit;
	*/

	/*
	* �������� ����ϴ� ����
	* �ڵ忡 �ǹ� �ο��� �� �� �־� �����ϱ� ����.
	* ���������� ó���Ǿ� ���� ���� ���� ����� �� �ִ�.
	* switch���� ���� ���� �������� ��������.
	*/

	// ������ ����
	//enum Baseball_Postion Position;
	//Baseball_Postion Position;		// typedef�� ����� ��� enum Ű���� ���� ���� ���� ����
	//
	//printf("�������� �����ϼ���.\n");
	//scanf_s("%d", &Position);
	//
	//switch (Position)
	//{
	//case PITCHER:
	//	printf("������ �����Ͽ����ϴ�.\n");
	//	break;
	//case CATCHER:
	//	printf("������ �����Ͽ����ϴ�.\n");
	//	break;
	//case INFIELDER:
	//	printf("���߼��� �����Ͽ����ϴ�.\n");
	//	break;
	//case OUTFIELDER:
	//	printf("�ܾ߼��� �����Ͽ����ϴ�.\n");
	//	break;
	//case COACH:
	//	printf("���� �� ��ġ���� �����Ͽ����ϴ�.\n");
	//	break;
	//default:
	//	printf("�ٽ� �������ּ���.\n");
	//	break;
	//}
#pragma endregion


	return 0;
}