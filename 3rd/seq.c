#include <stdio.h>
int main(){
	int i,num,startnum, endnum, temp;
	scanf("%d %d", &startnum, &endnum);
	if (startnum > endnum){
		temp = startnum;
		startnum = endnum;
		endnum = temp;
	}
		num = startnum;
		for (i = startnum; i <= endnum; i++){
			printf("%d ", num);
			num++;
		}
	return 0;
}