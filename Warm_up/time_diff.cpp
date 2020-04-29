/*https://open.kattis.com/problems/natrij*/
#include<iostream>
using namespace std;

int main()
{
	string time1,time2;
	cin>>time1;
	cin>>time2;

	int hr1 = stoi(time1.substr(0,2));
	int min1 = stoi(time1.substr(3,2));
	int sec1 = stoi(time1.substr(6,2));

	int hr2 = stoi(time2.substr(0,2));
	int min2 = stoi(time2.substr(3,2));
	int sec2 = stoi(time2.substr(6,2));

	if(hr1==hr2 && min1==min2 && sec1==sec2)
	{
		cout<<"24:00:00"<<endl;
		return 0;
	}

	int sec = sec1<=sec2?sec2-sec1:(60-sec1)+sec2;
	int min = min1<=min2 ?min2-min1:(60-min1)+min2;
	min = sec1<=sec2?min:min-1;
	int hr = hr1<=hr2?hr2-hr1:(24-hr1)+hr2;
	hr = min1<=min2?hr:hr-1;
	//Case: 01:00:59 02:00:01
	hr = min==-1?hr-1:hr;
	min = min==-1?59:min;

	to_string(hr).length()==1?cout<<"0"<<hr<<":":cout<<hr<<":";
	to_string(min).length()==1?cout<<"0"<<min<<":":cout<<min<<":";
	to_string(sec).length()==1?cout<<"0"<<sec:cout<<sec;	
	return 0;
}