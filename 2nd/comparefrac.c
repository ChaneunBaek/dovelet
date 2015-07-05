#include<stdio.h>
int main(){
	double a, b, c, d;
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	a = a / b;
	c = c / d;
	if (a > c){ printf("1"); }
	else if (a == c){ printf("0"); }
	else{ printf("-1"); }
	return 0;
}