//计算序列 2/1+3/2+5/3+8/5+...的前n项和， 
#include<stdio.h>
int main()
{
	int cnt=1;
	double sum=0.0;
	int a=2,b=1;
	int n;
	scanf("%d",&n);
	while(cnt<=n){
		int t=a;
		sum += 1.0*a/b;
		a += b;
		b=t;
		cnt++;		
	}
	printf("%.2f",sum);
	return 0;
}
