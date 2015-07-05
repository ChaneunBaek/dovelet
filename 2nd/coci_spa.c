#include <stdio.h>
int main(){
	int h,m,change,resulth,resultm;
	scanf("%d %d", &h, &m);
	change = 60 * h + m-45;
	resulth = change / 60;
	resultm = (change - resulth * 60);
	printf("%d %d", resulth, resultm);
	return 0;
}