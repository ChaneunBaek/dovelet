#include <stdio.h>
//op출력. %를 출력하려면 %%로 출력하면 됨.
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d+%d=%d\n", a, b, a + b);
	printf("%d-%d=%d\n", a, b, a - b);
	printf("%d*%d=%d\n", a, b, a * b);
	printf("%d\/%d=%d\n", a, b, a / b);
	printf("%d%%%d=%d", a, b, a % b);
}