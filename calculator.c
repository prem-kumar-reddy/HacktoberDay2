#include<stdio.h>
int main()
{
        int a=5,b=10;
        printtf("Sum=%d",sum(a,b));
        printf("Diff=%d",diff(a,b));
        return 0;
}
int sum(int a,int b)
{       return a+b;}
int diff(int a,int b)
{	if(a>b)
	 return a-b;
	else
	return b-a;
}
