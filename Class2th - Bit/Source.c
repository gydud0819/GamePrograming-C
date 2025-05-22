/*
* 작성일	: 2025-05-21,22
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
	// 2개의 피연산자가 모두 1이면 1을 반환하는 연산자이다.					0 0 0
	//int x = 10;	// 0000 1100										0 1	0	
	//int y = 6;	// 0000 0110										1 0 0
																	//	1 1	1	
	//printf("두 변수를 AND 연산한 값 : %d\n", x & y);
#pragma endregion

#pragma region OR 연산자
	// 2개의 피연산자 중에 하나라도 1이 있다면 1을 반환하는 연산자이다.
	//int a = 8;	// 0000 1000	
	//int b = 12;	// 0000 1100 
	//
	//printf("a|b의 값: %d\n", a | b);
#pragma endregion

#pragma region XOR 연산자
	// 2개의 피연산자가 서로 같으면 0을 반환하고 다르면 1을 반환하는 연산자이다. 
	// 사용하는 기호는 ^
	/*
	* 0		0	0
	* 0		1	1
	* 1		0	1
	* 1		1	0
	*/
	//int x = 2;	// 0000 0010
	//int y = 7;	// 0000 0111	
	//			// ---------
	//			// 0000 0101 => 5
	//
	//printf("XOR 연산한 결과 값 : %d\n", x ^ y);
#pragma endregion

#pragma region NOT 연산자
	//  비트를 반전시키는 연산자이다. ~
	// 0을 1로 1을 0으로 (0 -> 1, 1 -> 0)
	//char packet = 14;	// 0000 1110
	//	                // ---------
	//	                // 1111 0001 
	//	                // 
	//printf("NOT 연산 결과: %d", ~packet);

	// 비트의 경우 가장 앞에 있는 비트는 부호를 나타낸다. (-, +)
	// 앞자리가 1인 경우 값은 음수가 된다. 
#pragma endregion

#pragma region 시프트 연산자
	// 값의 모든 비트를 지정한 수만큼 특정한 위치로 이동시키는 연산자이다.
	//char data = 10;	// 0000 1010
	//				// 0010 1000(왼쪽 시프트)	-> 32+8 = 40	(오른쪽 시프트) 0000 0010 2^1=2;
	//printf("기본 값 : %d\n", data);
	//printf("왼쪽으로 시프트 연산한 값 : %d\n", data << 2);
	//printf("오른쪽으로 시프트 연산한 값 : %d\n", data >> 2);
#pragma endregion

#pragma region 오버플로우
	// 특정한 자료형이 표현할 수 있는 최대값의 범위를 넘어서 연산을 수행하는 과정이다. 
	//char byte = 129;	// 127 0 1 1 1 1 1 1 1			
	//
	//printf("byte 변수의 값 : %d\n", byte);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하고, 
	// 실수일때 오버플로우가 발생하면 infinity라는 값으로 출력된다. 
#pragma endregion

#pragma region 언더플로우
	// 특정한 자료형이 표현할 수 있는 최솟값의 범위를 넘어서 연산을 수행하는 과정이다.
	// 언더플로우는 부호 없는 자료형에서도 똑같이 발생하고,
	// 실수일 때 언더플로우가 발생하면 0이라는 값으로 출력된다. 

	//char code = -129;	// 1 0 0 0 0 0 0 0
	//					// 0 1 1 1 1 1 1 1 
	//printf("code 값: %d\n", code);
#pragma endregion

#pragma region 부호없는 자료형
	// 정수값을 저장할 수 있는 자료형 중에서, 
	// 부호 비트없이 양의 정수와 0만을 표현할 수 있는 자료형이다. 

	//unsigned int exp = -1;
	//printf("exp 값: %u\n", exp);
	//
	//exp = 4294967295;
	//printf("exp 값: %d\n", exp);

	// 실수는 IEEE754 구조가 부호 비트를 포함하고 있으므로 부호없이 사용할 수 없다.
#pragma endregion

#pragma region 실수를 저장하는 방법 (부동소수점 표현)
	double atk = 0.3;
	printf("atk 값 : %.20f\n", atk);		// .16까진 정상적으로 출력되지만 17부터는 깨진다. 근사값같은데 

#pragma region 고정소수점
	// 소수점의 위치를 고정하여 소수점의 위치를 나타내는 방법이다.

	// 고정 소수점은 정수부와 소수부의 크기가 작으므로 표현할 수 있는 범위가 한정되어 있다. 
#pragma endregion

#pragma region 부동소수점
// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법이다.

// 가수부에 있는 비트중에서 가장 왼쪽에 있는 수는 표현하지 않는다.
#pragma endregion


#pragma endregion


}

