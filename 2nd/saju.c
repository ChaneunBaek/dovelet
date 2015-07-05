#include <stdio.h>
int main(){
	int y,m,d;
	scanf("%d %d %d", &y, &m, &d);
	y = (y + m + d)%10;
	if (y == 0){ printf("운수대통!"); }
	else{ printf("노력하세요!"); }
	return 0;
}