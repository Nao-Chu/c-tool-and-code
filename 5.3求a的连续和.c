//����a��n��a�ķ�Χ��[0,9],n�ķ�Χ��[0,8]����S=a+aa+aaa+(n��a)�ĺ�
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
 
 
