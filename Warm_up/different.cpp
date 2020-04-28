/*https://open.kattis.com/problems/different*/
#include<iostream>
using namespace std;

int main()
{
	long long a, b;
	while(cin>>a && cin>>b)
	{
		a>b?cout<<a-b<<endl:cout<<b-a<<endl;
	}
	return 0;
}