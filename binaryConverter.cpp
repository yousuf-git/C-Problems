#include<iostream>
using namespace std;
int main(){
	// this program will display output in reverse...
	int d,n;
	cout<<"Enter a decimal Number: ";
	cin>>n;
    while(n>=1)
    {
		d = n%2;
    	n = n/2;
    	cout<<d;
	}
 return 0;
}
