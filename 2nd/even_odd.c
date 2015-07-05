#include <stdio.h>
int main(){
	int a,b,aa,bb;
	scanf("%d %d", &a, &b);
	if (a % 2 == 0){ aa = 0; }//짝수면 0, 홀수면 1
	else{ aa = 1; }
	if (b % 2 == 0){ bb = 0; }
	else{ bb = 1; }
	if (aa == 1){ if (bb == 1){ printf("odd+odd=even\nodd*odd=odd"); } else{ printf("odd+even=odd\nodd*even=even"); } }
	else{
		if (bb == 1){ printf("even+odd=odd\neven*odd=even"); }
		else{ printf("even+even=even\neven*even=even"); }
	}
	return 0;
}