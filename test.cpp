#include<iostream>
using namespace std;
struct record{
	string name;
	float pop;
	
};
void maxPop(record rec[]);

int main() {
	record r[10];
	int c=1;
	cout<<"Enter Record of 10 countries "<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<c<<endl;
		cout<<"Name: ";
		cin>>r[i].name;
	    cout<<"Population in Millions: ";
		cin>>r[i].pop;
		c++;
	}
	maxPop(r);
	return 0;
}
void maxPop(record rec[])
{
	
	float max = rec[0].pop;
	int maxLoc = 0;
	for(int i=1;i<10;i++)
	{
		if(max < rec[i].pop)
		{
		   max = rec[i].pop;
		   maxLoc = i;
	    }
	}
	cout<<"Name\tPopulation"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<rec[i].name<<"        "<<rec[i].pop<<endl;
	}
	
//    cout<<"Max Population Record"<<endl;
//    cout<<"Name: "<<rec[maxLoc].name<<endl;
//    cout<<"Population: "<<rec[maxLoc].pop;
//    
}
