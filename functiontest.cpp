#include <iostream>
using namespace std;
int test(int k);
int main(){
	int R = test(9);
    cout<<"R = "<<R;
    return 0;
}
int test(int k)
{
	if(k<1)
	   return k;
	else
	   return k + test(k/2);
}
