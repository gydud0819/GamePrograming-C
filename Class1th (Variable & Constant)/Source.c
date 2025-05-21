/*
* 작성일	: 2025-05-20, 21
* 작성자	: 박효영
* 주제	: 변수와 자료형
*/

#pragma region 변수
/*
* main 함수는 프로그램의 진입점 역할을 하는 함수
* 데이터를 저장할 수 있는 메모리 공간을 생성하는 것이다.
*
* 변수는 프로그램이 실행되는 동안 값을 바꿀 수 있고
* 원래 저장되어 있는 값은 새로 저장된 값에 의해 지워진다.
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

#pragma region 형식 지정자
/*
* 단일 문자 %c - char
* 정수 %d - int
* 실수 %f - float, double
*
*
* 개행문자(?) : \n
*/
#pragma endregion

#pragma region 네이밍 컨벤션
/*
* camel 표기법	: underScore 변수
* pascal 표기법	: Attack() 함수 (첫글자를 대문자로)
* snake 표기법	: MAX_SIZE 매크로 (모두 대문자로 쓰고 띄어쓰기가 필요할 때 _를 사용한다)
*/
#pragma endregion

#include <stdio.h>	// standard input&output (표준 입출력)

void main()
{
#pragma region 변수랑 자료형

	//char a = 'A';
	//int b = 100;
	//float c = 23.5f;
	//a = 'C';
	//b = 23;
	//c = 34.2f;
	//printf("변수값 %c\n", a);	// char
	//printf("변수값 %d\n", b);	// int
	//printf("변수값 %f\n", c);	// float
#pragma endregion

#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대문자와 소문자를 구분하여 사용할 수 있다.
	// ex. int score = 100;
	// int SCORE = 50;

	// 2. 변수의 이름으로 예약어를 사용할 수 없다. 
	// ex. int int = 10;

	// 3. 변수의 이름에 공백이 포함될 수 없다.
	// ex. int x value = 10;	-> 굳이 띄워서 쓰겠다하면 4번처럼 _사용하기

	// 4. 변수의 이름으로 특수 기호는 "_", "$"만 사용할 수 있다.
	// ex. int x_value = 30;	

	// 5. 변수의 이름은 숫자로 시작할 수 없다.
	// ex. int 5day = 5; -> 사용 못함
	// int five = 5;
#pragma endregion

#pragma region 상수

	// 프로그램 실행 중에 더 이상 값이 변경되지 않는 고정된 메모리이다.
	// const float pi = 3.141592f;
	// pi = 2.345610f;	-> 바뀔 수 없다. 
	// 상수의 경우 메모리 공간을 가지고 있지 않은 상수를 리터럴 상수라고 한다.	리터럴: 3.141592
	// 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 한다.	심볼릭 : pi
#pragma endregion

#pragma region 산술 연산자
	/*
	* 1. 변수 = 변수 + 리터럴 상수
	* 2. 변수 = 리터럴 상수 - 심볼릭 상수
	* 3. 변수 = 변수 * 심볼릭 상수
	* 4. 변수 = 변수 / 리터럴 상수
	* 5. 변수 = 리터럴 상수 % 리터럴 상수
	*
	*
	*/

	int a1, a2, a3, a4, a5;

	int a = 20;
	const int c = 5;

	a1 = a + 15;
	a2 = 15 - c;
	a3 = a * c;
	a4 = a / 15;
	a5 = 15 % c;

	printf("%d\n", a1);
	printf("%d\n", a2);
	printf("%d\n", a3);
	printf("%d\n", a4);
	printf("%d\n", a5);

#pragma endregion


}