/*Chapter 4 연산자*/

//산술 연산자 (+. -. *, /, %)

// +, -, *, -
/*
* 종류 : 더하기(+), 빼기(-), 곱하기(*), 나누기(/), 나머지(%)

#include <stdio.h>

int main(void)
{
	int a, b;
	int sum, sub, mul, inv;

	a = 10;
	b = 20;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	inv = -a;

	printf("a의 값 : %d, b의 값 : %d\n", a, b);
	printf("덧셈 : %d\n", sum);
	printf("뺄셈 : %d\n", sub);
	printf("곱셈 ; %d\n", mul);
	printf("a의 음수 연산 : %d\n", inv);

	return 0;
}
*/

// /, %
/*
#include <stdio.h>

int main(void)
{
	double apple;       //실수
	int banana;         //정수
	int orange;         //정수

	apple = 5.0 / 2.0;  // 실수와 정수 나누기 연산
	banana = 5 / 2;     // 정수와 정수의 나수기 연산
	orange = 5 % 2;     // 정수와 정수의 나머지 연산(%)

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}
*/


//대입 연산자 (=)
/*
* 오른쪽 수식의 결과를 왼쪽 변수에 저장
 a = 10; //a라는 변수에 10이라는 값을 저장
 b = 20: //b라는 변수에 20이라는 값을 저장
 sum = a + b //sum이라는 변수에 a+b라는 연산의 결과 저장
*/


//증감 연산자(++, --)
/*
* a = a + 1; 을 쉽게 ++a로 사용
* a = a - 1; 을 쉽게 --a로 사용

#include <stdio.h>

int main(void)
{
	int a = 10, b = 10;

	++a;
	--b;

	printf("a : %d\n", a);
	printf("b : %d\n", b);

	return 0;
}
*/

//전위 표기와 후위 표기
/*
* ++a 와 a++ 모두 a의 값을 1증가 시킴
* 다른 연산자와 함께 쓰일 경우 
  전위 표기(++a)는 a의 값을 1증가 시킨 후에 a로 연산하고 후위 표기(a++)은 a로 연산후 a의 값을 1증가 시킴

#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int pre, post;

	pre = (++a) * 3;
	post = (b++) * 3;

	printf("초깃값 a = %d, b = %d\n", a, b);
	printf("전위형 (++a) * 3 = %d, 후위형 (a++) * 3 = %d\n", pre, post);

	return 0;
}
*/


//관계 연산자(>, <, >=, <=, :, ==, !=)
/*
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res;

	res = (a > b);
	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;
}
*/

//논리 연산자(&&(AND), ||(OR), !(NOT))
/*
* &&(AND) : 논리곱, 2개의 피연산자가 모두 참일 때만 연산 결과가 참
* ||(OR) : 논리합, 2개의 피연산자 중 하나라도 참이면 참
* !(NOT) : 논리부정, 피연산자를 하나를 사용하여 그 참과 거짓을 바꿀 때 사용

#include <stdio.h>

int main(void)
{
	int a = 30;
	int res;

	res = (a > 10) && (a < 20);
	printf("(a>10) && (a<20) : %d\n", res);
	res = (a < 10) || (a > 20);
	printf("(a<10) || (a>20) : %d\n", res);
	res = !(a >= 30);
	printf("!(a<= 30) : %d\n", res);

	return 0;
}
*/

//숏 서킷 룰 *주의*
/*
*&& 와 ||연산자는 숏 서킷 룰이 적용 됨.
*&&연산자는 좌항이 거짓이면 우항와 관계없이 거짓이므로 우항은 아예 실행되지 않음.
*||연산자는 좌항이 참이면 우항과 관계없이 참이므로 우항은 아예 실행되지 않음.
ex) (a < 0 ) && (++b > 20) 에서 ++b는 실행되지 않음
*/

//연산의 결과값을 처리하는 방법
/*
* 연산의 결과값은 변수에 저장하지 않으면 버려짐 따라서 연산 결과를 곧바로 사용하거나
연산을 통해 다른 변수에 저장해야 됨.
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b;   //연산 결과는 버려짐
	printf("%d + %d = %d\n", a, b, a + b);

	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	return 0;
}
*/

