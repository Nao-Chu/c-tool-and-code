//输入一个正整数。输出逆序的数 
#include<stdio.h>
int main()
{
    int a,b,x=0;
	scanf("%d",&a);	
	while(a>0){
	b=a%10;
	a/=10;
	x=x*10+b;
	}
	printf("%d",x);
 } 
