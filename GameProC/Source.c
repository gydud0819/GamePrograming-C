#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

#pragma region 함수 예제
void Shuffle(int array[], int size)		// 셔플 함수
{

	for (int i = 0; i < size; i++)		// 0부터 size까지 돌린다.(정해진 사이즈만큼 돌린다?)
	{
		int  a = rand() % size;			// 랜덤으로 a값을 선택한다.

		int temp = array[a];			// 임시 변수인 temp에 원소인 a의 값을 저장한다.
		array[a] = array[i];			// a번째 배열에 i번째 배열 값을 저장한다
		array[i] = temp;				// i번째 배열 값을 다시 temp에 넣는다. 
	}
}

void Fisher_Yates(int array[], int size)	// 뒤에서부터 앞으로 오고 아직 섞이지 않은 부분만 교환한다.
{
	// i>0인 이유 : i가 1일 때 마지막 교환이 이루어지고 i=0에서는 자기 자신과 교환하게 되므로 의미가 없다.
	// 마지막 조건에서 i를 줄이는 이유 : 이미 랜덤으로 저장된 값을 건들지 않고 냅두기 위해서 
	for (int i = size - 1; i > 0; i--)	
	{
		int j = rand() % (i + 1);		// j에 0부터 i까지 중에 랜덤으로 값을 저장한다.
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
	"0. 바보 : 시작, 순수함, 가능성, 모험",
	"1. 마법사 : 의지, 창조, 실현, 능력",
	"2. 여사제 : 직관, 신비, 잠재의식, 비밀",
	"3. 여제 : 풍요, 모성, 창조성, 자연",
	"4. 황제 : 권위, 질서, 안정, 리더십",
	"5. 교황 : 전통, 신념, 교육, 영적 지도",
	"6. 연인 : 사랑, 관계, 선택, 조화",
	"7. 전차 : 용기, 인내, 내면의 힘",
	"8. 힘 : 승리, 의지, 전진, 결단력",
	"9. 은둔자 : 고독, 탐구, 내면의 지혜",
	"10. 운명의 수레바퀴 : 운명, 변화, 순환, 기회",
	"11. 정의 : 정의, 균형, 진실, 공정",
	"12. 매달린 사람 : 관점 변화, 수용, 희생",
	"13. 죽음 : 끝, 변화, 재생, 새로운 시작",
	"14. 절제 : 절제, 조화, 균형, 인내",
	"15. 악마 : 유혹, 속박, 집착, 그림자",
	"16. 탑 : 붕괴, 충격, 변화, 해방",
	"17. 별 : 희망, 영감, 치유, 재생",
	"18. 달 : 무의식, 환상, 불확실, 직감",
	"19. 태양 : 성공, 기쁨, 활력, 긍정",
	"20. 심판 : 부활, 반성, 각성, 평가",
	"21. 세계 : 완성, 성취, 통합, 결실",
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
	//int size = sizeof(list) / sizeof(int);	// 배열의 크기가 얼마인지 모를때 크기 측정을 위해 사용한다.
	//
	//Shuffle(list, size);
	//
	//for (int i = 0; i < size; i++)
	//{
	//	printf("%d\n", list[i]);
	//}
#pragma region Fisher-Yates 셔플 함수
	// 배열의 모든 요소를 중복 없이 랜덤으로 섞기 위한 일종의 알고리즘이다.
	// swap(값 교환) 개념을 기반으로, 배열의 맨 뒤부터 앞으로 오면서 각 위치에 들어갈 값을 무작위로 선택해 교환한다.
	// 이 과정을 배열의 첫 번째 원소까지 반복하면, 모든 요소가 한 번씩 교환되어 중복 없이 랜덤하게 섞인다.
	// 모든 경우의 수(순열)가 동일한 확률로 나오도록 보장한다.
	// ex. 카드 게임 랜덤 섞기, 노래 플레이리스트 랜덤 재생 등
	
	// 완전 랜덤으로 출력 되는 예시 코드 
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

#pragma region 셔플 함수를 이용한 타로 뽑기
	int select = 0;		// 타로는 1번만 뽑기때문에 0으로 지정
	
	printf("타로카드 뽑기\n");
	
	srand(time(NULL));
	
	
	int list[22] = { 0,1,2,3,4,5,6,7,8,9,
					11,12,13,14,15,16,17,18,19,20,21 };
	
	int size = sizeof(list) / sizeof(int);
	
	
	Fisher_Yates(list, size);
	
	while (1)	// 22장 중에 1장 뽑아야함.
	{
	
		printf("0번부터 21번까지 뽑고 싶은 카드 하나만 선택하세요. (0-21)\n");
		scanf_s("%d", &select);
	
		if (select >= 0 && select <= 21)	// 1번부터 22번사이 숫자를 누른다면
		{
			//printf("선택한 카드는 %d번 카드 입니다.\n", list[select-1]);	// select-1을 하는 이유 : 배열은 0부터 시작하기 때문에 -1을 하지않으면 코드가 비정상적으로 출력될 수 있음
			printf("선택한 카드는 %s 카드 입니다.\n", tarot[select-1]);	// select-1을 하는 이유 : 배열은 0부터 시작하기 때문에 -1을 하지않으면 코드가 비정상적으로 출력될 수 있음
			break;
		}
	
	}

	/*
	* // 초기 코드 
	* 	int select = 0;		// 타로는 1번만 뽑기때문에 0으로 지정

	printf("타로카드 뽑기\n");
	printf("1번부터 22번까지 뽑고 싶은 카드 하나만 선택하세요. (1-22)\n");

	scanf_s("%d", &select);

		while (select<1)	// 22장 중에 1장 뽑아야함.
		{
			srand(time(NULL));

			int list[22] = { 1,2,3,4,5,6,7,8,9,10,11,
							12,13,14,15,16,17,18,19,20,21,22 };

			int size = sizeof(list) / sizeof(int);

			Fisher_Yates(list, size);

			// 1장만 나오게 해야한다.

			for (int i = 0; i < size; i++)	// 여기에 size가 아닌 select가 들어가야하나? // 이건 아님 
			{
				printf("%d ", list[i]);
			}
		}
		printf("선택한 카드는 %d번 카드 입니다.\n"); 

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
	//printf("랜덤 숫자 맞추기\n");
	//printf("1~50 사이\n");
	//
	//
	//// 5번 다 쓸때까지 돌아야하니까 while을 쓰는게 맞는거 같긴한데 손코딩 대신 할 수 있는 대안 1. 메모장 2. 노션 3. pureRef? 4. 그림판은 사용할줄 모름 
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
	//		printf("다시 입력\n");
	//	}
	//
	//	try--;
	//
	//	if (me > randNum)		// 내가 입력한 값이 randNum보다 클때 == 작을 때 => 체력하나 깎여야함
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
	//		//printf("정답 : %d\n", randNum);
	//		
	//	}
	//
	//	if (try == hp)
	//	{
	//		printf("Lose\n");
	//		printf("정답 : %d\n", randNum);
	//
	//		break;
	//	}
	//}

#pragma endregion

#pragma region 열거형
	/*
	* 여러 개의 정수 상수에 의미 있는 이름을 부여해 코드의 가독성과 유지보수성을 높여주는 사용자 정의 자료형이다.
	* enum 키워드를 사용해 선언하고 별도의 값을 지정하지 않으면 첫 번째 상수는 0으로 취급하고 이후로 1씩 증가한다.
	* 원하는 항목에 직접 값을 지정할 수 있고 이후 항목은 지정된 값을 기준으로 1씩 자동 증가한다.
	* 필요시 typedef를 사용해 enum 키워드를 줄여 사용할 수 있다.
	*
	* ex. typedef enum
	* {
	*	APPLE,
	*	BANANA,
	*	ORANGE
	* }Fruit;
	*/

	/*
	* 열거형을 사용하는 이유
	* 코드에 의미 부여를 할 수 있어 이해하기 쉽다.
	* 정수값으로 처리되어 성능 저하 없이 사용할 수 있다.
	* switch문과 같이 쓰면 가독성이 높아진다.
	*/

	// 열거형 예시
	//enum Baseball_Postion Position;
	//Baseball_Postion Position;		// typedef를 사용한 경우 enum 키워드 없이 변수 선언 가능
	//
	//printf("포지션을 선택하세요.\n");
	//scanf_s("%d", &Position);
	//
	//switch (Position)
	//{
	//case PITCHER:
	//	printf("투수를 선택하였습니다.\n");
	//	break;
	//case CATCHER:
	//	printf("포수를 선택하였습니다.\n");
	//	break;
	//case INFIELDER:
	//	printf("내야수를 선택하였습니다.\n");
	//	break;
	//case OUTFIELDER:
	//	printf("외야수를 선택하였습니다.\n");
	//	break;
	//case COACH:
	//	printf("감독 및 코치진을 선택하였습니다.\n");
	//	break;
	//default:
	//	printf("다시 선택해주세요.\n");
	//	break;
	//}
#pragma endregion


	return 0;
}