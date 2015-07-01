#include <stdio.h>
//거스름돈 동전을 어떻게 줄 것인가 정하는 프로그램.
int main(){
	int price, change, num100, num50, num10;
	scanf("%d", &price);
	change = 1000 - price;
	num100 = change / 100;
	num50 = (change - num100 * 100) / 50;
	num10 = (change - num100*100 - num50 * 50) /10;
	printf("%d %d %d", num100, num50, num10);
	return 0;
}