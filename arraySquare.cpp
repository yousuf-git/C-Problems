#include<iostream>
using namespace std;
int main()
{
	int a[5];
	int i,n,sq;
	cout<<"Enter values in array (Max 5)"<<endl;
	for(i=0;i<5;i++)
	{
		cin>>a[i];
		n=a[i];
		sq=n*n;
		cout<<"Square of "<<n<<" is  ";
		cout<<sq;
		cout<<endl;
	}
   return 0;
}
