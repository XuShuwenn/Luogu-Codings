#include<iostream>
#include<cmath>
using namespace std;
int n,l;
int s[100000];//����S[]Ϊ�׳�֮��
int x[100];//����x[]Ϊ��ǰ��
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
	x[1]=1;//��ʼ����1
	for(int i=1;i<=n;i++)
	{
		mul(i,x);
		add(x,s);//�ѵ�ǰ��ӵ�S��ȥ
	}
	l=103;
	while((s[l]==0)&&l>0)l--;
	for(int i=l;i>=1;i--)
	{
		cout<<s[i];
	}
	return 0;
}
