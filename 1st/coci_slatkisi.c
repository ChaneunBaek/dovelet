#include <stdio.h>
#include <math.h>
int main(){//c언어에서는 제곱표시를 ^로 사용하지 않고, math.h의 (int)pow((double)a,i);형식으로 사용함.!!
	int c,k, digit,remain;
	scanf("%d %d", &c, &k);
	digit = pow(10, k - 1);
	remain = ((c%(digit*10))/(digit));
	if (remain >= 5){//올림
		int dig;
		dig = pow(10, k);
		c = c + digit*10 - (c % dig);
		printf("%d", c);
	}
	else{//내림
		c = c - (c%(digit*10));
		printf("%d", c);
	}
	return 0;
}