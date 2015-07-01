#include <stdio.h>
//소숫점 둘째자리까지 출력하고싶을 땐 printf에서 %.2f 이렇게 표현.
int main(){
	int w, h;
	float result;
	scanf("%d %d", &w, &h);
	result = w*h / 2.0;
	printf("%.2f", result);
}