#include <iostream>
using namespace std;

int main() 
{
  int n;
  int c=0;
  cout << "Enter a positive integer: ";
  cin >> n;
  for(int i=2;i<=n/2;i++)
    if(n%i==0)
	{
        c++;
        break;
    }
  
  if(c==1)
    {
      cout <<n<<" is composite and its Prime factors are: " ; 	

      for (int i = 2; i <= n; i++)
	    {
          if (n % i == 0)
            {
                cout << i << " ";
                n /= i;
                i=1;
			}
          
		}
    }
  else
    cout<<n<<" is Prime number.";
return 0;
}
