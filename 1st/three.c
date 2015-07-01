#include <stdio.h>
int main(){
	int a,b,digit1,digit10,digit100;
	scanf("%d\n%d", &a, &b);
	//일,십,백의 자리 구별하기
	digit100 = b / 100;
	digit10 = (b - digit100 * 100) / 10;
	digit1 = (b - digit100 * 100 - digit10 * 10);
	printf("%d\n%d\n%d\n%d", digit1*a, digit10*a, digit100*a, a*b);
	return 0;
}