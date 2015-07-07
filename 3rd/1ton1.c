#include <stdio.h>
int main(){
	int i, n,sum=0;
	scanf("%d", &n);
	for (i = 1; i <= n; i++){
		sum += i;
	}
	for (i = 1; i < n; i++){
		printf("%d+",i);
	}
	printf("%d=%d", n, sum);
	return 0;
}