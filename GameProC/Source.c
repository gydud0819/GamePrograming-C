#include <stdio.h>

#pragma region �Լ� ���� �ڵ�

void Process()
{
	printf("Process..\n");
}

void Add(int a, int b)		// ���ϱ�
{
	printf("���� : %d\n\n", a + b);	
	//return a + b;
}

void Minus(int a, int b)	// ����
{
	printf("���� : %d\n\n", a - b);
	//return a - b;
}

void Times(int a, int b)	// ���ϱ�
{
	printf("���� : %d\n\n", a * b);
	//return a * b;
}

void Dvided(int a, int b)	// ������
{
	printf("������ : %d\n\n", a / b);
	//return a / b;
}

void Stats(int health, const char* name)	// �Ŀ� Ŭ������ ����ü�� �Ű� ���ڷ� �޾ƿ��� ���� �����.
{
	printf("ü�� : %d\n", health);
	printf("�̸� : %s\n", name);
}   // �Ű� ���� �־ ���� �Լ�

void Swap(int left, int right)	// Call by Value
{
	// �ٲ�� �ȵȴٰ�? ������ x y�� ����϶��?

	//int temp = left;
	//left = right;
	//right = temp;
	////printf("temp �� : %d\n", temp);
	//printf("left = %d\n", left);
	//printf("right = %d\n", right);
}

void Swap2(int* x, int* y)	// Call by Reference
{
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("x  = %d\n", *x);
	printf("y  = %d\n", *y);
}
#pragma endregion

void main()
{
#pragma region �Լ�(Function)
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� �����̴�.
	// �Լ��� ���α׷��� ���� ���϶� �Լ� ȣ�� ��ġ���� �ش� �Լ��� �̵���Ų �� �۾��� �����ϰ�
	// �ٽ� ���� ��ġ�� ���ƿ��� �����̴�.
	//Process();
	//printf("=========\n");
#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� �����̴�.
	// �Ű� ������ �Լ� ���ο����� ������ �̷������ ���� ���� �Ű� ������ ������ �� �ִ�.
	// ���ڿ��� ������ ������ �б� �������� ����ȴ�? ���δ�? ����Ų��?
	// �Լ� �̸� ������ F12 ������ �Լ� ������ ���� ������ �ٷ� �� �� �ִ�. 

	//Stats(5, "����Ʈ");
	//Stats(20, "���̷���");
	//Stats(20, "����");

	//Add(3, 5);
	//Minus(6, 8);
	//Times(7, 8);
	//Dvided(9, 4);
#pragma endregion
	
#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���̴�.
	// �μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������ �ڷ����� ���� ��ġ�ؾ��Ѵ�.

	int x = 10;
	int y = 20;
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
	//
	//printf("swap���� ��\n\n");
	//printf("=================\n");

	//int temp = x;
	//x = y;
	//y = temp;
	//printf("temp �� : %d\n", temp);

	//Swap(x,y);	// Call by Value
	Swap2(&x, &y);	// Call by Reference

	printf("=================\n");

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);

	//printf("=================\n");


#pragma endregion
	

	
#pragma endregion

}