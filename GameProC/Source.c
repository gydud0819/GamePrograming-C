#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������̴�.
	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��Ѵ�.
	// �ּ� Ȯ�� �� ���� %p �� ����Ѵ�. (��� �����)

	// int data = 10;
	// printf("data�� �ּ� �� : %p\n", &data);
	// 
	// char a = 'C';
	// printf("a�� �ּ� �� : %p\n", &a);

#pragma endregion

#pragma region scanf_s �Լ�
	// ǥ�� �Է� �Լ��� ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��̴�.
	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� �����͸� �����ߴٰ� �Է��ϴ� ����
	// ���� ���� ������ ���α׷��� �����Ѵ�. 
	// scanf_s �Լ��� ����� �� '\n'�� ����ϸ� �Է��� 2�� ���� ������ \n ����� ����õ�Ѵ�.
	// �񵿱� �����̴�.

	// int a;
	// ǥ�� �Է� �Լ��� �Է��� ������ �� ���� ���� �۾����� �Ѿ �� ����.
	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸� ���� �����ڿ� ����
	// �Է��� �� �ִ� �������� �������� ������ �����ȴ�. 
	// scanf_s("%d", &a);	 
	// printf("a : %d\n", a);

	
	
#pragma endregion

#pragma region ������
	// �޸��� �ּҰ��� ������ �� �ִ� �����̴�.
	// ������ ������ �ڽ��� �޸� ������ ������ ������
	// ������ ������ ������ ���� �ּҸ� �����ϰ� �Ǹ� �ش� ������ ���� �ּҸ� ����Ű�� �ȴ�. 
	// �ۼ� ��� : �ڷ���* ����

	// ������ ������ �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� ���⿡ �����Ͱ� ����Ű�� �޸��� �ڷ����� ��������� �Ѵ�.

	//int a = 1;
	//int storage = 20;
	//int* ip = &a;
	//*ip = 99;	// ����ó�� ����� �� �ִ�.
	//
	//printf("a�� �ּҰ�: %p\n", &a);
	//printf("ip�� ��: %p\n", ip); // ��� �մ�? ����Ų��?
	//
	//printf("===============================\n");
	//
	//printf("a�� ��: %d\n", a);	// 1���� 99�� �ٲ����.
	//printf("�������� ��: %d\n", *ip); 
	//
	//printf("===============================\n");
	//// ������ ������ ũ��� �߾� ó�� ��ġ�� �ѹ��� ó���� �� �ִ� ũ��� �������� �ѹ��� ó���� �� �ִ� ũ���
	//// �ü���� ���� �����ȴ�.
	//
	//ip = &storage;
	//
	//printf("storage �ּҰ�: %p\n", &storage);
	//printf("ip ��: %p\n", ip);
	//printf("ip ������ : %d\n", *ip); ^-^;;
	//printf("������ ũ�� : %u byte\n", sizeof(ip));

	//printf("ip ������ ũ�� : %u byte\n", sizeof(ip));


#pragma endregion

#pragma region ��� ���� ������ �̰� �󵥿�..
	// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ� �ִ� ���� ������ �� ������ �����Ǿ� �ִ� �������̴�.
	// �ڷ����� ���ȭ �Ǿ��մ�?
	// ������ ���� ���˾Ƶ������;;;;;;;;;;;;; 
	// ��� ���� ������ : const �ڷ���* ����
	//int height = 10;	// ����(����)
	//int width = 20;	// ����
	//
	//printf("height �ּҰ�: %p\n", &height);	
	//printf("width �ּҰ�: %p\n", &width);
	//
	//const int* pointer = &height;
	//printf("pointer�� �� : %p\n", pointer);
	////*pointer = 23;
	//pointer = &width;
	//printf("pointer�� �� : %p\n", pointer);
	//printf("%p\n", pointer);
#pragma endregion

#pragma region ������ ���
	// ������ ������ ����Ű�� �ִ� �ּ� ���� ������ �� ������ �����Ǿ� �ִ� �������̴�.
	// �ڷ���* const ����
	//int a = 20;
	//int b = 11;
	//
	//int* const pointer = &a;
	//
	//printf("pointer �ּҰ� : %p\n", pointer);
	//printf("a �ּҰ� : %p\n", &a);
	//printf("a �� : %d\n", *pointer);
	//*pointer = 99;
	//printf("����� �� : %d\n", *pointer);

	//pointer = &b;		
	
	//printf("�ּҰ� : %p\n", pointer);
	//printf("�� : %d\n", *pointer);
#pragma endregion

#pragma region ���� ������
	// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� �������̴�.

	char a = 'C'; 
	int b = 20;
	float c = 33.2f;

	void* vpointer = &a;
	//*vpointer = 'A';	
	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����Ƿ� ���� �����Ͱ� ����Ű�� ������ �ڷ������� ��ȯ����� �Ѵ�.
	
	vpointer = &a;
	*(char*)vpointer = 'B';
	printf("�ּҰ� : %p\n", &vpointer);
	printf("�� : %c\n", a);

	vpointer = &b;
	*(int*)vpointer = 10;
	printf("�ּҰ� : %p\n", &vpointer);
	printf("�� : %d\n", b);

	vpointer = &c;
	*(float*)vpointer = 7.5f;
	printf("�ּҰ� : %p\n", &vpointer);
	printf("�� : %f\n", c);

	



	// ���� �����ʹ� �޸� �ּҿ� �����ؼ� 

#pragma endregion

}