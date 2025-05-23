#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문이다.

#pragma region 관계 연산자
	// 2개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타내는 연산자이다.

	// > : 왼쪽 값이 더 크다면
	// < : 오른쪽 값이 더 크다면
	// >= : 왼쪽 값이 크거나 같다면
	// <= : 오른쪽 값이 크거나 같다면
	// == : 값이 서로 다르다면
	// != : 값이 서로 다르다면 (!는 부정)

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

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 조건문이다.
	// if문은 조건이 1일때 실행되고 0일때 실행되지 않는다.

	// int exp = 5;
	// int maxExp = 5;
	// if (exp >= maxExp)	// 최대 경험치보다 얻은 경험치가 더 크면 
	// {
	// 	printf("1레벨 증가했다.\n"); // ? 
	// }
	// else
	// {
	// 	printf("경험치가 부족하다.\n");
	// }

#pragma endregion

#pragma region else if문
	// 여러개의 조건을 순차적으로 검사하고 싶을 때 사용하는 조건문이다.
	// else if문의 경우 여러 개를 사용할 수 있고 if문부터 하나씩 검사하다가 가장 먼저 조건이 맞는 분기로 들어간다.

	// int age = 24;
	// if (age == 30)
	// 
	// {
	// 	printf("누가 30이래;\n");
	// }
	// else if (age == 24)
	// {
	// 	printf("24살이야 ><\n");
	// }

#pragma endregion

#pragma region Switch문 (월 예정)

#pragma endregion

#pragma endregion

}