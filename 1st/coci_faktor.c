#include <stdio.h>
int main(){
	int y,z,x;
	scanf("%d %d", &y, &z);
	x = y*(z - 1) + 1;
	printf("%d", x);
	return 0;
}