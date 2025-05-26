/*
* 작성일	: 2025-05-23
* 작성자	: 박효영
* 주제	: 반복문
*/
#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문이다.
#pragma region 증감연산자
	// 피연산자를 하나씩 증가시키거나 감소시킬 때 사용하는 연산자이다.

#pragma region 전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행하는 연산자이다.

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

#pragma region 후위 증감 연산자
	// 연산을 수행한 다음 변수의 값을 증감시키는 연산자이다.
	// 
	// int a = 0;
	// int b = a++;
	// 
	// printf("a 값 : %d\n", a);
	// printf("b 값 : %d\n", b);
	// 
	// b = a--;
	// printf("a 값 : %d\n", a);
	// printf("b 값 : %d\n", b);

#pragma endregion

#pragma endregion

#pragma region for문
	// 초기식을 연산하여 조건식의 결과에 따라 특정한 수만큼 반복하는 반복문이다.
	// 반복문이 동작하는 순서는 초기화 -> 조건 검사 -> 실행 -> 증감 구조 로 동작한다.


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

	 //// 역 출력
	 //for (int i = 10; i >= 0; i--)
	 //{
	 //	printf("%d\n", i);

	 //}

#pragma endregion

#pragma region  while문
	// 특정 조건을 만족할 때까지 계속해서 주어진 명령문을 실행하는 반복문이다.

	// 반복문을 순차적으로 실행하면서 조건 분기를 만나게 되면 어느쪽으로 실행 흐름이 흐를지 미리 예측한다.

	/*
	* while (조건)
	* {
	*
	*
	*
	*
	* }
	*/

#pragma region Do While문
	// 조건과 상관없이 한번의 작업을 수행한 다음 조건에 따라 명령문을 실행하는 반복문이다.
	// 반복문의 경우 미리 예측해서 실행하는 구조를 가진다.
	// 예측이 틀렸다면 현재 반복문 내의 조건 분기만 다시 검사하여 처리한다.

	// int x = 23;
	// 
	//  do
	//  {
	// 	 printf("★\n"); // ? 
	// 	 x++;
	// 
	//  } while (x < 5);
	// 
#pragma endregion


#pragma endregion

#pragma region 이중 for문
// for 문 안에 또 for문이 들어가 있는 것
//for (int i = 0; i < 3; i++)
//{
//	printf("i의 값 : %d\n", i);
//
//	for (int j = 0; j < 3; j++) 
//	{
//		printf("j의 값 : %d\n", j);
//	}
//	printf("===========\n");
//	
//}

#pragma endregion

#pragma region Continue문
	// 해당 조건문만 실행하지 않고 반복문은 이어서 실행하는 제어문이다.

	// continue : 건너뛰다.
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