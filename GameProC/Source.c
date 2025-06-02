#include <stdio.h>
#include <stdarg.h>		

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

void Recursion(int count)
{
	// �� �ٷ� ������ 
	//for (int i = 0; i < count; i++) // �̰ž��� �ȵǳ� 
	//{
	//	printf("Recursion\n");

	//}

	// �ߴ��� �����鼭 �׸��̶� ���غ��� 
	//if (count <= 0)
	//{
	//
	//	return;
	//}
	//
	//printf("Recursion\n");
	//
	//Recursion(count - 1);

	// ������ �ڵ� 
	/*if (count >= 3)
	{
		return;
	}

	printf("Recursion\n");

	Recursion(count + 1);*/

}

inline void OnCollision()
{
	printf("OnCollision\n");
}

void Average(int count, ...)	// ...�� ����ϸ� ���� �μ� ����� ����ϴ� ������ �����Ѵ�.
{
	/*
	* va_list	: ���� �μ��� �޸� �ּҸ� �����ϴ� ������ ����
	* va_start	: ���� �μ��� ������ �� �ֵ��� �����͸� �����ϴ� �Լ�
	* va_arg	: ���� �μ� �����Ϳ��� Ư�� �ڷ��� ũ�⸸ŭ ���� �������� �Լ�
	* va_end	: ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ�
	*/

	// ��� ���ϱ� 
	//double temp = 0.0f;
	//va_list average;
	//va_start(average, count);
	//
	//for (int i = 0; i < count; i++)
	//{
	//	temp += va_arg(average, int); // �������ϴϱ�..? �ռҸ���
	//	
	//}
	//double aver = temp / count;
	//
	//printf("��� :%1f\n", average);
	//va_end(average);
}

void Provide()	// �Ű����� �־���ϳ���..?
{
	printf("Provide\n");
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

	//int x = 10;
	//int y = 20;
	//printf("x = %d\n", x);
	//printf("y = %d\n\n", y);
	//
	//printf("swap���� ��\n\n");
	//printf("=================\n");

	//int temp = x;
	//x = y;
	//y = temp;
	//printf("temp �� : %d\n", temp);

	//Swap(x,y);	// Call by Value
	//Swap2(&x, &y);	// Call by Reference
	//
	//printf("=================\n");

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);

	//printf("=================\n");


#pragma endregion

#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��̴�.
	// return : �Լ��� �����Ų��. 

	//Recursion(3);
#pragma endregion

#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ���� �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��̴�.
	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ ���⿡ ó�� �ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������ ���� ������ ũ�Ⱑ Ŀ���� �ȴ�.

	// �̺�Ʈ ���? 

	// ������尡 ���� ã�ƺ��� 

	//OnCollision();
#pragma endregion

#pragma region ���� �μ� ���
	// ���� �Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ���� �μ��� �߰��� ���� �� �ִ� �μ��̴�. 

	//Average(1, 10);
	//Average(2, 10, 20);
	//Average(3, 10, 20, 30);
	//Average(4, 10, 20, 30, 40);
	Average(5, 14, 23, 37 ,44, 54);
#pragma endregion

#pragma region �Լ� ������
	// �Լ��� �ּҰ��� �����ϰ� ����ų �� �ִ� ������ �����̴�.
	
	void(*fptr)();
	fptr = Provide;
	fptr();
	//Provide();
#pragma endregion


#pragma endregion


}