//约分最简分式
//6/12==1/2;8/11==8/11;4/4=1;
#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	int i,t=1;
	for(i=1;i<=a&&i<=b;i++){
		if(a%i==0&&b%i==0){
			t=i;
		}
	}
	printf("%d/%d",a/t,b/t);
	return 0;
 } 
