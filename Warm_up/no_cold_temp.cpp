/*https://open.kattis.com/problems/cold*/
#include<iostream>
using namespace std;

int main()
{
	int n,t,count=0;
	cin>>n;
	while(n--)
	{
		cin>>t;
		if(t<0)
		{
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}