// 99 ³Ë·¨±í
#include<stdio.h>
int main()
{
	int i,j;
	int sum=0;
	for(i=1;i<10;i++){
		for(j=1;j<=i;j++){
			sum=i*j;
			printf("%d*%d=%d\t",j,i,sum);
		}
		printf("\n");
	}
	return 0;
 } 
