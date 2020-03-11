//找出区间内的素数的个数并求和
#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d %d",&n,&m);
	int i,t,result;
	int sum=0,cnt=0;
	for(i=n;i<=m;i++){
		result=1;
		for(t=2;t<i;t++){
		    if( i%t == 0 ){
			    result=0;
			    break;
		    }
	    }
	    if( result == 1){
	        sum += i;
	        cnt++;
        }	
	}  	
	printf("总共%d个 总和是%d",cnt,sum);
	return 0;
 } 
