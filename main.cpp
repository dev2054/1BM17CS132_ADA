#include <iostream>

using namespace std;

int main()
{
	int *a=NULL,i,j,k,n,temp;
	cout<<"Enter the no of elements:";
	cin>>n;
	cout<<"Enter the value of k:";
	cin>>k;
	a=new int[n];
	cout<<"Enter the array elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]<a[j+1])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"The k largest elements are:";
	for(i=0;i<k;i++)
		cout<<a[i]<<" ";
	
}