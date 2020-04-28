/*https://open.kattis.com/problems/busnumbers*/


#include<iostream>
#define MAX 1001
using namespace std;

int main()
{
	int no_bus,bus;
	cin>>no_bus;
	int stops[MAX]={0};
	for(int i=0;i<no_bus;i++)
	{
		cin>>bus;
		stops[bus]=1;
	}

	int i=1,j;
	while(i<MAX)
	{
		if(!stops[i])
		{
			i++;
			continue;
		}
		j=i;
		while(j<MAX && stops[j])
		{
			j++;
		}
		(i+1==j)?cout<<i<<" ":(i+2==j)?cout<<i<<" "<<j-1<<" ":cout<<i<<"-"<<j-1<<" ";
		i=j;
		i++;
	}
	return 0;
}