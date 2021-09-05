#include<iostream>
using namespace std;
int  sqrt(int n)
{
	int y=0;
	while(y*y<=n)
	{
		y++;
	}
	return y-1;
	
}
int main()
{
	int n;
	cin>>n;
	cout<<sqrt(n);
	return 0;
	
}
