#include <stdio.h>
#include <stdarg.h>		

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

void Recursion(int count)
{
	// 얜 바로 나오넹 
	//for (int i = 0; i < count; i++) // 이거쓰면 안되나 
	//{
	//	printf("Recursion\n");

	//}

	// 중단점 찍으면서 그림이랑 비교해보기 
	//if (count <= 0)
	//{
	//
	//	return;
	//}
	//
	//printf("Recursion\n");
	//
	//Recursion(count - 1);

	// 리버스 코드 
	/*if (count >= 3)
	{
		return;
	}

	printf("Recursion\n");

	Recursion(count + 1);*/

}

inline void OnCollision()
{
	printf("OnCollision\n");
}

void Average(int count, ...)	// ...을 사용하면 가변 인수 목록을 사용하는 것으로 인지한다.
{
	/*
	* va_list	: 가변 인수의 메모리 주소를 저장하는 포인터 변수
	* va_start	: 가변 인수를 가져올 수 있도록 포인터를 설정하는 함수
	* va_arg	: 가변 인수 포인터에서 특정 자료형 크기만큼 값을 가져오는 함수
	* va_end	: 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수
	*/

	// 평균 구하기 
	//double temp = 0.0f;
	//va_list average;
	//va_start(average, count);
	//
	//for (int i = 0; i < count; i++)
	//{
	//	temp += va_arg(average, int); // 나눠야하니까..? 먼소리여
	//	
	//}
	//double aver = temp / count;
	//
	//printf("평균 :%1f\n", average);
	//va_end(average);
}

void Provide()	// 매개변수 넣어야하나용..?
{
	printf("Provide\n");
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

	//int x = 10;
	//int y = 20;
	//printf("x = %d\n", x);
	//printf("y = %d\n\n", y);
	//
	//printf("swap했을 때\n\n");
	//printf("=================\n");

	//int temp = x;
	//x = y;
	//y = temp;
	//printf("temp 값 : %d\n", temp);

	//Swap(x,y);	// Call by Value
	//Swap2(&x, &y);	// Call by Reference
	//
	//printf("=================\n");

	//printf("x = %d\n", x);
	//printf("y = %d\n", y);

	//printf("=================\n");


#pragma endregion

#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수이다.
	// return : 함수를 종료시킨다. 

	//Recursion(3);
#pragma endregion

#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다 함수의 코드를 복사하여 전달하는 방식의 함수이다.
	// 인라인 함수는 함수를 호출하는 과정이 없기에 처리 속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에 실행 파일의 크기가 커지게 된다.

	// 이벤트 기반? 

	// 오버헤드가 뭔지 찾아보기 

	//OnCollision();
#pragma endregion

#pragma region 가변 인수 목록
	// 고정 되어 있는 매개 변수 외에 개수가 정해지지 않은 인수를 추가로 받을 수 있는 인수이다. 

	//Average(1, 10);
	//Average(2, 10, 20);
	//Average(3, 10, 20, 30);
	//Average(4, 10, 20, 30, 40);
	Average(5, 14, 23, 37 ,44, 54);
#pragma endregion

#pragma region 함수 포인터
	// 함수의 주소값을 저장하고 가리킬 수 있는 포인터 변수이다.
	
	void(*fptr)();
	fptr = Provide;
	fptr();
	//Provide();
#pragma endregion


#pragma endregion


}