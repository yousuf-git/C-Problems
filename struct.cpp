#include<iostream>
using namespace std;
struct student{
	int Roll_No;
	float GPA;
	char grade;
};
int main()
{
	student st[5];
	int c=1; // records counter
	cout<<"Enter 5 Students Record "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<endl<<c<<". "<<endl;
		cout<<"Roll No: ";
		cin>>st[i].Roll_No;
		cout<<"GPA: ";
		cin>>st[i].GPA;
		cout<<"Garde: ";
	    cin>>st[i].grade;
	    c++;
	}
	c=1;
	cout<<"Your input records are"<<endl;
	for(int i=0;i<5;i++)
	{
		if(st[i].GPA<2)
		{
	      cout<<c<<endl;
		  cout<<"Roll No: "<<st[i].Roll_No<<endl;
	      cout<<"GPA: "<<st[i].GPA<<endl;
	      cout<<"Grade: "<<st[i].grade<<endl;
		  c++;
		}
	}
	
	
	cout<<"Students with GPA < 2 are"<<endl;
	for(int i=0;i<5;i++)
	{
		if(st[i].GPA<2)
		{
	      cout<<c<<endl;
		  cout<<"Roll No: "<<st[i].Roll_No<<endl;
	      cout<<"GPA: "<<st[i].GPA<<endl;
	      cout<<"Grade: "<<st[i].grade<<endl;
		  c++;
		}
	}
	
	return 0;
}
