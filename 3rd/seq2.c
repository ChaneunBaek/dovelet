#include <stdio.h>
int main(){
	int i,a;
	scanf("%d", &a);
	int sum = 0;
	for (i = 1; i <= a; i++){
		printf("1..%d %d\n", i, sum+=i);
	}
	return 0;
}