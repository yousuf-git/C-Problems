#include<iostream>
using namespace std;
int main(){
	int num[10];
	cout<<"Enter 10 numbers "<<endl;
	for(int i=0;i<10;i++)
	   cin>>num[i];
	int sq[10];
	
	for(int i=0;i<10;i++)
	   sq[i] = num[i] * num[i];   
    
	cout<<"Input Array: ";
	for(int i=0;i<10;i++)
       cout<<num[i]<<" ";
    
	cout<<endl<<"Square Array: ";
	for(int i=0;i<10;i++)
       cout<<sq[i]<<" ";   
	
	return 0;
}