// 확인 문제 
//1) 4.0과 1.2의 덧셈, 뺼셈, 곱셈, 나눗셈을 한 값을 소수점 이하 첫째 자리까지 출력하세요
/*
#include <stdio.h>
int main(void)
{
	double a = 4.0, b = 1.2;
	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);

	return 0;
}
*/
//2) 두 과목의 점수를 입력하여 평균을 출력하는 프로그램을 작성하세요. (평균은 소수점 이하 첫째 자리까지 출력하세요)
/*
#include <stdio.h>
int main(void)
{
	int a, b, tot;
	double avg;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &a, &b);
	tot = a + b;
	avg = tot / 2.0;
	printf("평균 : %.1f\n", avg);

	return 0;
}

*/
//3) 태희가 신청한 전체 학점과 평점을 계산하여 신청한 학점이 10학점 이상이고 평점 평균이 4.0을 넘는 경우 1을 출력하고,
//   그렇지 않으면 0을 출력하는 프로그램을 작성하세요. 태희가 이전 학기에 신청한 과목당 학점과 얻은 점수는 다음과 같다.
//   국어 - 3학점 - 3.8 / 영어 - 5학점 - 4.4 / 수학 - 4학점 - 3.9
//   변수명 : 국어(kor), 영어(eng), 수학(mat), 전체 학점(credits), 결과 저장(res), 국어 평점(kscore), 영어 평점(escore), 수학 평점(mscore), 평점 평균(grade)
/*
#include <stdio.h>
int main(void)
{
	int kor = 3, eng = 5, mat = 4;
	int credits, res;
	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;

	credits = kor + eng + mat;
	grade = ((kscore * kor) + (escore * eng) + (mscore * mat)) / credits;
	res = (credits >= 10) && (grade >= 4.0);
	printf("%d, %.1f\n", credits, grade);
	printf("%d", res);

	return 0;
}
*/


//그 외 유용한 연산자((double), sizeof, +=, ?:)

//형 변환 연산자
/*
* 피연산자가 1개이며 피연산자의 값을 원하는 형태로 바꿈
* ex) (double)10 -> 10.0 ,(int)10.7 -> 10 
* double형은 저장공간이 크고 연산 속도가 느리며 무엇보다도 오차가 발생하므로 int형을 기본적으로 사용하고 실수 연산 결과가 필요할 때만 형 변환하여 사용하는 것이 좋음
#include <stdio.h>
int main(void)
{
	int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b);
	printf("a = %d, b = %d\n", a, b);
	printf("a / b의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);

	return 0;
}
*/

//자동 형 변환
/*
* 피연산자가 2개 이상이라면 피연산자의 형태는 같아야 함.
* 컴파일러는 컴파일 과정에서 피연산자의 형태가 다르면 형태를 일치 시키는 작업을 수행.
* 자동 형 변환의 기본 규칙은 크기가 작은 값이 크기가 큰 값으로 바뀌는 것.
* 정수(4바이트), 실수(8바이트)를 연산하면 정수가 실수로 자동 변환되서 연산 됨.
*/

//sizeof 연산자
/*
* 피연산자 1개만 사요으 피연산자의 크리를 바이트 단위로 계산해서 알려줌.
* sizeof(피연산자)로 표기 .
* 대상은 변수, 상수, 수식, 자료형 등이 될 수 있음.
* 데이터의 크기를 확인하거나 메모리를 동적으로 할당하는 작업 등에 유용하게 사용 됨.
#include <stdio.h>
int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %d\n", sizeof(char));

	return 0;
}
*/

//sizeof 연산자와 괄호
/*
* 기본적으로 피연산자에 괄호를 사용할 필요가 없음
* 다만, sizeof(1.5 + 3.5)와 sizeof(char) 같은 경우 괄호를 사용하지 않으면 오류 또는 에러가 발생함. 
*/

//복합대입 연산자(산술 복합대입 연산자 : +=, -=, *=, /=, %=)
/*
* 대입 연산자(=)와 증감 연산자(++, --)를 제외한 다른 연산자는 연산하고 나서 피연산자의 값을 바꾸지 않음.
* 연산 결과를 피연산자에 저장할 필요가 있다면 추가로 대입연산을 수행해야함. 
* 이를 복합대입 연산자를 사용하여 간단하게 수행

#include <stdio.h>
int main(void)
{
	int a = 10, b = 20; 
	int res = 2;

	a += 20;
	res *= b + 10; // b + 10을 먼저 계산 후 res *= 계산
	printf("a  %d,  b = %d\n", a, b);
	printf("res = %d\n", res);

	return 0;
}
*/

//콤마 연산자(,)
/*
* 한 번에 여러 개의 수식을 차례로 나열해야 할 때 사용.
* 콤마 연산자는 왼쪽부터 오른쪽으로 차례로 연산을 수행하며 가장 오른쪽의 피연산자가 최종 결괏값
#include <stdio.h>
int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b) / ;             //차례로 연산이 수행되며 결과적으로
	                                 // res에 저장되는 값은 증가된 b의 값이다.
	printf("a : %d, b:%d\n", a, b);
	printf("res : %d\n", res);

	return 0;
}
*/

