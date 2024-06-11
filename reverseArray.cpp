#include<iostream>
using namespace std;
int main(){
	int j=4,n,rev[5],arr[5]; //={1,2,3,4,5};
//	int rev[5];
//	int j=4,n;
cout<<"Enter 5 values in array"<<endl;
  for(int i=0; i<5; i++)
	{
	   	cin>>arr[i];
		   n=arr[i];
		   if(j>=0)
		    {
		     rev[j] = n;
			 j--;
		    }
    }  
	cout<<"Reverse = ";
	for(int i=0; i<5; i++)
	  cout<<rev[i]<<" ";
	  
	return 0;
}

