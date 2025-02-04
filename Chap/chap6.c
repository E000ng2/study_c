/* Chapter 06 반복문*/

//6-1반복문
/*
*일정 조건을 만족하는 동안 같은 실행문을 반복하는 것
* 반복의 조건을 정의하는 조건식과 조전을 만족했을 때 실행하는 문장이 있음
* while문, for문, do ~ while문
*/

//while문
/*
*형식
while (조건식)
{
    실행문;
{
*조건을 먼저 물어보고 만족하는 동안 실행문을 실행
*/
/*
* 실행문이 두 문장 이상일 경우 반드시 중괄호 사용!
* 불필요한 에러를 막기 위해 실행문의 개수와 상관없이 항상 중괄호로 반복문을 명확히 표시할 것을 권장!
#include <stdio.h>
int main(void)
{
    int a = 1; //변수를 선언하고 곱셈을 하기 위해 1로 초기화

    while (a < 10)
    {
        a = a * 2;
    }

    printf("a : %d\n", a);

    return 0;

}
*/

//for문
/*
* 형식
for (초기식; 조건식; 증감식;)
{
    실행문;
}
*초깃값을 최초 설정한 다음 조건을 물어보고 실행문을 실행한 다음 증감식을 실행하고 다시 조건을 확인
*/
/*
* 주의 사항
* 1. 초기식, 조건식, 증감식은 반복 횟수를 알기 쉽게 작성
* 2. 반복 횟수를 세는 변수를 반복문 안에서 바꾸지 않는 것이 좋음
#include <stdio.h>
int main(void)
{
    int a = 1;
    int i;

    for (i = 0; i < 3; i++)
    {
        a = a * 2;
    }

    printf("a : %d\n", a);

    return 0;
}
*/

//while문과 for문의 관계
/*
*for문의 초기식, 조건식, 증감식의 위치를 바꾸면 while문으로 바꿀 수 있음
for (i = 0; i < 10; i++)
{
    printf("Be happy!\n");
}

i = 0;
while (i < 10 )
{
    printf("Be happy!\n");
    i++;
}
*/

//do ~ while문
/*
* 형식
do 
{
    실행문;
} while (조건식);
* 실행문을 무조건 실행하고 조건을 확인한 후에 다시 실행문을 실행
*/
/*
* do ~ while문은 반복할 문장을 수행한 후에 조건을 검사
#include <stdio.h>
int main(void)
{
    int a = 1;

    do
    {
        a = a * 2;
    } while (a < 10);
    printf("a : %d\n", a);

    return 0;
}
*/

//while문과 do ~ while문의 관계
/*
* a의 값이 결정되었을 경우에는 쉽게 바꿀 수 있으나, 
* a의 값이 결정되지 않았을 경우에는 분명한 차이가 있음
* a의 값을 입력하는 경우 while문은 입력되는 값에 따라 반복 여부를 결정하고,
* do ~ while문은 어떤 값이 입력되더라도 최소한 반 번은 do 안의 문장을 실행
*/

//키워드로 끝내는 핵심 포인트
/*
* while문은 반복 문장을 실행하기 전에 반복 조건을 먼저 검사
* for문은 반복 횟수가 정해진 경우 사용하면 편리
* do ~ while문은 반복 문장을 실행한 후에 반복 조건을 검사
*/

//확인 문제
//1
/*
#include <stdio.h>
int main(void)
{
    int a;

    printf("숫자를 입력하세요 : ");
    scanf("%d", &a);

    while (a < 0)
    {
        printf("숫자를 입력하세요 : ");
        scanf("%d", &a);
    }

    return 0;
}
*/
//2
/*
* #include <stdio.h>
int main(void)
{
    int i;

    for (i = 0; i < 5; i++)
    {
        printf("Be happy\n");
    }

    return 0;

}
*/
//3
/*
#include <stdio.h>
int main(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("$");
    }
    return 0;
}
*/



//6-2 반복문의 활용
/*
* 반복 안에 다시 반복이 이루어진 것을 중첩 반복문 또는 다중 반복문이라고 함.
* 하나의 실행문장으로 다른 반복문 안에 곂쳐서 사용.
* break를 사용하여 반복을 끝내거나 continue로 반복 문장의 일부를 건너뛸 수 있음.
*/

//중첩 반복문
/*
* 1. 별 1개를 그린다.
* 2. 1을 5번 반복한다.
* 3. 2를 3번 반복한다.
#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
*/

//중첩 반복문으로 구구단 출력하는 프로그램
/*
#include <stdio.h>
int main(void)
{
    int i, j;

    for (i = 2; i < 10; i++)
    {
        for (j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i*j );
        }
        printf("\n");
    }

    return 0;
}
*/

//break와 continue 분기문
/*
* break
#include <stdio.h>
int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 10; i++)
    {
        sum += i;
        if (sum > 30) break;
    }

    printf("누적한 값 : %d\n", sum);


    return 0;
}

* countinue
#include <stdio.h>
int main(void)
{
    int i;
    int sum = 0;

    for (i = 1; i <= 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue;
        }
        sum += i;
    }

    return 0;
}
*/

//while문
/*
#include <stdio.h>
int main(void)
{
    int i = 1;
    
    while (i <= 100)
    {
        if ((i % 3) == 0)
        {
            printf("%d\n", i);

        }
        i += 1;
    }

    return 0;
}
*/