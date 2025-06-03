#include <stdio.h>

/*
* void main, int main 차이점
*
*/

#pragma region 예시 코드

#pragma region 전역 변수 예제 함수
//int stage = 1;	// 초기화 해준 데이터, 전역 변수 예제 함수
//
//void SetStage(int count)
//{
//	stage = count;
//}
#pragma endregion

#pragma region 정적 변수 예제 함수
//void Increase()		// 정적 변수 예제 함수
//{
//	static int score = 0;	// staitc 변수 사용
//
//	score++;
//	printf("score : %d\n", score);
//
//}
#pragma endregion


#pragma endregion

int main()
{

#pragma region 메모리 영역

#pragma region 코드 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로 함수의 주소와 상수가 저장되는 영역이다.

#pragma endregion

#pragma region 데이터 영역
	// 프로그램의 시작과 함께 메모리에 저장되고 프로그램이 종료될 때 메모리가 해제되고 초기화가 이루어진
	// 전역 변수와 정적 변수가 저장되는 메모리 영역이다.
#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행될 때 초기화가 이루어지지 않은 전역 변수와 정적 변수가 저장되는 메모리 영역이다.
#pragma endregion

#pragma region 스택 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로 함수 호출시 생성되는 지역 변수와 매개 변수가 저장되는 메모리 영역이다.
#pragma endregion

#pragma region 힙 영역
	// 사용자가 직접 메모리 공간을 저장해주는 메모리 영역으로 사용하지 않는 경우 사용자가 직접 메모리를 해제해야하는 영역이다.
	// free로 해제한다.
#pragma endregion

#pragma endregion

#pragma region 변수의 범위

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 있고 함수가 종료됐을 때 메모리에서 사라지는 특징을 가지고 있는 변수이다. 
	// 범위가 다르면 같은 이름의 변수여도 사용할 수 있다.
	// 지역 변수는 선언과 동시에 초기화 하지 않으면 이전의 메모리 위치에 존재했던 값을 가지게 된다. (쓰레기 값이 들어간다.)
	//int x = 10;
	//
	//{
	//	int x = 20;
	//	printf("%d\n", x);
	//}
	//printf("%d\n", x);
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로 프로그램이 실행될 때 메모리에 올라가고 프로그램이 종료되면 메모리에서 해제되는 변수이다.
	// 전역 변수는 선언과 동시에 초기화가 되어있지 않으면 자동으로 초기화 된다. 

	//SetStage(2);
	//printf("stage : %d\n", stage);
	//printf("stage 주소 : %p\n", &stage);
#pragma endregion

#pragma region 정적 변수
	// 프로그램이 실행되는 동안 메모리에 존재하고 선언된 범위 내에서만 접근이 가능한 특징을 가지는 변수이다. 
	// 정적 변수는 단 한 번만 초기화가 이루어진다. 

	/*Increase();
	Increase();
	Increase();*/

#pragma endregion

#pragma endregion

	return 0;
}