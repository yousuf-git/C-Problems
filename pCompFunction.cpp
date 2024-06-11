#include <iostream>
using namespace std;
void pComp(int n);
int main(){
	int n;
	cout<<"Enter Number: ";
	cin>>n;
	pComp(n);
	return 0;
}

void pComp(int n){
	int c=0;
	for(int i=2;i<=n/2;i++)
	{
	
	    if(n%i==0)
		{
	       c=1;
	       break;
	    }
    }
    if(c==1)
       cout<<n<<" is composite";
    else 
	   cout<<n<<" is prime";
}
