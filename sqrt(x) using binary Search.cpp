#include<bits/stdc++.h>
using namespace std;
int  sqrt(int n)
{
	long long low=0;
	long long high=INT_MAX;
	long long y=0;
	while(low<=high)
	{
		
		long long middle=low+(high-low)/2;
		if(middle*middle<=n){
			y=middle;
			low=middle+1;
		}
		else{
			high=middle-1;
		}
	}
	return y;
	
}
int main()
{
	int n;
	cin>>n;
	cout<<sqrt(n);
	return 0;
	
}
