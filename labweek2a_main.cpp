#include<iostream>

using namespace std;
int main(){
int n, i,a[20],j, temp;
cout<<"enter total number of elements";
cin>>n;
cout<<"enter"<<n<<"numbers:";
for(i=0;i<n;i++)
{
	cin>>a[i];
}
for(i=0;i<(n-1);i++)
{
	for(j=0;j<(n-i-1);j++)
	{
		if(a[j]>a[j+1])
		{
		temp=a[j];
		a[j]=a[j+1];
		a[j+1]=temp;

		}
	}
}
cout<<"sorted list in ascending order:\n";
for(i=0;i<n;i++)
{
	cout<<" "<<a[i]<<" ";
}
int k;
cout<<"\nenter the value of k\n";
cin>>k;
for(i=0;i<n;i++)
	{
	if(i+1==k)
		{
		cout<<"kth element is\n";
		cout<<a[i];
		}
	}
}





