#include <stdio.h>
int main(){
	int i, a[8], min=100, max=0;
	a[0] = 0;
	for (i = 1; i <= 7; i++){
		scanf("%d", &a[i]);
		if (a[i] <min){ min = a[i]; }
	}
	for (i = 1; i <= 7; i++){
		if (a[i] > max){ max = a[i]; }
	}
	printf("%d %d",max, min);
	return 0;
}