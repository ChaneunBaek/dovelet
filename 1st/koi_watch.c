#include <stdio.h>
int main(){
	//초가 하루보다 더 많이 나올 수 있음. 그래서 또 하루는 %24해준 값으로 출력하자. 시, 분, 초는 이미 각각 일, 시, 분이 최댓값을 초과하지 못하게 나누어주기 때문.
	int currentS, currentM, currentH, howLong, s, resultH, resultM, resultS;
	scanf("%d %d %d\n%d", &currentH, &currentM, &currentS, &howLong);
	s = currentH * 60 * 60 + currentM * 60 + currentS + howLong;
	resultH = s/(60*60);
	resultM = (s - resultH * 60 * 60) / 60;
	resultS = (s - resultH * 60 * 60 - resultM*60);
	printf("%d %d %d", resultH%24, resultM, resultS);
	return 0;
}