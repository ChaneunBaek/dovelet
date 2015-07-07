#include <stdio.h>
int main(){
	int i, a[8], min=100;
	a[0] = 0;
	for (i = 1; i <= 7; i++){
		scanf("%d", &a[i]);
		if (a[i] <min){ min = a[i]; }
	}
	printf("%d", min);
	return 0;
}