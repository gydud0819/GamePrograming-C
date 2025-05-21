/*
* 작성일	: 2025-05-21
* 작성자	: 박효영
* 주제	: 비트와 연산
*/

#include <stdio.h>

#pragma region (10)진수를 (2)진수로 변환하는 과정
//10진수를 1이 될 때까지 계속 2로 나누어 준 다음
//나눈 위치의 나머지 값을 아래에서 위 순서로 정렬한다.
#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타낸다.

	// 각각의 비트에 1이 있다면 1과 2의 제곱 위치를 계산한 다음
#pragma endregion

void main()
{
#pragma region 비트
	//데이터를 나타내는 최소 단위이다.
	//0과 1로 구성되어 있다.
	
	//메모리는 비트 단위로 데이터를 저장할 수 있고,
	//1개의 비트에는 0 또는 1의 값만 저장할 수 있다.
#pragma endregion

#pragma region 비트 연산자
	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자
#pragma endregion

#pragma region AND 연산자
	// 2개의 피연산자가 모두 1이면 1을 반환하는 연산자이다.
	//int x = 10;	// 0000 1100
	//int y = 6;	// 0000 0110

	//printf("두 변수를 AND 연산한 값 : %d\n", x & y);

#pragma region OR 연산자
	// 2개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자이다.
	int a = 8;	// 0000 1000	
	int b = 12;	// 0000 1100 

	printf("a|b의 값: %d\n", a | b);
#pragma endregion

#pragma endregion



}

