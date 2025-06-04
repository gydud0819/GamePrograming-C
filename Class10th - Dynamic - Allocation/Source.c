#include <stdio.h>
#include <stdlib.h>

int main()
{
#pragma region 동적 할당(Heap)
	// 프로그램 실행 중에 필요한 만큼 메모리를 사용자가 직접 할당하는 작업이다.
	// 동적 할당은 실행 시간에 가변적으로 메모리의 크기를 변경시킬 수 있고 동적으로 메모리 크기를 할당할 때 바이트 단위로 지정한다.
	// free(메모리 해제할 변수); 로 메모리를 해제해줘야 한다. 
	// 메모리 파편화?

	//int* iptr = malloc(8);		// 이렇게 써도 되고
	//int* iptr = malloc(sizeof(int));	// 이렇게 써도 됨
	//*iptr = 10;
	//
	//printf("iptr 주소	: %p\n", &iptr);
	//printf("iptr 값		: %d\n", *iptr);
	//
	//free(iptr);		// 동적으로 할당한 메모리는 힙 영역에 보관되고 사용이 끝나면 직접 해제해야한다.
	//
	////printf("iptr 값		: %d\n", *iptr);	// 해제가 됐는지 확인용 출력
	//
	//printf("\n");
	//
	//// 해제하고 다시 할당한 코드			// 그럼 얘도 메모리를 다시 재사용한건가? 
	//iptr = malloc(12);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	iptr[i] = (i + 1) * 10;
	//	printf("iptr 값		: %d\n", iptr[i]);
	//
	//}
	//
	//free(iptr);


#pragma endregion

#pragma region UAF(Use After Free)
	/*
	* 메모리 관리와 관련된 보안 취약점 중 하나이다.
	* heap영역에서 주로 발생하며 메모리를 할당하고 해제한 뒤 재사용하려고 할 때 발생한다.
	* calloc과 malloc 등 동적으로 할당하고 free()로 해제한 뒤 해당 메모리에 접근하면 문제가 발생한다.
	* 메모리를 해제한 뒤 재사용하게되면 프로그램 충돌이나 보안 취약 등으로 이어질 수 있다.
	* C, C++ 같이 메모리를 수동으로 관리하는 언어에서 자주 나타난다.
	*/

	/*
	* 위험한 이유
	* - 해제된 메모리를 사용하면 메모리를 덮어 쓰거나 프로그램이 비정상 종료가 될 수 있다.
	* - 메모리 안정성이 중요한 시스템에서 치명적인 오류로 이어질 수 있다.
	* - 일부 경우 포인터 조작을 통해 악성 코드를 실행시키는 등의 보안 공격에 악용될 수 있다.
	*/

	// 메모리를 재참조한 예시 코드 
	//int* iptr2 = malloc(sizeof(int));	// 메모리 할당
	//*iptr2 = 25;
	//printf("ipt2 값 : %d\n", *iptr2);
	//printf("ipt2 주소값 : %p\n", &iptr2);
	//
	//free(iptr2);	// 메모리 해제
	//
	//printf("재참조한 ipt2 값 : %d\n", *iptr2);		// UAF 발생한 부분
#pragma endregion

#pragma region 허상 포인터 (댕글링 포인터)
	// 이미 해제된 메모리 영역을 가리키는 포인터이다.
	// UAF랑 비슷한거 아녀?
	// 해제된 메모리에 값을 다시 할당하고 싶을 땐 재할당하거나 ptr이 NULL을 가리키도록 한다. 

	//int* iptr = malloc(sizeof(int));
	//*iptr = 3;
	//
	//printf("iptr 값 : %d\n", *iptr);	
	//
	//free(iptr);		// 메모리 해제한 뒤
	//
	//iptr = NULL;
	//
	//printf("해제 후 다시 참조한 값 : %d\n", *iptr); 	// 다시 출력했을 때
#pragma endregion


	return 0;
}