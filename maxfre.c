#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[max],i,n,maximum=0,pos=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		a[a[i]%n]=a[a[i]%n]+n;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>maximum)
		{
		maximum=a[i];
		pos=i;
	    }
	}
	printf("%d",pos);
	return 0;
	getch();
	
}
