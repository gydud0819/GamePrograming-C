#include <stdio.h>
#include "Library.h"
#define SIZE 5
#define MAX_ITEM 100

void main()
{
#pragma region �ڷ��� ��ȯ
	// ���� �ٸ� �ڷ����� ������ �ִ� �������� ������ �̷���� �� 
	// ������ �����ߴ� �ڷ����� �ٸ� �ڷ������� ��ȯ�ϴ� �����̴�.

#pragma region �Ϲ��� �� ��ȯ	(������ �� ��ȯ)
	// ���� �ٸ� �ڷ������� ������ �̷���� �� �ڷ����� ũ�Ⱑ ū �ڷ������� ��ȯ�Ǵ� �����̴�. 
	// ǥ�� ������ ���� �����Ϳ� ǥ�� ������ ū �����͸� �����ϰԵǸ� �Ϲ������� ������ �ս��� �߻��Ѵ�. 

	// int integer = 100;
	// float decimal = 36.5f;
	// 
	// printf("char �ڷ����� ũ�� : %u byte\n", sizeof(integer + decimal));
	// printf("int �ڷ����� ũ�� : %d byte\n", sizeof(int));

#pragma endregion

#pragma region ����� �� ��ȯ
	// ������ �̷������ ���� ����ڰ� ���� �ڷ����� ��ȯ�ϴ� �����̴�.
	// ������ �������� ������ �����ϰ� �Ǹ� ������ ������� ���� �� �ִ�. 

	// ������ �Ǽ��� ����� ��ȯ
	// int a = 10;
	// int b = 3;
	// 
	// float c =  (float)a / b;	
	// printf("%f\n", c);
	// 
	// // �Ǽ��� ������ ����� ��ȯ
	// float f1 = 4.4f;
	// float f2 = 3.3f;
	// 
	// int a1 = (int)f1 + f2;
	// printf("%d\n", a1);


#pragma endregion

#pragma region ������ �°�
	// char, short�� ���� ũ�Ⱑ ���� ������ �ڷ����� ������ �� �ڵ����� int������ ��ȯ�ȴ�.

	 char a = 3;		// 1byte	������ ����: -128 ~ 127
	 short b = 5;		// 2byte	������, ����: -32,768 ~ 32,767
	 
	 int c = a + b;		// ���� �°� �� �ڵ����� �����Ѵ�.
	 printf("������ �°ݽ� ��ȯ�Ǵ� ����Ʈ ũ�� : %ubyte\n", sizeof(c));
	 printf("������ �°ݽ� ��ȯ�Ǵ� �� : %d\n", c);

	 printf("====================================================\n");

	// unsigned char, unsigned short�� ���ܾ��� ����ȴ�.
	 unsigned char a1 = 20;		// 1byte ����� ���(0 ~ 255)
	 unsigned short b2 = 40;	// 2byte ����� ���(0 ~ 65535)

	 int c2 = a1 + b2;			// ���� �°� �� �ڵ����� �����Ѵ�.
	 printf("unsigned �ڷ����� ������ �°ݽ� ��ȯ�Ǵ� ����Ʈ ũ�� : %ubyte\n", sizeof(c2));
	 printf("unsigned �ڷ����� ������ �°ݽ� ��ȯ�Ǵ� �� : %d\n", c2);

#pragma endregion


#pragma endregion

#pragma region ��ó���� 
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� �����̴�. 
	// ��ó����� �����Ϸ��� �ƴ� ����ó���⿡ ���� ó���Ǵ� �����̹Ƿ� ��ɹ� ���� ";"�� ������� �ʴ´�.

	// printf("channel ������ �� : %d\n", channel);

#pragma region ��ũ��
	// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����̴�.
	// ��ũ���� ��� �ڷ����� �������� �ʱ⿡ �޸� ������ ������ ���� �ʴ�.		ex) MAX_ITEM = 40; <- �ȵ�
	// ��ũ���� ������ ������ ������ ����Ǹ�, �� ��ũ�ΰ� ����� �� ��ũ����
	// ��ü ����� �־�� �ϱ⿡ ���α׷��� ũ�Ⱑ Ŀ����. 
	// ex) #define MAX_COUNT 20

	// printf("SIZE�� �� : %d\n", SIZE);
	// printf("MAX_ITEM�� �� : %d\n", MAX_ITEM);

#pragma endregion


#pragma endregion
}