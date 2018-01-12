#include <iostream>
using namespace std;

int main() {
	int n,i,j,temp,r=0,flag=0;
	cin>>n;
	int a[n],b[n];
	for(i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	        if(a[i]>a[j])
	        {
	            temp=a[i];
	            a[i]=a[j];
	            a[j]=temp;
	        }
	    }
	}
	b[r]=a[0];
	r++;
	for(i=1;i<n;i++)
	{
	    for(j=0;j<r;j++)
	    {
	        if(a[i]==b[j])
	        {
	            flag=1;
	        }
	    }
	    if(flag==0)
	    {
	        b[r]=a[i];
	        r++;
	    }
	    flag=0;
	}
	for(i=0;i<r;i++)
	{
	    cout<<b[i];
	}
	return 0;
}
