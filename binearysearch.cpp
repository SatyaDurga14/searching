//Bineary search
#include<iostream>
using namespace std;
int BS(int low,int high,int arr[],int k)
{
	while(low<high)
	{
	 int mid=(low+high)/2;
	   if(arr[mid]==k)
	   {
	    	return mid;
	   }
	   if(arr[mid]<arr[0])
	   {
	     	if(k>=arr[0] or k<arr[mid])
	     	{
	 	   	 high=mid-1;
	     	}
	     	else
	    	{
			 low=mid+1;
	     	}
	    }
	   else
	   {
	     if(k>arr[mid] or k<arr[0])
	    {
	     	low=mid+1;	
	    }
       }
    }
}
int main()
{
	int n,k,res,low,high;             // len of array elements and key(search element)
	cin>>n>>k;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	low=0;
	high=n-1;
	cout<<BS(low,high,arr,k);
	return 0;	
}
