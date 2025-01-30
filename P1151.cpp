#include<iostream>
using namespace std;
int k;
bool judge(int n)
{
	int a[6];
	int i=1;
	int n_temp=n;
	while(n_temp>0)
	{
		a[i]=n_temp%10;
		n_temp/=10;
		i++;
	}
	if(((a[5]*100+a[4]*10+a[3])%k==0)&&((a[4]*100+a[3]*10+a[2])%k==0)&&((a[3]*100+a[2]*10+a[1])%k==0))return true;
	else return false;
}
int main()
{
	cin>>k;
	int t=0;
	for(int i=10000;i<=30000;i++)
	{
		if(judge(i)==true){
			cout<<i<<endl;
			t++;
		}
	}
	if(t==0)cout<<"No";
	return 0;
}
