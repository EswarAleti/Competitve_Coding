/*https://open.kattis.com/problems/secretmessage*/
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string msg;
		cin>>msg;
		int size=ceil(sqrt(msg.length())), index=0;
		char mat[size][size];
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				mat[i][j]=index<msg.length()?msg[index++]:'*';
			}
		}

		string encrypt_msg="";
		for(int i=0;i<size;i++)
		{
			for(int j=0;j<size;j++)
			{
				 encrypt_msg = mat[size-1-j][i]!='*'?encrypt_msg+mat[size-1-j][i]:encrypt_msg;
			}
		}
		cout<<encrypt_msg<<endl;
	}
	return 0;
}