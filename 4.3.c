//�ҳ������ڵ������ĸ��������
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
	printf("�ܹ�%d�� �ܺ���%d",cnt,sum);
	return 0;
 } 
