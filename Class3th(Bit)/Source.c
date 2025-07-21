#include <stdio.h>

void main()
{
#pragma region 조건문
    // 어떤 조건이 주어질 때 해당 조건에 따라 동작을
    // 수행하도록 실행하는 명령문입니다.

#pragma region 관계 연산자
    // 두 개의 피연산자의 값을 비교하여 그 결과를 0 또는
    // 1이라는 값으로 나타내는 연산자입니다.

    // int positionX = 10;
    // int positionY = 20;
    // 
    // printf("positionX < positionY : %d\n", positionX < positionY);
    // printf("positionX > positionY : %d\n", positionX > positionY);
    // printf("positionX <= positionY : %d\n", positionX <= positionY);
    // printf("positionX >= positionY : %d\n", positionX >= positionY);
    // printf("positionX != positionY : %d\n", positionX != positionY);
    // printf("positionX == positionY : %d\n", positionX == positionY);

    // 관계 연산자는 조건이 맞을 때 1이라는 값으로 반환되며,
    // 조건이 틀릴 때 0이라는 값으로 반환됩니다.
#pragma endregion

#pragma region if문
    // 어떤 특정한 조건을 비교하여 조건이 맞다면 실행되는
    // 명령문입니다.

    int health = 0;

    if (health <= 0)
    {
        printf(Destroy\n);
    }

    // if문은 조건이 1일 때 실행되며, 0일 때 실행되지 않습니다.
#pragma endregion

#pragma region else if문
    // if문의 조건이 틀릴 때 else if 문의 조건이
    // 맞다면 실행되는 명령문입니다.

    int level = 99;

    if (level < 11)
    {
        printf("1 Circles\n");
    }
    else

        // else if문은 여러 번 정의할 수 있으며, if문의
        // 존재할 때 사용할 수 있습니다.
#pragma endregion


}