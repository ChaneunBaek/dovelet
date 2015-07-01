#include <stdio.h>
//두 수 바꾸기
int main(){
	int a, b, temp;
	scanf("%d %d", &a, &b);
	temp = a;
	a = b;
	b = temp;
	printf("%d %d", a, b);
}