/*https://open.kattis.com/problems/server*/
#include<iostream>
using namespace std;

int main()
{
	int n,T,time,count=0,sum=0;
	cin>>n>>T;
	for(int i=0;i<n;i++)
	{
		cin>>time;
		sum+=time;
		if(sum>T)
		{
			break;
		}
		count++;
	}
	cout<<count<<endl;
	return 0;
}