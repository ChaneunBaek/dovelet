#include <stdio.h>
int main(){
	int out;
	float remain;
	scanf("%d %f", &out, &remain);
	if (out % 5 != 0 || remain - out - 0.5<0){ printf("%.2f", remain); }
	else{ printf("%.2f", remain - out - 0.5); }
	return 0;
}