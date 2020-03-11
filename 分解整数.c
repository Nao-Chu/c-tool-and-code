//正序分解整数 ，12345~~~1 2 3 4 5 ;
#include<stdio.h>
int main()
{
	int a,b,i;
	scanf("%d",&a);
    int num[100];
    for(i=0;a>0;i++){
    	b=a%10;
    	a/=10;
    	num[i]=b;
	}
	for(i--;i>=0;i--){
		printf("%d ",num[i]);
	}
 } 
 // 12345   -->得出1,2,3,4,5.然后依次输出
 //12345/10 -->1234
 //12345%10 -->5 
