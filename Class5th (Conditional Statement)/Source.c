﻿# include <stdio.h>
# include "../Class5th (Conditional Statement)/utility.h"

#define SIZE 5

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이
	// 이루어 질때 기존에 지정했던 자료형을 다른 자료형
	// 으로 변환하는 과정입니다.

#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 현산이 이루어질 때 자료형의
	// 크기가 더 큰 자료형으로 변환되는 과정입니다.
	// 
	//int integer = 10;
	//float decimal = 5.5f;
	//
	//float storage = integer + decimal;
	//
	//printf("storage 변수의 값 : %f\n", storage);
	//
	// 표현 범위가 작은 데이터에 표현 범위가 큰 데이터를
	// 저장하게 되면 암묵적으로 데티어 손실이 발생합니다.

#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직접 자료형을
	// 변환하는 과정입니다.

	// int critical = 10;
	// int pentration = 3;

	// float attack = (float)critical / pentration;

	// printf("attack 변수의 값 : %f\n", attack); 

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과
	// 값만 가질 수 있습니다.
#pragma endregion
#pragma endregion

#pragma region 단축 평가 계산
	// 계산을 진행하는 도중에 결과 이미 확정된 경우
	// 나머지 계산은 생략하는 과정입니다.

	// int x = 0;
	// int y = 0;

	// if (x != 0 && y++)
	// {
	//	printf("short circuit\n");
	// }
	//
	// if (x != 0 && y++)
	// {
	//	printf("first or operatir\n");
	// }
	//
	// if (x != 0 || y++)
	// {
	//	printf("second or operator\n");
	// }
	//
	// printf("y의 값 : %d\n", y);

#pragma endregion

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문장열로 정의되고
	// 처리되는 과정입니다.

	// printf("매크로 SIZE의 값 : %\d/n", SIZE);

	// 매크로의 경우 자료형이 존재하지 않으므로 메모리 공간을
	// 가지고 있지 않습니다.

	// ex) SIZE = 100;

	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 실행될 때
	// 매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됩니다.
#pragma endregion

#pragma region 전처리기
	// 프로그램이 컴파일되기 이전에 프로그램에 대한
	// 사전 처리를 하는 과정입니다.

	// printf("code 변수의 값 : %d\n, code");

	// 전처리기는 컴파일러가 아닌 선생처리기에 의해서
	// 처리되는 문자이기 때문에 명령문 끝에 ";"을 사용
	// 하지 않습니다.
#pragma endregion
}