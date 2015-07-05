#include <stdio.h>
int main(){
	float a,b,c, check=0;
	scanf("%f %f %f", &a, &b, &c);
	if (a <= 4.5 && b >= 150 && c >= 200){ printf("Wide Receiver "); check=1;}
	if (a <= 6.0 && b >= 300 && c >= 500){ printf("Lineman "); check=1;}
	if (a <= 5.0 && b >= 200 && c >= 300){ printf("Quarterback"); check=1;}
	if (check==0){ printf("No positions"); } //아무것에도 해당하지 않으면 조건을 만들고싶을 땐, (else를 쓸 수 없는 상황). check라는 변수를 만들어서 만족하는 조건이 있는지 아닌지 표시해두자.
	return 0;
}