#include <stdio.h>
#include <math.h>
#define true 1
#define false 0

int sushu(int n)
{
	int i;
	for(i=2;i<=sqrt(n)+1;++i){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int huiwen(int n)
{
	int test=0;
	int ans=n;
	if(n%11 == 0 && n != 11)
	    return false;
	while(n!=0){
		test=test*10+n%10; 
		n/=10;
	}
	if(ans==test) return true;
	return false;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	for(;a<=b;a+=2){
		if(a==2){
			printf("2\n");
			a++; 
		} 
		else if(a%2==0){
			a-=1;
			continue;
		}
		else if(a > 9999999)
		    break;
		
		if(huiwen(a))
			if(sushu(a))
				printf("%d\n",a);
	}
	return 0;
}