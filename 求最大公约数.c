//����������a��b,������ǵ����Լ��,�� 12 18.���6�� 
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
			printf("���Լ��Ϊ%d\n",i);
			break;
		}
	}
 } 
