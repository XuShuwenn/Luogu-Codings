#include<iostream>
using namespace std;
int binary_index(int k)
{
	int k_temp=k;
	int l=0;
	while(k_temp>0)
	{
		k_temp/=2;
		l++;
	}
	return l-1;
}
void output(int x)
{
	if(x==0)
	{
		return;
	}	
	else if(x>0)
	{
		if(x>2)
		{
			if(x%2==0)
			{
				printf("2(");
				output(binary_index(x));
				printf(")");	
			}
			else 
			{
				printf("2(");
				output(binary_index(x));
				printf(")+");
				output(x%2);			
			}
		}
		else if(x==2)
		{
			printf("2");
		}		
		else if(x==1)printf("2(0)");
	}
}
int main()
{
	int n;
	cin>>n;
	output(n);
	return 0;
}
