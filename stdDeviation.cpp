#include<iostream>
#include<cmath>
using namespace std;
int main(){
	  int data[15] = {-6,-12, 8, 13, 11, 6, 7, 2, -6, -9, -10, 11, 10, 9, 2};
//    for(int i=0;i<15;i++)
//        cout<<data[i]<<" ";
    float Sum,Total,X,sd;
	
	Sum = Total = 0;
    
	for(int i=0;i<15;i++)
	    Sum = Sum + data[i];
	
	X = Sum/15 ;
	
	for(int i=0;i<15;i++)
	   Total = Total + pow((data[i]-X),2);    
    
    sd = sqrt(Total/15);
    cout<<"SD = "<<sd;

	
	
	





    return 0;

}
