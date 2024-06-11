#include <iostream>

using namespace std;
void input(int n[], int s);
void show(int n[], int s);
void sum(int n[], int s);
void search(int sr,int n[], int s);
void minmax(int n[], int s);

int main()
{
	int size;
	int i;
	cout<<"Input Size of Array"<<endl;
	cin>>size;
	int a[size];
	input(a,size);
	show(a,size);
//	sum(a,size);
//	minmax(a,size);
//	search(7,a,size);
		return 0;
	
}
void input(int n[], int s)
{
	cout<<"Please Input number"<<endl;
	for(int i=0; i<s; i++)
	cin>>n[i];
}
void show(int n[], int s){
	
	cout<<"Value in the Array"<<endl;
	for(int i=0; i<s; i++)
	cout<<n[i]<<endl;
	
   sum(n,s); //function call in function

}
void sum(int n[], int s)
{
	int sum=0;
	
	for(int i=0; i<s; i++)
	sum=sum+n[i];
	
	cout<<"sum of the Array= "<<sum<<endl;
}
