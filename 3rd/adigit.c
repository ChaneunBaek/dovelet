#include <stdio.h>
int main(){
	int i, a[8],sum1 = 0, sum2 = 0, sum3 = 0;

	for (i = 1; i <= 7; i++){
	scanf("%d", &a[i]);
	if (a[i] < 10){ sum1 += a[i]; }
	else if (a[i] < 100){ sum2 += a[i]; }
	else{sum3 += a[i];}
	}
	printf("%d %d %d", sum1, sum2, sum3);
	return 0;
}