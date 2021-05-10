#include<stdio.h>
int main(){
    int i,j,n,sum;
	scanf("%d\n",&n);
	for(i=2;i<=n;i++)
	{
	sum = 1;
	for(j=2;j<i;j++)
	{
	if(i%j==0)
	sum += j;
	}
	
    if(sum==i) printf("so hoan hao la %d\n",i);
	}
    return 0;

}
