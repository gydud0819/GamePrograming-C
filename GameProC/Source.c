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
#pragma region ����ü
	// �������� ������ �ϳ��� �������� ����ȭ �Ѵ��� �ϳ��� ��ü�� �����ϴ� ���̴�.
	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �ʱ⿡ ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� ����.
	// ������ : struct ����ü �̸� { };
	// Ŭ�����ʹ� �ٸ��� C������ struct�� �ٿ�����Ѵ�.

	// ����ü�� �� ����� ����ü ���𿡼� ��Ÿ�� ������� �ʱ�ȭ�ؾ� �ϰ� ������ ���ʿ��� ���������� �̾�����.
	//struct Card card = { 'B', 20, 33.2 };	
	//
	//printf("��� : %c\n", card.grade);
	//printf("ü�� : %d\n", card.health);
	//printf("���ݷ� : %1f\n\n", card.attack);
	//
	//card.grade = 'S';
	//card.health = 10;
	//card.attack = 11.3f;
	//
	//printf("��� : %c\n", card.grade);
	//printf("ü�� : %d\n", card.health);
	//printf("���ݷ� : %1f\n\n", card.attack);
	//
	//// ����ü �����ͷ� �������� ��
	//struct Card* cptr = &card;
	//cptr->grade = 'SS';
	//cptr->health = 30;
	//cptr->attack = 5.7f;
	//
	//printf("��� : %c\n", cptr->grade);
	//printf("ü�� : %d\n", cptr->health);
	//printf("���ݷ� : %1f\n", cptr->attack);

#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ��� �����Ϸ��� ���������� ��Ͽ� ���� ����Ʈ�� �е����ִ� ����ȭ �۾��̴�.
	// ����ü ũ���� ��� ��� ������ ������ ���� �޸� ũ�Ⱑ �ٸ��� ������ �� �ְ� ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����ȴ�.
	// ����ü �ȿ� ����� ������ ��� ������ ���Ѵ�.
	// ���� ū �ڷ����� ũ�⿡ ���߳�? ���߳� 
	// ����ü�� ũ��� ����ü�� �����ϴ� ��� ���� �߿��� ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����Ѵ�. 
	// ���� ū �ڷ����� ���� �ؿ� �����ϸ� ����Ʈ �е��� ���� �� �ִ�. 

	//printf("Card ����ü�� ũ�� : %u byte\n", sizeof(struct Card));
#pragma endregion

#pragma region �� �� ������ �Ÿ�
	// a^2 + b^2 = c^2

	//printf("sqrt(100) : %1f\n",sqrt(100));	// ��Ʈ
	//printf("pow(2,3) : %1f\n", pow(2, 3));	// ����
	//
	//struct SP sp1 = { 1,5 }; // �÷��̾� ��ǥ
	//struct SP sp2 = { 5,8 }; // ���� ��ǥ
	//
	//sp1.a = 4;
	//sp2.a = 3;
	//sp1.b = 3;
	//sp2.b = 7;
	//
	//double d2 = sqrt(pow(sp1.a - sp2.a, 2) + pow(sp1.b - sp2.b, 2));	// ���� ǥ���Ϸ����޴��� 2�� �ȳ־��� ���� 
	//
	//printf("d2 : %1f\n", d2);
	//
	//if (d2 >= 3.0)
	//{
	//	printf("���ݰ���\n");
	//}
	//else
	//{
	//	printf("���ݺҰ�\n");
	//}

	
	//double x = sp1.a - sp2.a;
	//double y = sp2.b - sp2.b;
	//
	//
	//double d = sqrt(pow(x, 2) + pow(y, 2));	// �ƴ� ���ذ� �Ȱ��µ�? 
	//
	//if (d >= 3.0)
	//{
	//	printf("���ݰ���\n");
	//
	//}
	//else
	//{
	//	printf("���ݺҰ�\n");
	//}


	
#pragma endregion

#pragma region �ڱ� ���� ����ü
	// �ڱ� �ڽŰ� ���� Ÿ���� �����͸� ����� �����ϰ� �ִ� ����ü�̴�.

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
	//struct Node* currentNode = &node1;	// �ߴ��� �� Ȯ���� �ϸ� ��� ������ ���� �� �� �ִ�.
	//
	//while (currentNode != NULL)
	//{
	//	printf("%d\n", currentNode->data);
	//	currentNode = currentNode->next;
	//}

#pragma region typedef
	/*
	* �ڷ����� ������ ���̴� Ű����� ���ϴ� �̸����� Ŀ�����ؼ� ����� �� �ִ�.
	* ������ �ڷ����� ������ ǥ���ϱ� ���� ����Ѵ�.
	* ����ü�� ������ �� typedef�� ����ϸ� struct�� �����ʰ� ������ �� �ִ�.
	* ��� ����: 
	* typedef struct 
	* { 
	* 
	* } Ŀ���� �ϰ� ���� ����ü ����;
	*/

	Player player;	// typedef�� �����ؼ� ����� ����ü
	
	strcpy_s(player.name, sizeof(player.name), "��ȣ��");
	strcpy_s(player.position, sizeof(player.position), "����");
	player.number = 26;
	
	printf("�̸� : %s\n", player.name);
	printf("������ : %s\n", player.position);
	printf("���ȣ : %d\n", player.number);
	
#pragma endregion

	
#pragma endregion


	return 0;
}