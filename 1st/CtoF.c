#include <stdio.h>
//섭씨를 화씨로 바꾸어 주는 프로그램.
int main(){
	int c;
	float f;
	scanf("%d", &c);
	f = 1.8*c+32;
	printf("%.2f", f);
}