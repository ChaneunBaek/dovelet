#include <stdio.h>
int main(){
	int a,b,c,d,cal;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if (a == 1){ cal = 461; }
	else if (a == 2){ cal = 431; }
	else if (a == 3){ cal = 420; }
	else{ cal = 0; }

	if (b == 1){ cal += 130; }
	else if (b == 2){ cal += 160; }
	else if (b == 3){ cal += 118; }
	else{ cal += 0; }

	if (c == 1){ cal += 100; }
	else if (c == 2){ cal += 57; }
	else if (c == 3){ cal += 70; }
	else{ cal += 0; }

	if (d == 1){ cal += 167; }
	else if (d == 2){ cal += 266; }
	else if (d == 3){ cal += 75; }
	else{ cal += 0; }

	printf("Your total Calorie count is %d.", cal);
	return 0;
}