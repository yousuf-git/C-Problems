#include <iostream>
using namespace std;

int main() 
{
  int n, p, arr[5];
//  int arr[5] = {23,21,45,29,49};
   cout<<"Enter 5 numbers"<<endl;
   for(int i=0;i<5;i++)
     cin>>arr[i];
     
  for(int i=0;i<5;i++)
    {
    	p = 0;
		n = arr[i];
        for(int j=2;j<=n/2;j++)
		{
	        if(n%j==0)
	        {
                p++;
                break;
            }
        }
		
		if(p==1)
        {
           cout <<n<<" is Composite and its Prime factors are: " ; 	

           for(int k = 2; k <= n; k++)
	        {
             if(n % k == 0)
                {
                    cout << k << " ";
                    n /= k;
                    k=1;
			    }
		    } 
            cout<<endl;
		}
		else
            cout<<n<<" is Prime number."<<endl;	  
	}
  
return 0;
}
