#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[max],n,i,j,temp;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
	return 0;
	getch();
}
