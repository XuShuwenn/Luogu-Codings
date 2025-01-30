#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	long long a[1001],d[1001];
	int n;
	cin>>n;
	a[0]=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		d[i-1]=abs(a[i]-a[i-1]);
	}
	int s=0;
	for(int i=1;i<=n-1;i++)
	{
		for(int j=1;j<=n-1;j++)
		{
			if(d[j]==i){
				s++;
				break;
			}
		}
	}
	if(s==n-1)cout<<"Jolly";
	else cout<<"Not jolly";
	return 0;
}
