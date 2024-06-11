#include<iostream>
using namespace std;
int main()
{
  int temp,asc[5],dsc[5],num[5];
//  int num[5] = {2,5,3,4,1};
//  for(int i=0; i<5; i++)
//     asc[i] = dsc[i] = num[i];
//  For manual input.....   
  cout<<"Enter 5 Values"<<endl;
  
  for(int i=0; i<5; i++)
    {
     cin>>num[i];
	 asc[i] = dsc[i] = num[i]; 
    }  
  
  for(int i=0; i<5; i++)
    {
      for(int j=i+1; j<5; j++)
	    {
	  
	      if(asc[j] < asc[i])
			{
			  temp = asc[i];
		      asc[i] = asc[j];
			  asc[j] = temp;
		    }
		   if(dsc[j]>dsc[i])
		    {
		   	    temp = dsc[i];
		        dsc[i] = dsc[j];
			    dsc[j] = temp;
			}	
	    }
	}
  cout<<"In Ascending: ";
  for(int i=0; i<5; i++)
	  cout<<asc[i]<<" ";
  cout<<endl;
  cout<<"In Descending: ";
  for(int i=0; i<5; i++)
	  cout<<dsc[i]<<" ";
  return 0;		 	

}


