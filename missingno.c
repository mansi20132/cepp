#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[max],n,i,sum1=0,sum2=0,diff=0;
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n-1;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		sum1=sum1+a[i];
	}
	sum2=((n*(n+1))/2);
	diff=sum2-sum1;
	printf("Missing number is =%d",diff);
	return 0;
	getch();
}
