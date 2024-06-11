#include <iostream>
using namespace std;
int main() {
int i,num;
int arr[4] = {2,20,14,5};
//cout<<"Enters number"<<endl;
// for(i=1;i<=4;i++)
// cin>>arr[i];

for(int j=0;j<4;j++)
   {
    num=arr[j];
    cout<<"Factors of "<<num<<" are = ";
    
    for(i=1;i<=num;i++) 
        if(num%i==0)
           cout<<i<<" ";
    
	cout<<endl;
}
return 0;
}
