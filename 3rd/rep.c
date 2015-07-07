#include <stdio.h>
int main(){
	int i,n,num=0;
	scanf("%d", &n);
	for(i = 0; i < n; i++){
		printf("%d ", ++num);
	}
	return 0;
}