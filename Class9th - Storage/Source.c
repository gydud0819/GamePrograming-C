#include <stdio.h>

/*
* void main, int main ������
*
*/

#pragma region ���� �ڵ�

#pragma region ���� ���� ���� �Լ�
//int stage = 1;	// �ʱ�ȭ ���� ������, ���� ���� ���� �Լ�
//
//void SetStage(int count)
//{
//	stage = count;
//}
#pragma endregion

#pragma region ���� ���� ���� �Լ�
//void Increase()		// ���� ���� ���� �Լ�
//{
//	static int score = 0;	// staitc ���� ���
//
//	score++;
//	printf("score : %d\n", score);
//
//}
#pragma endregion


#pragma endregion

int main()
{

#pragma region �޸� ����

#pragma region �ڵ� ����
	// ���α׷��� �����ϱ� ���� �ʿ��� �ڵ尡 ����Ǵ� �������� �Լ��� �ּҿ� ����� ����Ǵ� �����̴�.

#pragma endregion

#pragma region ������ ����
	// ���α׷��� ���۰� �Բ� �޸𸮿� ����ǰ� ���α׷��� ����� �� �޸𸮰� �����ǰ� �ʱ�ȭ�� �̷����
	// ���� ������ ���� ������ ����Ǵ� �޸� �����̴�.
#pragma endregion

#pragma region BSS ����
	// ���α׷��� ����� �� �ʱ�ȭ�� �̷������ ���� ���� ������ ���� ������ ����Ǵ� �޸� �����̴�.
#pragma endregion

#pragma region ���� ����
	// ���α׷��� �ڵ����� ����ϴ� �ӽ� �޸� �������� �Լ� ȣ��� �����Ǵ� ���� ������ �Ű� ������ ����Ǵ� �޸� �����̴�.
#pragma endregion

#pragma region �� ����
	// ����ڰ� ���� �޸� ������ �������ִ� �޸� �������� ������� �ʴ� ��� ����ڰ� ���� �޸𸮸� �����ؾ��ϴ� �����̴�.
	// free�� �����Ѵ�.
#pragma endregion

#pragma endregion

#pragma region ������ ����

#pragma region ���� ����
	// �Լ� ���ο��� ����� ������ �Լ� ���ο����� ������ �� �ְ� �Լ��� ������� �� �޸𸮿��� ������� Ư¡�� ������ �ִ� �����̴�. 
	// ������ �ٸ��� ���� �̸��� �������� ����� �� �ִ�.
	// ���� ������ ����� ���ÿ� �ʱ�ȭ ���� ������ ������ �޸� ��ġ�� �����ߴ� ���� ������ �ȴ�. (������ ���� ����.)
	//int x = 10;
	//
	//{
	//	int x = 20;
	//	printf("%d\n", x);
	//}
	//printf("%d\n", x);
#pragma endregion

#pragma region ���� ����
	// �Լ� �ܺο��� ����� ������ ���α׷��� ����� �� �޸𸮿� �ö󰡰� ���α׷��� ����Ǹ� �޸𸮿��� �����Ǵ� �����̴�.
	// ���� ������ ����� ���ÿ� �ʱ�ȭ�� �Ǿ����� ������ �ڵ����� �ʱ�ȭ �ȴ�. 

	//SetStage(2);
	//printf("stage : %d\n", stage);
	//printf("stage �ּ� : %p\n", &stage);
#pragma endregion

#pragma region ���� ����
	// ���α׷��� ����Ǵ� ���� �޸𸮿� �����ϰ� ����� ���� �������� ������ ������ Ư¡�� ������ �����̴�. 
	// ���� ������ �� �� ���� �ʱ�ȭ�� �̷������. 

	/*Increase();
	Increase();
	Increase();*/

#pragma endregion

#pragma endregion

	return 0;
}