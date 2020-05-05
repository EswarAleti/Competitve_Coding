/*https://open.kattis.com/problems/permutationencryption*/
#include<iostream>
using namespace std;

int main()
{
	int size;
	string msg;	
	while(true)
	{
		cin>>size;
		if(size==0)
		{
			break;
		}
		int perm_arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>perm_arr[i];
		}
		cin>>ws;
		getline(cin,msg);

		string encrypt_msg="";
		int segment = 0;
		while(segment<msg.length())
		{
			for(int i=0;i<size;i++)
			{
				int index = segment+perm_arr[i]-1;
				encrypt_msg += index<msg.length()?msg[index]:' ';
			}
			segment+=size;
		}
		cout<<"\'"<<encrypt_msg<<"\'"<<endl;
	}
	return 0;
}