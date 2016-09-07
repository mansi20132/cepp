#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int x=0,i,n,a[max];
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		x=x^a[i];
	}
	printf(" number which occurs odd number of time =%d",x);
	return 0;
	getch();
}
