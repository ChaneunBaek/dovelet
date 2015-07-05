#include <stdio.h>
int main(){
	int r,e,c;
	scanf("%d %d %d", &r, &e, &c);
	int a = e - c;
	if (r > a){ printf("do not advertise"); }
	else if (r < a){ printf("advertise"); }
	else{ printf("does not matter"); }
	return 0;
}