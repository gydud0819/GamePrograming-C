/*
* 작성일	: 2025-05-20
* 작성자	: 박효영 
* 주제	: 
*/

#pragma region 변수
/*
* main 함수는 프로그램의 진입점 역할을 하는 함수
* 데이터를 저장할 수 있는 메모리 공간을 생성하는 것이다. 
*/
#pragma endregion

#pragma region 자료형
/*
* 데이터를 저장하기 위해 데이터의 형태를 정해주는 것이다.
* 각각의 자료형마다 크기가 정해져 있다.
* 바이트(byte) 단위로 구성되어 있다.  1byte = 8bit
* 
* 자료형에 따라 저장할 수 있는 종류와 범위가 결정된다. 
* 자료형 변수의 이름 = 데이터; 
* 
* 정수 - int				ex. 100
* 실수 - double, float	ex. 23.5
* 문자 - char			ex. 'S'
* 문자열 - string?		ex. "Vinila"
* 
* char a = 'A';
* int a = 100;
* float c = 23.5f;
* 
* 변수의 메모리 공간은 프로그램이 실행될 때 마다 변경된다. 
*/

#pragma endregion

/*
* 개발에서 중요한 것은 디버깅이다. 
*/

#include <stdio.h>	// standard input&output (표준 입출력)

void main()	
{
	printf("hi\n");

	char a = 'A';
	int b = 100;
	float c = 23.5f;

}