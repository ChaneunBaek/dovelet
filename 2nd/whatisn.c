#include <stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	if (n == 10 || n == 9 || n == 1){ printf("1"); }
	else if (n == 8 || n == 7 || n == 3||n==2){ printf("2"); }
	else{ printf("3"); }
	return 0;
}