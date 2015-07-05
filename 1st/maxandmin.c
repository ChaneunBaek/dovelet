#include<stdio.h>
int min(x, y);
int max(x, y);
int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d", max(min(x, y), x));
	return 0;
}

int min(int x, int y){
	if (x <= y){
		return x;
	}
	else{ return y; }
}

int max(int x, int y){
	if (x <= y){
		return y;
	}
	else{ return x; }
}