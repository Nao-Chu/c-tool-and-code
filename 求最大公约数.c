//输入两个数a和b,输出他们的最大公约数,例 12 18.输出6； 
#include<stdio.h>
int main()
{
	int a,b,min;
	scanf("%d %d",&a,&b);
	int i;
	int n=0,m=0;
	if(a>b){
		min=b;
	}else{
		min=a;
	}
	for(i=min;i>0;i--){
		n=a%i;
		m=b%i;
		if(n==0&&m==0){
			printf("最大公约数为%d\n",i);
			break;
		}
	}
 } 
