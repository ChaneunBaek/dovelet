#include <stdio.h>
int main(){
	int i, a[8], max=0;
	a[0] = 0;
	for (i = 1; i <= 7; i++){
		scanf("%d", &a[i]);
		if (a[i] > max){ max = a[i]; }
	}
	printf("%d", max);
	return 0;
}