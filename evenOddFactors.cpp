#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	for(int i=2;i<=a/2;i++)
	{
	
	   if(a%i==0)
	    {
	     if(i%2==0)
	        cout<<"Even : "<<i<<endl;
	     else
           cout<<"Odd : "<<i<<endl;
	    }
	}


}
