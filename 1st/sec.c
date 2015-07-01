#include <stdio.h>
//초를 일 시 분 초로 변환
int main(){
	int s, day, hour, min, sec;
	scanf("%d", &s);
	
	day = s / (60 * 60 * 24);
	hour = (s - day * 60 * 60 * 24) / (60 * 60);
	min = (s - day * 60 * 60 * 24 - hour * 60 * 60) / 60;
	sec = (s - day * 60 * 60 * 24 - hour * 60 * 60 - min * 60);

	printf("%d %d %d %d", day, hour, min, sec);
	return 0;
}