/*
* �ۼ���	: 2025-05-23
* �ۼ���	: ��ȿ��
* ����	: �ݺ���
*/
#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ��̴�.
#pragma region ����������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�ų �� ����ϴ� �������̴�.

#pragma region ���� ���� ������
	// ������ ���� ������Ų �Ŀ� ������ �����ϴ� �������̴�.

	// int a = 0;
	// int b = ++a;
	// 
	// printf("%d\n", a);
	// printf("%d\n", b);
	// 
	// b = --a;
	// 
	// printf("%d\n", a);
	// printf("%d\n", b);
#pragma endregion

#pragma region ���� ���� ������
	// ������ ������ ���� ������ ���� ������Ű�� �������̴�.
	// 
	// int a = 0;
	// int b = a++;
	// 
	// printf("a �� : %d\n", a);
	// printf("b �� : %d\n", b);
	// 
	// b = a--;
	// printf("a �� : %d\n", a);
	// printf("b �� : %d\n", b);

#pragma endregion

#pragma endregion

#pragma region for��
	// �ʱ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� ����ŭ �ݺ��ϴ� �ݺ����̴�.
	// �ݺ����� �����ϴ� ������ �ʱ�ȭ -> ���� �˻� -> ���� -> ���� ���� �� �����Ѵ�.


	/* for (int i = 1; i < 10; i++)
	 {
		for (int j = 1; j < 10; j++)
		{
			printf(" %d * %d = %d\n", i, j, i*j);
		}
			printf("===============\n");
	 }*/

	 /*for (int i = 0; i < 10; i++)
	 {
		 printf("*\n", i);
		 for (int j = 1; j < 10; j++)
		 {
			 printf("*\n", j, i);
		 }
	 }*/

	 //printf("==============================\n");

	 //// �� ���
	 //for (int i = 10; i >= 0; i--)
	 //{
	 //	printf("%d\n", i);

	 //}

#pragma endregion

#pragma region  while��
	// Ư�� ������ ������ ������ ����ؼ� �־��� ��ɹ��� �����ϴ� �ݺ����̴�.

	// �ݺ����� ���������� �����ϸ鼭 ���� �б⸦ ������ �Ǹ� ��������� ���� �帧�� �带�� �̸� �����Ѵ�.

	/*
	* while (����)
	* {
	*
	*
	*
	*
	* }
	*/

#pragma region Do While��
	// ���ǰ� ������� �ѹ��� �۾��� ������ ���� ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ����̴�.
	// �ݺ����� ��� �̸� �����ؼ� �����ϴ� ������ ������.
	// ������ Ʋ�ȴٸ� ���� �ݺ��� ���� ���� �б⸸ �ٽ� �˻��Ͽ� ó���Ѵ�.

	// int x = 23;
	// 
	//  do
	//  {
	// 	 printf("��\n"); // ? 
	// 	 x++;
	// 
	//  } while (x < 5);
	// 
#pragma endregion


#pragma endregion

#pragma region ���� for��
// for �� �ȿ� �� for���� �� �ִ� ��
//for (int i = 0; i < 3; i++)
//{
//	printf("i�� �� : %d\n", i);
//
//	for (int j = 0; j < 3; j++) 
//	{
//		printf("j�� �� : %d\n", j);
//	}
//	printf("===========\n");
//	
//}

#pragma endregion

#pragma region Continue��
	// �ش� ���ǹ��� �������� �ʰ� �ݺ����� �̾ �����ϴ� ����̴�.

	// continue : �ǳʶٴ�.
	// 

	// for (int i = 1; i <= 10; i++)
	// {
	// 	if (i % 3 == 0)
	// 	{
	// 		continue;
	// 	
	// 	}
	// 		printf("%d\n", i);
	// }
		

#pragma endregion


#pragma endregion

}