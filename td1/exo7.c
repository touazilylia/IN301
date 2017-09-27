#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y,mul,mod;
	printf("entrer les nombre a multiplier:");
	scanf("%d%d",&x,&y);
	mod=x%2;
	if(mod=0)
	{
		mul=(x/2)*(2*y);
	}
	
	else
	{
		mul=(x-1)*y+y;
    }
	
	printf("la multipliacation est %d",mul);
	
	return 0;
	}
