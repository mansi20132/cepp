#include<conio.h>
#define max 100
int main()
{
	int a[max],n,temp,i,j;
	printf("enter the limit");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
   for(i=0;i<n;i++)
       {
	      printf("%d",a[i]);
       }
          return 0;
           getch();
}
