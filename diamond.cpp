#include<iostream>
using namespace std;
int main()
{
	int n;
	cout <<"Enter Number of lines for diamond (lines must be odd): ";
	cin >>n;
	
	int spaces = n/2;
	int steric = 1;
	
	cout<<endl;
	
	for(int i=1 ; i<=n ; i++)
	{
		for(int j=1; j<=spaces; j++)
		    cout<<" ";
		
		for(int k=1; k<=steric ; k++)
		    cout<<"*";
	    
		cout<<endl;

		if(i<=n/2)
		{
		  	spaces--;
		  	steric+=2;
		} 
	    else 
	    {
	    	spaces++;
		  	steric-=2;
		}
	}
   return 0;
}
