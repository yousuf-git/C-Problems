#include<iostream>
using namespace std;
int main(){
	int size,max,min;
	cout<<"Enter Number of values in list: ";
	cin>>size;
	cout<<"Enter "<<size<<" values"<<endl;
	int list[size];
	for(int i=0;i<size;i++)
	   cin>>list[i];
    
	max = min = list[0];
    
	for(int i=1;i<size;i++)
	{
	
       if(list[i] > max)
         max = list[i];
       if(list[i] < min)
	     min = list[i]; 
    }    
   cout<<"Range = "<<max-min;
   return 0; 
}
