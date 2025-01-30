#include<iostream>
#include<cmath>
using namespace std;
int n,l;
int s[100000];//定义S[]为阶乘之和
int x[100];//定义x[]为当前项
void add(int a[],int b[])
{
	for(int i=1;i<=103;i++)
	{
		b[i]+=a[i];
		b[i+1]+=b[i]/10;
		b[i]%=10;
	}
}
void mul(int a,int b[])
{
	for(int i=1;i<=100;i++)
	{
		b[i]=a*b[i];
	}
	for(int j=1;j<=102;j++)
	{
		b[j+1]+=b[j]/10;
		b[j]%=10;
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<100000;i++)
	{
		s[i]=0;
	}
	for(int i=0;i<100;i++)
	{
		x[i]=0;
	}
	x[1]=1;//初始化：1
	for(int i=1;i<=n;i++)
	{
		mul(i,x);
		add(x,s);//把当前项加到S中去
	}
	l=103;
	while((s[l]==0)&&l>0)l--;
	for(int i=l;i>=1;i--)
	{
		cout<<s[i];
	}
	return 0;
}
