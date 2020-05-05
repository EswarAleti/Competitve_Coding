/*https://open.kattis.com/problems/flexible*/
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	int total_width,no_partitions;
	cin>>total_width>>no_partitions;
	int partition_arr[no_partitions+2];
	partition_arr[0]=0;
	partition_arr[no_partitions+1]=total_width;
	
	for(int i=1;i<=no_partitions;i++)
	{
		cin>>partition_arr[i];
	}

	vector<int> poss;
	for(int i=0;i<no_partitions+1;i++)
	{
		for(int j=i+1;j<no_partitions+2;j++)
		{
			int diff = partition_arr[j]-partition_arr[i];
			if(find(poss.begin(),poss.end(),diff)==poss.end())
			{
				poss.push_back(diff);
			}
		}
	}
	sort(poss.begin(),poss.end());

	for(int i=0;i<poss.size();i++)
	{
		cout<<poss[i]<<" ";
	}
	return 0;
}