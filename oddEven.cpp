#include <iostream>
using namespace std;

int main()
{
    int num;
    int arr[5] = {2,4,-6,0,9};
    
	// Prompt user to enter 25 numbers into an array
    //cout << "Enter 25 numbers: ";
    //for(int i = 0; i < 25; i++)
    //cin >> arr[i];
        

    
    for(int i = 0; i < 5; i++)
    {
        num = arr[i];
		if(num>0)
            cout<< num <<" is positive"<<endl;
        else if(num < 0)
            cout<< num <<" is negitive"<<endl;
        else
           cout<< num <<" is zero"<<endl;
        
		if(num%2==0)
           cout << num << " is even" << endl;
		else
           cout << num << " is odd " << endl;
    }
    return 0;
}
