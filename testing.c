#include <stdio.h>

int main(void){
	// test fill buffer
	int i,j;
	
	scanf("%d%d",&i,&j); // entry : _1__203___4
	printf("%d %d",i,j); // print : 1 203
	// still in buffer : ___4
	
	return 0;
}