#include <stdio.h>
int main(){
	int a, b, c,result;
	scanf("%d %d %d", &a, &b, &c);
	result = (a + b + c - 6) * 4;
	printf("%d", result);
	return 0;
}