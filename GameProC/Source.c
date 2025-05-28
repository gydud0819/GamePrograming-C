#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자이다.
	// 데이터의 주소 값은 해당 데이터가 저장된 메모리의 시작 주소를 의미한다.
	// 주소 확인 할 때는 %p 를 사용한다. (계속 까먹음)

	// int data = 10;
	// printf("data의 주소 값 : %p\n", &data);
	// 
	// char a = 'C';
	// printf("a의 주소 값 : %p\n", &a);

#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력 함수로 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수이다.
	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관했다가 입력하는 순간
	// 버퍼 안의 내용을 프로그램에 전송한다. 
	// scanf_s 함수를 사용할 때 '\n'을 사용하면 입력이 2번 들어가기 때문에 \n 사용을 비추천한다.
	// 비동기 형식이다.

	// int a;
	// 표준 입력 함수는 입력을 수행할 때 까지 다음 작업으로 넘어갈 수 없다.
	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며 형식 지정자에 따라
	// 입력할 수 있는 데이터의 데이터의 범위도 결정된다. 
	// scanf_s("%d", &a);	 
	// printf("a : %d\n", a);

	
	
#pragma endregion

#pragma region 포인터
	// 메모리의 주소값을 저장할 수 있는 변수이다.
	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며
	// 포인터 변수에 변수의 시작 주소를 저장하게 되면 해당 변수의 시작 주소를 가리키게 된다. 
	// 작성 방법 : 자료형* 변수

	// 포인터 변수는 포인터가 가리키는 메모리 공간의 자료형은 알 수 없기에 포인터가 가리키는 메모리의 자료형을 선언해줘야 한다.

	//int a = 1;
	//int storage = 20;
	//int* ip = &a;
	//*ip = 99;	// 변수처럼 사용할 수 있다.
	//
	//printf("a의 주소값: %p\n", &a);
	//printf("ip의 값: %p\n", ip); // 담고 잇다? 가리킨다?
	//
	//printf("===============================\n");
	//
	//printf("a의 값: %d\n", a);	// 1에서 99로 바뀌었다.
	//printf("역참조한 값: %d\n", *ip); 
	//
	//printf("===============================\n");
	//// 포인터 변수의 크기는 중앙 처리 장치가 한번에 처리할 수 있는 크기로 정해지고 한번에 처리할 수 있는 크기는
	//// 운영체제에 따라 결정된다.
	//
	//ip = &storage;
	//
	//printf("storage 주소값: %p\n", &storage);
	//printf("ip 값: %p\n", ip);
	//printf("ip 참조값 : %d\n", *ip); ^-^;;
	//printf("변수의 크기 : %u byte\n", sizeof(ip));

	//printf("ip 변수의 크기 : %u byte\n", sizeof(ip));


#pragma endregion

#pragma region 상수 지시 포인터 이게 몬데요..
	// 포인터가 가리키는 주소에 저장되어 있는 값을 변경할 수 없도록 지정되어 있는 포인터이다.
	// 자료형이 상수화 되어잇다?
	// 저래서 내가 못알아들엇구나;;;;;;;;;;;;; 
	// 상수 지시 포인터 : const 자료형* 변수
	//int height = 10;	// 세로(높이)
	//int width = 20;	// 가로
	//
	//printf("height 주소값: %p\n", &height);	
	//printf("width 주소값: %p\n", &width);
	//
	//const int* pointer = &height;
	//printf("pointer의 값 : %p\n", pointer);
	////*pointer = 23;
	//pointer = &width;
	//printf("pointer의 값 : %p\n", pointer);
	//printf("%p\n", pointer);
#pragma endregion

#pragma region 포인터 상수
	// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없도록 지정되어 있는 포인터이다.
	// 자료형* const 변수
	//int a = 20;
	//int b = 11;
	//
	//int* const pointer = &a;
	//
	//printf("pointer 주소값 : %p\n", pointer);
	//printf("a 주소값 : %p\n", &a);
	//printf("a 값 : %d\n", *pointer);
	//*pointer = 99;
	//printf("변경된 값 : %d\n", *pointer);

	//pointer = &b;		
	
	//printf("주소값 : %p\n", pointer);
	//printf("값 : %d\n", *pointer);
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터이다.

	char a = 'C'; 
	int b = 20;
	float c = 33.2f;

	void* vpointer = &a;
	//*vpointer = 'A';	
	// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없으므로 범용 포인터가 가리키는 변수의 자료형으로 변환해줘야 한다.
	
	vpointer = &a;
	*(char*)vpointer = 'B';
	printf("주소값 : %p\n", &vpointer);
	printf("값 : %c\n", a);

	vpointer = &b;
	*(int*)vpointer = 10;
	printf("주소값 : %p\n", &vpointer);
	printf("값 : %d\n", b);

	vpointer = &c;
	*(float*)vpointer = 7.5f;
	printf("주소값 : %p\n", &vpointer);
	printf("값 : %f\n", c);

	



	// 범용 포인터는 메모리 주소에 접근해서 

#pragma endregion

}