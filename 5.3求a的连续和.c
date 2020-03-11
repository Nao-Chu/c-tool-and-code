//输入a，n；a的范围是[0,9],n的范围是[0,8]，求S=a+aa+aaa+(n个a)的和
#include<stdio.h>
int main()
{
	int a,n;
	scanf("%d %d",&a,&n);
	int cnt,s=0,t=a;
	for(cnt=0;cnt<n;cnt++){
		s += a;
		a = a*10+t;
	}
	printf("%d",s);
	return 0;
 } 
 
 
