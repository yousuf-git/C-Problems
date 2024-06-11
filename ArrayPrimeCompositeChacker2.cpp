#include<iostream>
using namespace std;
void primeComp(int n[],int s);
int main()

{
	int size;
	cout<<"Enter size"<<endl;
	cin>>size;
	int a[size];
	cout<<"Enter "<<size<<" values"<<endl;
	for(int i=0;i<size;i++)
	   cin>>a[i];
	   
	primeComp(a,size);
	return 0;
}

void primeComp(int n[],int s)
{
	int x,c;
	for(int i=0;i<s;i++)
	{
	    x = n[i];
		c=0;
		for(int j=2;j<=x/2;j++)
	    {    
            if(x%j==0)
			{
		        c=1;
		        break;
	        }
        }
		if(c==1)
	        cout<<x<<" is Composite"<<endl;
	    else
	        cout<<x<<" is Prime"<<endl;
	}
	
}
