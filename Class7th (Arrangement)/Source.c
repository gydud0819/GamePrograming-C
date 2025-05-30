#include <stdio.h>
#define 가로 5
#define 세로 5
void main()
{
#pragma region 배열(array)
	// 같은 자료형의 변수들로 이루어진 유한 집합이다. 
	// 배열의 경우 첫 번쨰 원소는 0부터 시작한다.
	// 배열은 원하는 원소에 원하는 값을 저장할 수 있고, 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가진다.
	// 배열의 크기는 생략할 수 있으며 초기화 목록에서 설정한 요소에 따라 크기가 결정된다. 

	/*int array[5] = { 1,2,3,4,5 };
	for (int i = 0; i < 5; i++)
	{
		printf("% ", array[i]);
	}*/

	//int array2[5];
	//for (int i = 0; i < 5; i++)
	//{
	//	scanf_s("%d", &array2[i]);	
	//}
	//
	//printf("=================================\n");
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d ", array2[i]);
	//}

	//printf("=================================\n");

	// 이렇게도 할 수 있음 
	//int array3[5];
	//
	//// 배열 크기 구하기?
	//int size = sizeof(array3) / sizeof(int);	// 자료형으로 나눠주면 된대. 집가서 다시해
	//
	//for (int i = 0; i < size; i++)
	//{
	//	array3[i] = (i + 1) * 10;
	//	printf("array3[%d] = %d\n", i, array3[i]);
	//}

	//int list[5] = { 1,2,3,4,5 };
	//
	//int* ip = &list;
	//*ip = 99; 
	//
	//printf("%p\n", list);	//
	//printf("%d\n", *ip);		 
	//
	//ip++;
	//
	//printf("%p\n", ip);	
	//printf("%p\n", &list[1]);

	//float container[] = { 11.2f, 12.4f, 15.6f, 23.5 };
	//printf("%p\n", &container);

#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합이다.
	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있다.
	// 문자열 상수는 데이터 영역에 읽기 전용 공간에 저장되기에 문자열의 값을 변경할 수 없다. 
	// 문자열은 포인터와 배열 2가지 방법으로 표현할 수 있다.
	// 문자열은 공백도 같이 메모리 공간에 포함하여 크기가 결정되고 마지막에 문자열의 끝을 알려주는 제어 문자(NULL)이 추가된다. 
	// 제어문자 표시 방법 : '\0'
	// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지 메모리 공간에 저장된다. 

	// 포인터로 저장하는 방법
	//const char* word = "Home";
	//printf("word 문자열 : %s\n", word);
	//printf("word 주소 : %p\n", &word);
	//
	//
	//word = "MineCra\0ft";
	//printf("word 문자열 : %s\n", word);

	// 배열로 저장하는 방법 (배열은 포인터 상수이다.)
	//char name[] = "Chloe";
	//printf("%s\n", name);
	////printf("%p\n", &name);
	//
	//name[0] = 'B';
	//printf("%s\n", name);

	//name = "School"; // 사용할 수 없는 이유 : 

// 아스키 코드 vs 유니 코드 비교해서 실습 해보기 
#pragma region ASCII(아스키 코드)
	// 영문 알파벳을 사용하는 문자 인코딩이다.
	// 영문 알파벳을 기반으로 하기 때문에 아스키 코드로 표현할 수 있는 문자가 한정적이다.
	// 7비트로 영문 알파벳, 숫자, 일부 특수문자, 제어문자를 포함해 128개를 표현한다.

	// ex)
	//char a = 'B';
	//printf("ASCII 숫자 : %d\n", a);	// 출력값 : 66 (ASCII 코드값)
	//printf("ASCII 문자 : %c\n\n", a);	// 출력값 : B (ASCII 코드값)


#pragma endregion

#pragma region 유니 코드
	// 전 세계의 모든 문자를 포함하는 범용 문자 인코딩이다.
	// 각 문자별로 고유 코드 포인트를 부여하고 기본적으로 16비트(65,536자)를 지원한다. 
	// 보충판을 통해 16비트 그 이상 수십만 개의 문자까지도 표현할 수 있다 
	// 거의 모든 문자를 지원하기 때문에 국제적으로 널리 사용된다. (웹, 모바일 등)
	// 인코딩 방식이 다양하고 UTF-8은 0~127 범위에서 아스키와 동일한 방식으로 인코딩한다.

	// ex)
	//printf("유니코드 : \ud558");

#pragma endregion


#pragma endregion

#pragma region (이차원 배열)
	// 배열의 요소로 또 다른 배열을 가지는 배열이다.
	// 2차원 배열은 행과 열로 구분되며 앞에 있는 배열은 열을 의미하고 뒤에 있는 배열은 행을 의미한다. 
	// for문 쓰면 표현하기 쉽다. 

	//int array[3][3] =
	//{
	//	{1,2,3},
	//	{4,5,6},
	//	{7,8,9}
	//};
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	for (int j = 0; j < 3; j++)
	//	{
	//		printf("%d ", array[i][j]);
	//	}
	//	printf("\n");
	//}

	//int array[세로][가로] =
	//{
	//	"######",
	//	"#    #",
	//	"#    #",
	//	"######",
	//};	
#pragma endregion

}