#include <stdio.h>

enum Imagenation
{
	Ȳ��,
	û��,
	����,
	����,
	��ȣ
};

void main()
{
#pragma region ���ǹ�
	// � ������ �־��� �� �ش� ���ǿ� ���� ������ �����ϵ��� �����ϴ� ��ɹ��̴�.

#pragma region ���� ������
	// 2���� �ǿ������� ���� ���Ͽ� �� ����� 0 �Ǵ� 1�̶�� ������ ��Ÿ���� �������̴�.

	// > : ���� ���� �� ũ�ٸ�
	// < : ������ ���� �� ũ�ٸ�
	// >= : ���� ���� ũ�ų� ���ٸ�
	// <= : ������ ���� ũ�ų� ���ٸ�
	// == : ���� ���� �ٸ��ٸ�
	// != : ���� ���� �ٸ��ٸ� (!�� ����)

	// int s = 1 < 0;
	// int s1 = 1 > 0;
	// int s2 = 1 >=0;
	// int s3 = 1 <= 0;
	// int s4 = 1 != 0;
	// int s5 = 1 == 0;
	// 
	// printf("%d\n", s);
	// printf("%d\n", s1);
	// printf("%d\n", s2);
	// printf("%d\n", s3);
	// printf("%d\n", s4);
	// printf("%d\n", s5);

#pragma endregion

#pragma region if��
	// � Ư���� ������ ���Ͽ� ������ �´ٸ� ����Ǵ� ���ǹ��̴�.
	// if���� ������ 1�϶� ����ǰ� 0�϶� ������� �ʴ´�.

	// int exp = 5;
	// int maxExp = 5;
	// if (exp >= maxExp)	// �ִ� ����ġ���� ���� ����ġ�� �� ũ�� 
	// {
	// 	printf("1���� �����ߴ�.\n"); // ? 
	// }
	// else
	// {
	// 	printf("����ġ�� �����ϴ�.\n");
	// }

#pragma endregion

#pragma region else if��
	// �������� ������ ���������� �˻��ϰ� ���� �� ����ϴ� ���ǹ��̴�.
	// else if���� ��� ���� ���� ����� �� �ְ� if������ �ϳ��� �˻��ϴٰ� ���� ���� ������ �´� �б�� ����.

	// int age = 24;
	// if (age == 30)
	// 
	// {
	// 	printf("���� 30�̷�;\n");
	// }
	// else if (age == 24)
	// {
	// 	printf("24���̾� ><\n");
	// }

#pragma endregion

#pragma region  else
	// if���� ������ ���� ���ǹ����� ��� ������ ���� ���� �� ����Ǵ� ���ǹ��̴�.

	// int num = 0;
	// 
	// if (0 == 1)
	// {
	// 	printf("0�� ����� �ƴϴ�.\n");
	// }
	// else if (0 == -2)
	// {
	// 	printf("0�� ������ �ƴϴ�.\n");
	// }
	// else
	// {
	// 	printf("0�� ���, ������ �ƴ� 0�̴�.\n");
	// }

	// if���� ����� ��� ���ǹ��� ������ ���� �� ���� ���� �ִ� ���ǹ��� ����ȴ�. 
#pragma endregion

#pragma region �� ������
	// 2�� �̻��� ������ �����ϰų� �ϳ��� ������ ������Ű�� �������̴�.

#pragma region AND ������
	// 2�� ������ �´ٸ� ����Ǵ� �������̴�.
	// int a = 1;
	// int b = 1;
	// 
	// if (a >= 1 && b >= 1)
	// {
	// 	printf("���� ������ ��ġ�Ѵ�.\n");
	// }
#pragma endregion

#pragma region OR ������
	// 2���� ���� �� �ϳ��� ������ ����Ǵ� �������̴�.

	// ���ǹ��� �� ǥ������ ���ϴ� ���� ����� Ȯ���� ���ٸ� �� ������ �򰡸� �����Ѵ�. Short ?

	// int ball = 4;
	// int hit_by_pitch = 1;
	// 
	// if (ball >= 4 || hit_by_pitch == 1)	// ������ �ָ��ѵ� ������ 
	// {
	// 	printf("1�� ���̽��� ����Ѵ�.\n");
	// }
	// else
	// {
	// 	printf("Ÿ���� ���� �ִ´�.\n");
	// }


	// ���ܷ� �˾Ƶθ� ����.

	// int x = 0;
	// 
	// if (x != 0 || x++)	// �� �����̶� ���� ����� �Ѵ�. 
	// {
	// 	printf("���̴�?");
	// }

#pragma endregion

#pragma region NOT ������
	// �ϳ��� ������ ������Ű�� �������̴�.
	// 
	// int a = 0;
	// 
	// if (!a)	// 0�� �ƴϸ� 
	// {
	// 	printf("Power is on.\n");
	// }
	// else 
	// {
	// 	printf("Power is off.\n");
	// }
#pragma endregion

#pragma endregion

#pragma region ��и�
	// int x;
	// int y;
	// 
	// scanf_s("%d, %d", &x, &y);
	// 
	// if (x > 0 && y > 0)	// x, y�� 0���� Ŭ ��
	// {
	// 	printf("�� 1��и�\n");
	// }
	// 
	// else if(x < 0 && y > 0)		// x�� 0���� �۰� y�� 0���� ���� ��
	// {
	// 	printf("�� 2��и�\n");
	// }
	// 
	// else if (x < 0 && y < 0)
	// {
	// 	printf("�� 3��и�\n");
	// }
	// 
	// else if (x > 0 && y < 0)
	// {
	// 	printf("�� 4��и�\n");
	// }
	// else if (x != 0 && y == 0)
	// {
	// 	printf(" X ����\n");
	// }
	// 
	// else if (x == 0 && y != 0)
	// {
	// 	printf("Y ����\n");
	// }
	// 
	// else
	// {
	// 	printf("����\n");
	// }

#pragma endregion

#pragma region Switch��
	// � ����� ���� �� ������� ����Ǵ� ��ɹ��̴�.

	// switch������ ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ������ �� ����. 

	//switch (��)
	//{
	//default:
	//	break;
	//}

	/*enum Imagenation genius;
	printf("��ȣ���� �����ϼ���.\n");
	scanf_s("%d", &genius);

	switch (genius)
	{
	case Ȳ��:
		printf("Ȳ���� �����Ͽ����ϴ�.\n");
		break;
	case û��:
		printf("û���� �����Ͽ����ϴ�.\n");
		break;
	case ����:
		printf("������ �����Ͽ����ϴ�.\n");
		break;
	case ����:
		printf("������ �����Ͽ����ϴ�.\n");
		break;
	case ��ȣ:
		printf("��ȣ�� �����Ͽ����ϴ�.\n");
		break;

	default:

		break;
	}*/

	// int state;
	// 
	// scanf_s("%d", &state);
	// //system("cls");
	// 
	// switch (state)
	// {
	// case 1:
	// 	printf("1_ Idle State\n");
	// 	break;	// ���� ���ش�.
	// case 2:
	// 	printf("2_ Attak State\n");
	// 	break;
	// case 3:
	// 	printf("3_Die State\n");
	// 	break;
	// default:
	// 	printf("Exception\n");
	// 	break;
	// }
#pragma endregion

#pragma endregion

}