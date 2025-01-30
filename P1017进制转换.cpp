#include<stdio.h>
int n,R,l;
char a[10001];
int main()
{
	scanf("%d %d",&n,&R);
	int m=n;
	l=0;
	while(m!=0){
		l++;
		int r=m%R;
		m=m/R;
		if(r<0){
			r=r-R;
			m=m+1;
		}//需要考虑到余数为负数的情形！
		if(r>=0&&r<=9)a[l]=char(48+r);
		if(r>=10)a[l]='A'+r-10;
	}
	printf("%d=",n);
	if(l>=1)
	{
		for(int i=l;i>=1;i--)
		{
			printf("%c",a[i]);
		}
	}
	if(l==0)printf("0");
	printf("(base%d)",R);
	return 0;
}
