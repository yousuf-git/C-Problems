#include<iostream>
using namespace std;
int main(){
	//int n = 153;
	int n;
	int num[5] = {153,351,370,371,407};
	
	int d,S;
	for(int i=0;i<5;i++)
	{
	    n = num[i];
		S=0;
		while(n!=0)
	    {
		   d = n%10;
		   n = n/10;
		   S = S+(d*d*d);
	    }
        if(S==num[i])
          cout<<num[i]<<" is armstrong."<<endl;
        else 
	      cout<<num[i]<<" is not armstrong."<<endl;
	}
    
}

