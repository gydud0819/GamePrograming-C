#include <stdio.h>

#pragma region 함수 예시 코드

void Process()
{
	printf("Process..\n");
}

void Add(int a, int b)		// 더하기
{
	printf("덧셈 : %d\n\n", a + b);	
	//return a + b;
}

void Minus(int a, int b)	// 빼기
{
	printf("뺄셈 : %d\n\n", a - b);
	//return a - b;
}

void Times(int a, int b)	// 곱하기
{
	printf("곱셈 : %d\n\n", a * b);
	//return a * b;
}

void Dvided(int a, int b)	// 나누기
{
	printf("나눗셈 : %d\n\n", a / b);
	//return a / b;
}

void Stats(int health, const char* name)	// 후에 클래스나 구조체를 매개 인자로 받아오고 자주 사용함.
{
	printf("체력 : %d\n", health);
	printf("이름 : %s\n", name);
}   // 매개 변수 넣어서 쓰는 함수

void Swap(int left, int right)	// Call by Value
{
	// 바뀌면 안된다고? 여따가 x y를 출력하라고?

	//int temp = left;
	//left = right;
	//right = temp;
	////printf("temp 값 : %d\n", temp);
	//printf("left = %d\n", left);
	//printf("right = %d\n", right);
}

void Swap2(int* x, int* y)	// Call by Reference
{
	int temp = *x;
	*x = *y;
	*y = temp;
	printf("x  = %d\n", *x);
	printf("y  = %d\n", *y);
}
#pragma endregion

void main()
{
#pragma region 함수(Function)
	// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합이다.
	// 함수는 프로그램이 실행 중일때 함수 호출 위치에서 해당 함수로 이동시킨 뒤 작업을 수행하고
	// 다시 원래 위치로 돌아오는 구조이다.
	//Process();
	//printf("=========\n");
#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수이다.
	// 매개 변수는 함수 내부에서만 연산이 이루어지고 여러 개의 매개 변수를 생성할 수 있다.
	// 문자열은 데이터 영역에 읽기 전용으로 저장된다? 쓰인다? 가리킨다?
	// 함수 이름 누르고 F12 누르면 함수 내용이 적힌 곳으로 바로 갈 수 있다. 

	//Stats(5, "가스트");
	//Stats(20, "스켈레톤");
	//Stats(20, "좀비");

	//Add(3, 5);
	//Minus(6, 8);
	//Times(7, 8);
	//Dvided(9, 4);
#pragma endregion
	
#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값이다.
	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의 자료형이 서로 일치해야한다.

	int x = 10;
	int y = 20;
	printf("x = %d\n", x);
	printf("y = %d\n\n", y);
	//
	//printf("swap했을 때\n\n");
	//printf("=================\n");

	//int temp = x;
	//x = y;
	//y = temp;
	//printf("temp 값 : %d\n", temp);

	//Swap(x,y);	// Call by Value
	Swap2(&x, &y);	// Call by Reference

	printf("=================\n");

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);

	//printf("=================\n");


#pragma endregion
	

	
#pragma endregion

}