//�ҳ�100���ڵ����� 
#include <stdio.h>
int main()
{
	int a,b,x=0;
	int cnt=0;
	for(a=2;cnt<50;a++){
		int isprime=1;//x��������
		for(b=2;b<a;b++){
			if(a%b==0){
				isprime=0;
				break;
			}			
		}
		if(isprime==1){
			printf("%-5d",a);
			cnt++;
			if(cnt%5==0){
			printf("\n");
			}
		}
	}
}
