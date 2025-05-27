#include <stdio.h>
#include "Library.h"
#define SIZE 5
#define MAX_ITEM 100

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때 
	// 기존에 저장했던 자료형을 다른 자료형으로 변환하는 과정이다.

#pragma region 암묵적 형 변환	(묵시적 형 변환)
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정이다. 
	// 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를 저장하게되면 암묵적으로 데이터 손실이 발생한다. 

	// int integer = 100;
	// float decimal = 36.5f;
	// 
	// printf("char 자료형의 크기 : %u byte\n", sizeof(integer + decimal));
	// printf("int 자료형의 크기 : %d byte\n", sizeof(int));

#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을 변환하는 과정이다.
	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과값만 가질 수 있다. 

	// 정수를 실수로 명시적 변환
	// int a = 10;
	// int b = 3;
	// 
	// float c =  (float)a / b;	
	// printf("%f\n", c);
	// 
	// // 실수를 정수로 명시적 변환
	// float f1 = 4.4f;
	// float f2 = 3.3f;
	// 
	// int a1 = (int)f1 + f2;
	// printf("%d\n", a1);


#pragma endregion

#pragma region 정수의 승격
	// char, short와 같은 크기가 작은 정수형 자료형은 연산할 때 자동으로 int형으로 변환된다.

	 char a = 3;		// 1byte	정수형 범위: -128 ~ 127
	 short b = 5;		// 2byte	정수형, 범위: -32,768 ~ 32,767
	 
	 int c = a + b;		// 정수 승격 후 자동으로 연산한다.
	 printf("정수의 승격시 변환되는 바이트 크기 : %ubyte\n", sizeof(c));
	 printf("정수의 승격시 변환되는 값 : %d\n", c);

	 printf("====================================================\n");

	// unsigned char, unsigned short도 예외없이 적용된다.
	 unsigned char a1 = 20;		// 1byte 양수만 취급(0 ~ 255)
	 unsigned short b2 = 40;	// 2byte 양수만 취급(0 ~ 65535)

	 int c2 = a1 + b2;			// 정수 승격 후 자동으로 연산한다.
	 printf("unsigned 자료형의 정수의 승격시 변환되는 바이트 크기 : %ubyte\n", sizeof(c2));
	 printf("unsigned 자료형의 정수의 승격시 변환되는 값 : %d\n", c2);

#pragma endregion


#pragma endregion

#pragma region 전처리기 
	// 프로그램이 컴파일되기 이전에 프로그램에 대한 사전 처리하는 과정이다. 
	// 전처리기는 컴파일러가 아닌 선행처리기에 의해 처리되는 문장이므로 명령문 끝에 ";"를 사용하지 않는다.

	// printf("channel 변수의 값 : %d\n", channel);

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정이다.
	// 매크로의 경우 자료형이 존재하지 않기에 메모리 공간을 가지고 있지 않다.		ex) MAX_ITEM = 40; <- 안됨
	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 실행될 때 매크로의
	// 대체 목록을 넣어야 하기에 프로그램의 크기가 커진다. 
	// ex) #define MAX_COUNT 20

	// printf("SIZE의 값 : %d\n", SIZE);
	// printf("MAX_ITEM의 값 : %d\n", MAX_ITEM);

#pragma endregion


#pragma endregion
}