#include <stdio.h>

enum Imagenation
{
	황룡,
	청룡,
	주작,
	현무,
	백호
};

void main()
{
#pragma region 조건문
	// 어떤 조건이 주어질 때 해당 조건에 따라 동작을 수행하도록 실행하는 명령문이다.

#pragma region 관계 연산자
	// 2개의 피연산자의 값을 비교하여 그 결과를 0 또는 1이라는 값으로 나타내는 연산자이다.

	// > : 왼쪽 값이 더 크다면
	// < : 오른쪽 값이 더 크다면
	// >= : 왼쪽 값이 크거나 같다면
	// <= : 오른쪽 값이 크거나 같다면
	// == : 값이 서로 다르다면
	// != : 값이 서로 다르다면 (!는 부정)

	// int s = 1 < 0;
	// int s1 = 1 > 0;
	// int s2 = 1 >=0;
	// int s3 = 1 <= 0;
	// int s4 = 1 != 0;
	// int s5 = 1 == 0;
	// 
	// printf("%d\n", s);
	// printf("%d\n", s1);
	// printf("%d\n", s2);
	// printf("%d\n", s3);
	// printf("%d\n", s4);
	// printf("%d\n", s5);

#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는 조건문이다.
	// if문은 조건이 1일때 실행되고 0일때 실행되지 않는다.

	// int exp = 5;
	// int maxExp = 5;
	// if (exp >= maxExp)	// 최대 경험치보다 얻은 경험치가 더 크면 
	// {
	// 	printf("1레벨 증가했다.\n"); // ? 
	// }
	// else
	// {
	// 	printf("경험치가 부족하다.\n");
	// }

#pragma endregion

#pragma region else if문
	// 여러개의 조건을 순차적으로 검사하고 싶을 때 사용하는 조건문이다.
	// else if문의 경우 여러 개를 사용할 수 있고 if문부터 하나씩 검사하다가 가장 먼저 조건이 맞는 분기로 들어간다.

	// int age = 24;
	// if (age == 30)
	// 
	// {
	// 	printf("누가 30이래;\n");
	// }
	// else if (age == 24)
	// {
	// 	printf("24살이야 ><\n");
	// }

#pragma endregion

#pragma region  else
	// if문을 포함한 여러 조건문에서 모든 조건이 맞지 않을 때 실행되는 조건문이다.

	// int num = 0;
	// 
	// if (0 == 1)
	// {
	// 	printf("0은 양수가 아니다.\n");
	// }
	// else if (0 == -2)
	// {
	// 	printf("0은 음수도 아니다.\n");
	// }
	// else
	// {
	// 	printf("0은 양수, 음수도 아닌 0이다.\n");
	// }

	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행된다. 
#pragma endregion

#pragma region 논리 연산자
	// 2개 이상의 조건을 결합하거나 하나의 조건을 반전시키는 연산자이다.

#pragma region AND 연산자
	// 2개 조건이 맞다면 실행되는 연산자이다.
	// int a = 1;
	// int b = 1;
	// 
	// if (a >= 1 && b >= 1)
	// {
	// 	printf("둘의 조건이 일치한다.\n");
	// }
#pragma endregion

#pragma region OR 연산자
	// 2개의 조건 중 하나라도 맞으면 실행되는 연산자이다.

	// 조건문에 논리 표현식을 평가하는 도중 결과가 확정이 났다면 그 이후의 평가를 생략한다. Short ?

	// int ball = 4;
	// int hit_by_pitch = 1;
	// 
	// if (ball >= 4 || hit_by_pitch == 1)	// 조건이 애매한데 ㅇㅅㅇ 
	// {
	// 	printf("1루 베이스로 출루한다.\n");
	// }
	// else
	// {
	// 	printf("타석에 남아 있는다.\n");
	// }


	// 예외로 알아두면 좋음.

	// int x = 0;
	// 
	// if (x != 0 || x++)	// 논리 연산이랑 같이 써줘야 한다. 
	// {
	// 	printf("참이다?");
	// }

#pragma endregion

#pragma region NOT 연산자
	// 하나의 조건을 반전시키는 연산자이다.
	// 
	// int a = 0;
	// 
	// if (!a)	// 0이 아니면 
	// {
	// 	printf("Power is on.\n");
	// }
	// else 
	// {
	// 	printf("Power is off.\n");
	// }
#pragma endregion

#pragma endregion

#pragma region 사분면
	// int x;
	// int y;
	// 
	// scanf_s("%d, %d", &x, &y);
	// 
	// if (x > 0 && y > 0)	// x, y가 0보다 클 때
	// {
	// 	printf("제 1사분면\n");
	// }
	// 
	// else if(x < 0 && y > 0)		// x가 0보다 작고 y가 0보다 작을 때
	// {
	// 	printf("제 2사분면\n");
	// }
	// 
	// else if (x < 0 && y < 0)
	// {
	// 	printf("제 3사분면\n");
	// }
	// 
	// else if (x > 0 && y < 0)
	// {
	// 	printf("제 4사분면\n");
	// }
	// else if (x != 0 && y == 0)
	// {
	// 	printf(" X 절편\n");
	// }
	// 
	// else if (x == 0 && y != 0)
	// {
	// 	printf("Y 절편\n");
	// }
	// 
	// else
	// {
	// 	printf("원점\n");
	// }

#pragma endregion

#pragma region Switch문
	// 어떤 결과에 따라 그 결과부터 실행되는 명령문이다.

	// switch문에서 조건식으로 실수형 변수와 실수형 상수를 선언할 수 없다. 

	//switch (값)
	//{
	//default:
	//	break;
	//}

	/*enum Imagenation genius;
	printf("수호신을 선택하세요.\n");
	scanf_s("%d", &genius);

	switch (genius)
	{
	case 황룡:
		printf("황룡을 선택하였습니다.\n");
		break;
	case 청룡:
		printf("청룡을 선택하였습니다.\n");
		break;
	case 주작:
		printf("주작을 선택하였습니다.\n");
		break;
	case 현무:
		printf("현무를 선택하였습니다.\n");
		break;
	case 백호:
		printf("백호를 선택하였습니다.\n");
		break;

	default:

		break;
	}*/

	// int state;
	// 
	// scanf_s("%d", &state);
	// //system("cls");
	// 
	// switch (state)
	// {
	// case 1:
	// 	printf("1_ Idle State\n");
	// 	break;	// 제어 해준다.
	// case 2:
	// 	printf("2_ Attak State\n");
	// 	break;
	// case 3:
	// 	printf("3_Die State\n");
	// 	break;
	// default:
	// 	printf("Exception\n");
	// 	break;
	// }
#pragma endregion

#pragma endregion

}