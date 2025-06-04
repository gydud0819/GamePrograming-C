#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>

struct Card
{
	char grade;		// 1
	int health;		// 4
	double attack;	// 8
};

struct SP
{
	double a;
	double b;
};

struct Node
{
	int data;
	struct Node* next;
	struct Node* currentNode;
};

typedef struct
{
	char name[20];
	char position[20];
	int number;


}Baseball, Player;

int main()
{
#pragma region 구조체
	// 여러개의 변수를 하나의 집합으로 구조화 한다음 하나의 객체를 생성하는 것이다.
	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않기에 구조체 내부에 있는 데이터를 초기화 할 수 없다.
	// 선언방법 : struct 구조체 이름 { };
	// 클래스와는 다르게 C에서는 struct를 붙여줘야한다.

	// 구조체의 각 멤버는 구조체 선언에서 나타는 순서대로 초기화해야 하고 순서는 왼쪽에서 오른쪽으로 이어진다.
	//struct Card card = { 'B', 20, 33.2 };	
	//
	//printf("등급 : %c\n", card.grade);
	//printf("체력 : %d\n", card.health);
	//printf("공격력 : %1f\n\n", card.attack);
	//
	//card.grade = 'S';
	//card.health = 10;
	//card.attack = 11.3f;
	//
	//printf("등급 : %c\n", card.grade);
	//printf("체력 : %d\n", card.health);
	//printf("공격력 : %1f\n\n", card.attack);
	//
	//// 구조체 포인터로 접근했을 때
	//struct Card* cptr = &card;
	//cptr->grade = 'SS';
	//cptr->health = 30;
	//cptr->attack = 5.7f;
	//
	//printf("등급 : %c\n", cptr->grade);
	//printf("체력 : %d\n", cptr->health);
	//printf("공격력 : %1f\n", cptr->attack);

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록 컴파일러가 레지스터의 블록에 맞춰 바이트를 패딩해주는 최적화 작업이다.
	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리 크기가 다르게 설정될 수 있고 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성된다.
	// 구조체 안에 선언된 변수가 멤버 변수에 속한다.
	// 가장 큰 자료형의 크기에 맞추나? 맞추넹 
	// 구조체의 크기는 구조체를 구성하는 멤버 변수 중에서 크기가 가장 큰 자료형의 배수가 되도록 설정한다. 
	// 가장 큰 자료형을 제일 밑에 배정하면 바이트 패딩을 줄일 수 있다. 

	//printf("Card 구조체의 크기 : %u byte\n", sizeof(struct Card));
#pragma endregion

#pragma region 두 점 사이의 거리
	// a^2 + b^2 = c^2

	//printf("sqrt(100) : %1f\n",sqrt(100));	// 루트
	//printf("pow(2,3) : %1f\n", pow(2, 3));	// 제곱
	//
	//struct SP sp1 = { 1,5 }; // 플레이어 좌표
	//struct SP sp2 = { 5,8 }; // 몬스터 좌표
	//
	//sp1.a = 4;
	//sp2.a = 3;
	//sp1.b = 3;
	//sp2.b = 7;
	//
	//double d2 = sqrt(pow(sp1.a - sp2.a, 2) + pow(sp1.b - sp2.b, 2));	// 내가 표현하려고햇던거 2를 안넣엇네 ㅅㅂ 
	//
	//printf("d2 : %1f\n", d2);
	//
	//if (d2 >= 3.0)
	//{
	//	printf("공격가능\n");
	//}
	//else
	//{
	//	printf("공격불가\n");
	//}

	
	//double x = sp1.a - sp2.a;
	//double y = sp2.b - sp2.b;
	//
	//
	//double d = sqrt(pow(x, 2) + pow(y, 2));	// 아니 이해가 안가는데? 
	//
	//if (d >= 3.0)
	//{
	//	printf("공격가능\n");
	//
	//}
	//else
	//{
	//	printf("공격불가\n");
	//}


	
#pragma endregion

#pragma region 자기 참조 구조체
	// 자기 자신과 같은 타입의 포인터를 멤버로 포함하고 있는 구조체이다.

	//struct Node node1;
	//struct Node node2;
	//struct Node node3;
	//
	//node1.data = 10;
	//node2.data = 20;
	//node3.data = 30;
	//
	//node1.next = &node2;
	//node2.next = &node3;
	//node3.next = NULL;
	//
	//struct Node* currentNode = &node1;	// 중단점 찍어서 확인을 하면 어떻게 들어가는지 쉽게 알 수 있다.
	//
	//while (currentNode != NULL)
	//{
	//	printf("%d\n", currentNode->data);
	//	currentNode = currentNode->next;
	//}

#pragma region typedef
	/*
	* 자료형에 별명을 붙이는 키워드로 원하는 이름으로 커스텀해서 사용할 수 있다.
	* 복잡한 자료형을 간략히 표현하기 위해 사용한다.
	* 구조체를 선언할 때 typedef를 사용하면 struct를 쓰지않고 선언할 수 있다.
	* 사용 예시: 
	* typedef struct 
	* { 
	* 
	* } 커스텀 하고 싶은 구조체 변수;
	*/

	Player player;	// typedef를 선언해서 사용한 구조체
	
	strcpy_s(player.name, sizeof(player.name), "이호준");
	strcpy_s(player.position, sizeof(player.position), "감독");
	player.number = 26;
	
	printf("이름 : %s\n", player.name);
	printf("포지션 : %s\n", player.position);
	printf("등번호 : %d\n", player.number);
	
#pragma endregion

	
#pragma endregion


	return 0;
}