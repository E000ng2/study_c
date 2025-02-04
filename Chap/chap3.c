/* Chapter 3 변수와 데이터 입력 */

//정수 int, 실수 double, 문자 char, 문자열 char

//변수 선언 방법
/*
int a; //자료형, 변수명
a = 10; //초기화
*/

//변수 선언과 대입 규칙
/*
규칙 1 : 중괄호의 블록({}) 안에 변수를 선언하며 선언한 위치부터 블록끝까지 사용할 수 있다.
규칙 2 : 컴파일러에 따라 변수의 선언 위치가 제한될 수 있다.
규칙 3 : 변수의 자료형이 같으면 동시에 둘 이상의 변수를 선언할 수 있다.
         ex) int b, c;
규칙 4 : 대입 연산자(=)는 연산자 왼쪽의 변수에 오른쪽 값을 저장한다.
         ex) a = 10;
규칙 5 : 변수는 대입 연산자 왼쪽에서는 저장 공간이 되고, 오른쪽에서는 값이 된다.
*/

// 문자와 문자열의 입력 (scanf 함수)
/*
#include <stdio.h>

int main(void)
{
    char grade;
    char name[20]; //한글은 한 글자당 2바이트 영어는 1바이트, 마지막 널 문자 사용 즉 19자의 문자열 사용가능

    printf("학점 입력 : ");
    scanf("%c", &grade);       //문자일 경우 &를 사용한다.
    printf("이름 입력 : ");    //문자외 모든 변수는 &를 사용하지 않는다.
    scanf("%s", name);

    printf("%s의 학점은 %c입니다.", name, grade);

    return 0;
}
*/

//확인 문제 
//2
/*
#include <stdio.h>

int main(void)
{
    char fruit[20];
    int cnt;

    printf("좋아하는 과일 : ");
    scanf("%s", fruit);
    printf("몇 개 : ");
    scanf("%d", &cnt);

    printf("%s(을)를 %d개 드립니다.", fruit, cnt);

    return 0;
}
*/
//3
/*
#include <stdio.h>

int main(void)
{
    char ch;

    printf("문자열 입력 : ");
    scanf("%c", &ch);
    printf("%c문자의 아스키 코드 값은 %d입니다. ", ch, ch);

    return 0;
}

*/