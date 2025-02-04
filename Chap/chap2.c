/*Chapter 02 상수와 테이터 출력*/


//함수 : 일정한 기능을 수행하는 코드 단위

//main 함수 구조 
/*
int main(void)  //머리;함수원형 : 함수의 이름과 필요한 테이터 표시
{
	return 0:  // 몸통 : 실행할 일들 작성, return 0;를 넣어 프로그램 종료!
}
*/

//출력 함수(printf)의 사용법 : 문자열 출력
/*
#include <stdio.h>        //stdio : standard input output(표준입출력)의 줄임말

int main(void)
{
	printf("Be happy");   // 문자열 "Be happy" 출력
	printf("My friend");  // 문자열 "My friend" 출력

	return 0;
}
*/

//제어 문자 종류와 출력
/*
제어 문자 정리
\n : 줄 바꿈
\t : 탭 위치로 이동
\b : 한칸 왼쪽으로 이동
\r : 맨 앞으로 이동
\a : 벨소리 내기
*/
/*
#include <stdio.h>

int main(void)
{
	printf("Be happy\n");
	printf("1234567890\n");
	printf("My\tfriend\n");
	printf("Goot\bd\tchance\n");
	pritnf("Cow\rW\a\n")

	return 0;
}
*/

//정수와 실수 출력
/*
정수 : %d
실수 : %lf
*/
/*
#include <stdio.h>

int main(void)
{
	printf("%d\n", 10);
	printf("%lf\n", 3.4);
	printf("%.1lf\n", 3.45);
	printf("%.10lf\n", 3.4);

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10+20);
	printf("%.1lf - %.1lf = %.1lf\n", 3.4, 1.2, 3.4-1.2);

	return 0;
}
*/
/*
#include <stdio.h>
int main(void)
{
	printf("%d을 %d로 나누면 %lf입니다.", 1, 2, 0.5);

	return 0;
}
*/