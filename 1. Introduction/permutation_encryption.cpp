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
		// Termination case
		if(size==0)
		{
			break;
		}
		// Input permutation from user
		int perm_arr[size];
		for(int i=0;i<size;i++)
		{
			cin>>perm_arr[i];
		}
		// Clearing buffer
		cin>>ws;
		// Message from user
		getline(cin,msg);

		string encrypt_msg="";
		int segment = 0;
		while(segment<msg.length())
		{
			for(int i=0;i<size;i++)
			{
				// Encypt index
				int index = segment+perm_arr[i]-1;
				// If index out of message size then use white space
				encrypt_msg += index<msg.length()?msg[index]:' ';
			}
			// Increment segment by size
			segment+=size;
		}
		// Output
		cout<<"\'"<<encrypt_msg<<"\'"<<endl;
	}
	return 0;
}