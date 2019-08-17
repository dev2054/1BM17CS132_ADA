#include <iostream>
using namespace std;
int sqrt(int x)
{
	if(x==0 || x==1)
		return x;
		int start=1, end=x, mid, res;
		while(start<=end)
		{
			mid=(start+end)/2;
			if(mid*mid==x)
				return mid;
				if(mid*mid<x)
					{
					start=mid+1;
					res=mid;
					}
				else
				{
					end=mid-1;
				}
		}
		return res;
}
int main(int argc, char **argv)
{
	int x;
	cout<< "etner value for x"<<"\n";
	cin>>x;
	cout<<sqrt(x)<<"\n";
	return 0;
	
}
