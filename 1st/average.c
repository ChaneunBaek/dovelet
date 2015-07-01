#include <stdio.h>
int main(){
	int w, h,a, t;
	float result;
	scanf("%d %d %d %d", &w, &h, &a, &t);
	result = (w+h+a+t) / 4.0;
	printf("%.2f", result);
}