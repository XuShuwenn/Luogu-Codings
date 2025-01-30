#include<stdio.h>
int x0,y0,P,Q;
int main()
{
	int s=0;
	scanf("%d %d",&x0,&y0);
	if(x0>y0)printf("0");
	if(x0==y0)printf("1");
	if(x0<y0)
	{
		for(int i=x0;i<=y0;i++)
		{
			if(i%x0==0&&y0%i==0)
			{
				for(int j=y0;j>=x0;j--)
				{
					if(i*j==x0*y0&&j%x0==0&&y0%j==0)s++;
				}
			}
		}
		printf("%d",s);
	}
	return 0;
}  
