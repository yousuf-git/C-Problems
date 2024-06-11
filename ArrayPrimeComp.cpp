#include<iostream>
using namespace std;
void input(int n[],int s);
void primeComp(int n[],int s);
int main()

{
	int size;
	int a[size];
	cout<<"Enter size"<<endl;
	cin>>size;
	input(a,size);
	primeComp(a,size);
	return 0;
}
void input(int n[],int s)
{
	int i;
	cout<<"Enter array"<<endl;
	for(i=0;i<s;i++)
	    cin>>n[i];
	    
	//primeComp(n,s);
	    
}
void primeComp(int n[],int s)
{

	//int c,i,n[];
	int x,c;
	// n[]=n[i];
	for(int i=0;i<s;i++)
	{
	    c=0;
		x = n[i];
		for(int j=2;j<=x/2;j++)
	    {    
	        //if(n%2==0)
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
