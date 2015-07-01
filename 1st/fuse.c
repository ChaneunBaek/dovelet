#include <stdio.h>
//이것 좀 오래 걸렸다! 조심.
int main(){
	//scanf, printf할 때 반드시 선언해준 변수형과 같은 타입으로 입,출력한다!! 안그러면 0.0000이나 0으로 인식함.
	float computer, printer, router,  result;
	int remaining,ampere;
	int total;
	scanf("%f %f %f", &computer, &printer, &router);
	ampere = (computer*2.5 + printer*2.0 + router*0.5) * 2.0;//퓨즈 최소 필요한 전력

	if (ampere % 10 != 0){
		remaining = (ampere / 10);//1의 자리 이하만 생각해주려고.
		result = ampere - remaining * 10.0;//남은 1의 자리 이하의 수
		total = ampere + (10 - result);
	}
	else{ total = ampere; }
	printf("%d amperes",total);
	return 0;
}