/*chapter 05 선택문(if, switch ~ case)*/

//if문 
/*
*규칙
1. if문은 중괄호({})를 사용하고 들여쓰기하여 실행문을 명확히 구분하는 것이 좋음.
2. 실행할 문장이 두 문장 이상이면 반드시 중괄호로 묶어야함.
#include <stdio.h>
int main(void)
{
	int a = 20;
	int b = 0;

	if (a > 10)
	{
		b = a;
	}
	printf("a : %d, b : %d\n", a, b);
	return 0;
}
*/

//if ~ else문
/*
* 규칙 
* 1. if ~ else문의 else에는 조건을 사용하지 않음
* 2. 실행할 문장이 두 문장 이상이면 반드시 중괄호로 묶어야 함
* 3. 경우에 따라 if문을 두 번 사용하는 것보다 if ~else문을 한번 사용하는 것이 좋음
#include <stdio.h>
int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}
	printf("a : %d\n", a);

	return 0;
}

*/

//if ~ else if ~ else문
/*
* 규칙
* 1. 각 조건에 따라 실행할 문장이 두 문장 이상이면 반드시 중괄호로 묶어야 함.
* 2. 조건식을 차례로 검사하므로 이전 조건의 결과가 반영 됨.
#include <stdio.h>
int main(void)
{
	int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	printf("b : %d\n", b);

	return 0;
}
*/

//확인 문제
//1-1)
/*
#include <stdio.h>
int main(void)
{
	int a = 20;

	if (a < 0)
	{
		a = -a;
	}

	return 0;
}
*/
//1-2)
/*
* #include <stdio.h>
int main(void)
{
	int a = 20;

	if (a % 2 == 0)
	{
		a = 2;
	}
	else
	{
		a = 1;
	}
	return 0;
}
*/
//2) 가슴둘레가 90보다 적가나 같으면 S, 가슴둘레가 90보다 크고 100보다 작거나 같으면 M, 가슴둘레가 100보다 크면 L선택
/*
#include <stdio.h>
int main(void)
{
	int chest = 95;
	char size;

	if (chest <= 90)
	{
		size = 'S';
	}
	else if ((chest > 90) && (chest <= 100))
	{
		size = 'M';
	}
	else
	{
		size = 'L';
	}

	printf("사이즈 : %c", size);

	return 0;
}


*/
//3) 키가 187.5cm 이상이고 몸무게가 80.0kg 미만이면 ok를 출력하고 그 이외의 경우에는 cancel을 출력하는 프로그램을 작성하세요.
//키는 179.5, 몸무게는 75.0으로 double형 변수에 초기화합니다.
/*
#include <stdio.h>
int main(void)
{
	double height = 179.5, weight = 75.0;

	if ((height >= 187.5) && (weight < 80.0))
	{
		printf("ok");
	}
	else
	{
		printf("cancel");
	}

	return 0;
}
*/

//if문 중첩
/*
* 선행조건이 있을 경우 if문 안에 if문을 넣어 사용
* if문을 중첩해서 쓰는 이유
* 1) 선행조건이 있으면 불피요한 조건 검사를 하지 않음
* 2) 선행조건이 없어도 실행 효율을 위해 의도적으로 중첩해 사용할 수 있음(분할 정복 기법)
#include <stdio.h>
int main(void)
{
	int a = 20, b = 10;

	if (a > 10)
	{
		if (b >= 0)
		{
			b = 1;
		}
		else
		{
			b = -1;
		}
	}

	printf("a : %d, b : %d\n", a, b);

	return 0;
}
*/

//else 결합 문제
/*
* if문이 중첩된 경우 else를 가장 가까운 if와 연결 따라서 {}를 잘 사용할 것!
#include <stdio.h>
int main(void)
{
	int a = 10, b = 20;

	if (a < 0)
	{
		if (b > 0)
		{
			printf("ok");
		}
	}
	else
	{
		printf("ok");
	}

	return 0;
}
*/

//switch ~ case문
/*
* 여러 개의 상수 중에서 조건에 해당하는 하나를 골라 실행하는 것
* 규칙
* 1) 조건식은 정수식만 사용
* 2) 기본적으로 case는 break를 포함
#include <stdio.h>
int main(void)
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}

	printf("m : %d\n", m);

	return 0;
}

*/
//break 생략
/*
* break가 없는 경우 1등은 300 + 200 + 100을 2등은 200 + 100을 3등은 100을 받게 됨
switch(rank)
{
case 1:
    m += 300;
case 2:
    m += 200;
case 3:
    m += 100;
}
*/

//확인문제 
// 2)
/*
#include <stdio.h>
int main(void)
{
	int num;

	printf("정수 입력 : ");
	scanf("%d", &num);

	switch (num % 3)
	{
	case 0:
		printf("거짓");
		break;
	default:
		printf("참");
		break;
	}

	return 0;
}
*/
//3) 
/*
#include <stdio.h>
int main(void)
{
	int age = 25, chest = 95;
	char size;
	if (age < 20)
	{
		if (chest < 85)
		{
			size = 'S';
		}

		else if (chest < 95)
		{
			size = 'M';
		}

		else
		{
			size = 'L';
		}
	}

	else
	{
		if (chest < 90)
		{
			size = 'S';
		}

		else if (chest < 100)
		{
			size = 'M';
		}

		else
		{
			size = 'L';
		}

	}

	printf("사이즈는 %c입니다. \n", size);

	return 0;
}
*/

//도전 실전 예제
/*
#include <stdio.h>
int main(void)
{
	int num1, num2;
	double res;
	char op;

	printf("사칙연산(정수) : ");
	scanf("%d", &num1);
	scanf("%c", &op);
	scanf("%d", &num2);

	if (op == '+')
	{
		res = num1 + num2;
	}

	else if (op == '-')
	{
		res = num1 - num2;
	}

	else if (op == '/')
	{
		res = num1 / num2;
	}

	else if (op == '*')
	{
		res = num1 * num2;
	}

	else
	{
		res = 0;
	}

	printf("%d %c %d = %.1lf", num1, op, num2, res);

	return 0;
}
*/