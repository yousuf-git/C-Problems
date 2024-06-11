#include<iostream>
using namespace std;
int main(){
	int n,size,positive,negative,zero;
	positive = negative = zero = 0;
	cout<<"Enter Total Numbers: ";
	cin>>size;
	cout<<"Enter "<<size<<" Numbers"<<endl;
	for(int i=1;i<=size;i++)
	{
	    cin>>n;
        if(n>0)
          positive++;
        else if(n<0)
		   negative++;
		else
		   zero++;     	       
	}
  cout<<"Total Positive = "<<positive<<endl;
  cout<<"Total Negative = "<<negative<<endl;
  cout<<"Total Zero = "<<zero<<endl;
  return 0;
}
