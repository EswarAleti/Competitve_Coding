/*https://open.kattis.com/problems/collatz*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	long long a,b;
	while(cin>>a>>b)
	{
		if(a==0 && b==0)
		{
			break;
		}
		vector<long long> v;
		v.push_back(a);
		long long temp=a;
		while(temp!=1)
		{
			if(temp%2==0)
			{
				temp/=2;
			}
			else
			{
				temp=temp*3+1;
			}
			v.push_back(temp);
		}

		temp=b;
		long long steps=0;
		while(find(v.begin(),v.end(),temp)==v.end())
		{
			if(temp%2==0)
			{
				temp/=2;
			}
			else
			{
				temp=temp*3+1;
			}
			steps++;
		}
		for(long long i=0;i<v.size();i++)
		{
			if(v[i]==temp)
			{
				cout<<a<<" needs "<<i<<" steps, "<<b<<" needs "<<steps<<" steps, they meet at "<<temp<<endl;
				break;
			}
		}
	}
	return 0;
}