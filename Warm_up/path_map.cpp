/*https://open.kattis.com/problems/pathtracing*/
#include<iostream>
#include <cstring>
#define MAX 1001
using namespace std;

int main()
{
	char map[MAX][MAX];
	memset(map,' ',sizeof(map));
	int row=500,col=500;
	int left_limit=col,right_limit=col,up_limit=row,down_limit=row;
	string direction;
	while(cin>>direction)
	{
		if(direction=="up")
		{
			row--;
			map[row][col]='*';
			up_limit = up_limit>row?row:up_limit;
		}
		else if(direction=="down")
		{
			row++;
			map[row][col]='*';
			down_limit = down_limit<row?row:down_limit;
		}
		else if(direction=="left")
		{
			col--;
			map[row][col]='*';
			left_limit = left_limit>col?col:left_limit;
		}
		else if(direction=="right")
		{
			col++;
			map[row][col]='*';
			right_limit = right_limit<col?col:right_limit;
		}
		else
		{
			break;
		}
	}
	map[500][500]='S';
	map[row][col]='E';
	for(int i=left_limit-1;i<=right_limit+1;i++)
	{
		map[up_limit-1][i]='#';
		map[down_limit+1][i]='#';
	}
	for(int i=up_limit-1;i<=down_limit+1;i++)
	{
		map[i][left_limit-1]='#';
		map[i][right_limit+1]='#';
	}
	for(int i=up_limit-1;i<=down_limit+1;i++)
	{
		for(int j=left_limit-1;j<=right_limit+1;j++)
		{
			cout<<map[i][j];
		}
		cout<<endl;
	}
	return 0;
}