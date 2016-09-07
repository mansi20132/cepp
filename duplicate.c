#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[max],n,i,flag=0;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[abs(a[i])]==0)
		{
			a[abs(a[i])]=999;
		}
		else
		if(a[abs(a[i])]>0 &&abs(a[i])!=999)
		{
			
			a[abs(a[i])]=a[abs(a[i])] * (-1);
		}
		else
		if(a[abs(a[i])]<0||a[abs(a[i])]==999)
		{
			printf("yes");
			flag=1;
			break;
		}
	
   }
		if(flag==0)
		{
			printf("no duplicate");
        }
		return 0;
		getch();
}
	
	
	
	

