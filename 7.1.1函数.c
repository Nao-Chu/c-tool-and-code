//��1��10,20-30,35-45��������
#include<stdio.h>
int sum(int i,int n)
{
	int sum=0;
	for(;i<=n;i++){
		sum += i;
	}
	printf("%d",sum);
}
int main()
{
	int i,n;
	scanf("%d,%d",&i,&n);
	sum(i,n);
	return 0;
 } 
