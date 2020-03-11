#include<stdio.h>
int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	int t,cnt=0;
    do{
    	scanf("%d",&t);
    	cnt++;
    	if(t<0){
			cnt=n+1;
			break;
		} else if(t>m){
    		printf("Too big\n");
		} else if(t<m){
			printf("Too small\n");
		}		
	}while( t != m );
	if(cnt == 1){
		printf("Bingo!");
	} else if(cnt<=3){
		printf("Lucky You!");
	} else if(cnt<=n){
		printf("Good Guess!");
	} else {
		printf("Game Over");
	}
	return 0;
}
