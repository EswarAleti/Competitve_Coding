/*https://open.kattis.com/problems/mandelbrot*/
#include<iostream>
#include <math.h>
using namespace std;

int main()
{
	double x,y,z_x,z_y;
	int no_iterations;
	int case_no=0;
	int flag;
	while(cin>>x && cin>>y && cin>>no_iterations && ++case_no)
	{
		z_x=0;
		z_y=0;
		flag=0;
		for(int i=0;i<no_iterations;i++)
		{
			double temp_x = (z_x*z_x)-(z_y*z_y);
			double temp_y = 2*z_x*z_y;
			z_x = temp_x+x;
			z_y = temp_y+y;
			if(sqrt(z_x*z_x+z_y*z_y)>2)
			{
				flag=1;
				break;
			}
		}
		flag==1?cout<<"Case "<<case_no<<": OUT"<<endl:cout<<"Case "<<case_no<<": IN"<<endl;
	}
	return 0;
}