//조건 연산자(? :)
/*
* 유일한 삼항 연산자로 ?와 :기호를 함께 사용
* 첫 번째 피연산자가 참이면 두 번째 피연산자가 결과값이 되고 거짓이면 세번째 피연산자가 결과값이 됨.
* (a > b) ? a : b  //조건식이 참이면 a선택, 거짓이면 b선택

#include <stdio.h>
int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b;
	printf("큰 값 : %d\n", res);

	return 0;
}

*/

//비트 연산자(&, |, ^, >>, <<)
/*
* 비트 연산자는 데이터를 비트 단위로 연산
* 데이터를 비트로 정확히 표현할 수 있는 정수에만 사용 가능
*#include <stdio.h>
int main(void)
{
	int a = 10;
	int b = 12;

	printf("a & b : %d\n", a & b);    // 두 비트가 모두 1인 경우에만 1로 계산
	printf("a | b : %d\n", a | b);    // 두 비트 중에서 하나라도 참이면 1로 계산
	printf("a ^ b : %d\n", a ^ b);    // 두 비트가 서로 다른 경우에만 1로 계산
	printf("~a : %d\n", ~a);          // 1은 0으로 0은 1로 바꿈
	printf("a << 1 : %d\n", a << 1);  // 비트들을 왼쪽으로 이동
	printf("a >> 2 : %d\n", a >> 2);  // 비트들은 오른쪽으로 이동

	return 0;
}
*/

//연산자 우선순위와 연산 방향
/*
* 단항 연산자 > 이항 연산자 > 삼항 연산자 
* 산술 연산자 > (비트 이동 연산자) > 관계 연산자 > 논리 연산자
#include <stdio.h>
int main(void)
{
	int a = 10, b = 5;
	int res;

	res = a / b * 2;
	printf("res = %d\n", res);
	res = ++a * 3;
	printf("res = %d\n", res);
	res = a > b && a != 5;
	printf("res = %d\n", res);
	res = a % 3 == 0;
	printf("res = %d\n", res);

	return 0;

}
*/

//확인 문제
//1) short형과 long형의 자료형의 크기를 비교하여 크기가 큰 자료형이 무엇인지 출력하세요.
/*
#include <stdio.h>
int main(void)
{
	int res;

	res = sizeof(short) > sizeof(long);
	printf("%s", res == 1 ? "short" : "long");

	return 0;
}

*/
//2) 야구경기장의 좌석 수가 70개고 입장객 수가 65명 일 때 입장률을 출력하세요.
/*
#include <stdio.h>
int main(void)
{
	int seats = 70;
	int audience = 65;
	double rate;

	rate = (double)audience / (double)seats * 100;
	printf("입장률 : %.1lf%%", rate);

	return 0;
}
*/
//3) 3.76시간은 몇시간, 몇 분, 몇 초인지 출력하세요.
/*
#include <stdio.h>
int main(void)
{
	int hour, min, sec;
	double time = 3.76;

	hour = (int)time;
	time -= hour;
	time *= 60;
	min = (int)time;
	time -= min;
	time *= 60;
	sec = (int)time;

	printf("3.76시간은 %d시간 %d분 %d초입니다.", hour, min, sec);

	return 0;
}
*/

//도전 실전 예제
//도전1 체중관리 프로그램
/*
*체중(kg)과 키(cm)를 입력하여 BMI(신체질량지수)를 구한 후에
BMI의 값이 20.0 이상 25.0미만이면 "표준입니다."를 출력하고 
그렇지 않으면 "체중관리가 필요합니다."를 출력합니다.
BMI는 표준체중, 저체중, 과체중을 판별하는 수치로 몸무게를 키의 제곱으로 나누어 구합니다.
이때 키는 미터(m)단위로 계산합니다. 
*/
/*
#include <stdio.h>
#include <math.h>

int main(void)
{
	double weight, height;
	double BMI;
	int res;

	printf("몸무게(kg)와 키(cm) 입력 : ");
	scanf("%lf %lf", &weight, &height);
	BMI = weight / pow(height / 100, 2);
	res = (BMI >= 20.0 && BMI < 25.0);
	printf("%s\n", res ? "표준입니다." : "체중관리가 필요합니다.");
	printf("당신의 BMI점수는 %.1lf입니다.\n", BMI);

	return 0;
}
*/
