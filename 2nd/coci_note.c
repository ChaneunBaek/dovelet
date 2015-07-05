#include <stdio.h>
int main(){

	int a[9], order;
	a[0] = 0;
	int i;
	for (i = 1; i <= 8; i++){
		scanf("%d", &a[i]);
	}

	if (a[2] > a[1]){
		order = 1;
		for (i = 3; i <= 8; i++){
			if (a[i] < a[i - 1]){
				order = 0;
			}
		}
	}
	else {
		order = -1;
		for (i = 3; i <= 8; i++){
			if (a[i] > a[i - 1]){
				order = 0;
			}
		}
	}

		if (order == 0){
			printf("mixed");
		}
		else if (order == 1){
			printf("ascending");
		}
		else{
			printf("descending");
		}

return 0;
}