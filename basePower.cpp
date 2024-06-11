#include<iostream>
using namespace std;
int main()
{
	int num[5] = {2,4,6,8,3};
	int temp;
    for(int i=0;i<5;i++)
    {
	   for(int j=i+1;j<5;j++)
	      if(num[i]<num[j])
	        {
	     	  temp = num[i];
	     	  num[i] = num[j];
		      num[j] = temp;
		    }
	}
	
	for(int j=0;j<5;j++)
	    cout<<num[j]<<" ";
	
	return 0;
}
