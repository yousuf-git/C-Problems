
#include <iostream>
#include <cstdlib>

int min(int s,int n[]);
int max(int s,int n[]);
int range(int s,int n[]);
void primeComp(int s,int n[]);
void pFactors(int s,int n[]);
void armPal(int s,int n[]);
void counter(int s,int n[]);
void search(int x,int s,int n[]);
int sum(int s,int n[]);
void rev(int s, int n[]);
void sortAsc(int s, int n[]);
void sortDsc(int s, int n[]);

using namespace std;
int main(){
	start1:
	int n;
	int size;
	//Input size and values in list(array)
	cout << "Enter Size of list: ";
	cin >> size;
	int num[size]; 
	cout << "Enter " << size << " Numbers"<<endl;
	for(int i=0;i<size;i++)
	   cin>>num[i];
    cout<<endl;
	start2:
	cout << "Input choice from below :" <<endl;
	
	cout << "1. Min finder from list." <<endl;
    cout << "2. Max finder from list." <<endl;
	cout << "3. Range finder from list." <<endl;
    cout << "4. Prime/Composite checker from list." <<endl;
    cout << "5. Prime factors finder of each number from list." <<endl;
    cout << "6. Armstrong and Palindrome finder from list." <<endl;
    cout << "7. Odd/Even/Positive/negative/zeroes counter from list." <<endl;
    cout << "8. Search Number from list." <<endl;
    cout << "9. Sum of numbers in list." <<endl;
	cout << "10. Reverse of array." <<endl;
	cout << "11. Sort Array in Ascending." <<endl;
	cout << "12. Sort Array in Descending." <<endl;
//	cout << "13. Storing record with differnet data types using structure"
//    cout << "14. Store record of 10 students and find topper and fail students records." <<endl;
    
	// Best of Luck
	
	
	
	
	
	
	cout<<endl<<"Your choice : ";
	cin>>n;
	cout<<endl;
	
	// Function Call according to choice..
	switch(n)
	{
		case 1:
			cout<<"Min = "<<min(size,num)<<endl;
			break;
	    
		case 2:
			cout<<"Max = "<<max(size,num)<<endl;
			break;
			
		case 3:
			cout<<range(size,num)<<endl;
			break;
		
		case 4:
			primeComp(size,num);
			break;
			
		case 5:
		    pFactors(size,num);
			break;
	    	
		case 6:    
			armPal(size,num);	
			break;
	    
		case 7:
			counter(size,num);	
			break;
			
		case 8:
		    int a;
			cout<<"Enter number to search: ";
		    cin>>a;
			search(a,size,num);
			break;	
	    
		case 9:
	    	cout<<"Sum of Series = "<<sum(size,num)<<endl;
	    	break;
	    
		case 10:
		    cout<<"Input Array: ";
		    for(int i=0;i<size;i++)
		       cout<<num[i]<<" ";
		    cout<<endl;
			rev(size,num);
		    break;
	    
	    case 11:
	    	cout<<"Input Array: ";
		    for(int i=0;i<size;i++)
		       cout<<num[i]<<" ";
		    cout<<endl;
	    	sortAsc(size,num);
	    	break;
	    
		case 12:
	    	cout<<"Input Array: ";
		    for(int i=0;i<size;i++)
		       cout<<num[i]<<" ";
		    cout<<endl;
	    	sortDsc(size,num);
	    	break;
	    	
		default:
	        system("cls");
			cout<<"Invalid Choice, Choose again...!\n"<<endl;
	        goto start2;
	} 
	choice:
	int c=0;
	cout<<endl<<"If you want to input array again, press 1 "<<endl;
	cout<<"If you want to input choice again, press 2 "<<endl;
	cout<<endl<<"Your Input : ";
	cin>>c;
	if(c==1)
	{
	    system("cls"); 
	    goto start1;
    }
	else if(c==2)
    {
	    system("cls"); 
	    goto start2;
	}
	else 
	{
	
	   cout<<"Invalid Choice, Choose again..!"<<endl;
	   goto choice;
	}
	return 0;
}
// Functions definition...
// 1. Min Finder
int min(int s,int n[]){
	
	int min = n[0];
	
	for(int i=1;i<s;i++)
	    if(min > n[i])
	      min = n[i];
    
	return min;
}
//2. Max finder
int max(int s,int n[]){
	
	int max = n[0];
	
	for(int i=1;i<s;i++)
	    if(max < n[i])
	      max = n[i];
    
	return max;
}
// 3. Range Finder
int range(int s,int n[]){
	int range = max(s,n)- min(s,n);
  	//cout<<"Range = "<<range; 
    return range;
}
// 4. Prime Composite checker
void primeComp(int s,int n[]){
	int c,x; 
	for(int i=0;i<s;i++)
	{
	   c = 0;
	   x = n[i];
	   for(int j=2;j<=x/2;j++)
	    {
	       if(x%j==0)
	        {
			    c=1;
	            break;
	        }
        }
        if(c==1)
            cout<<x<<" is Composite."<<endl;
        else
            cout<<x<<" is Prime."<<endl;   

	}
    
}
// 5. Prime Factors Finder
void pFactors(int s,int n[]){

  int x, p;     
  for(int i=0;i<s;i++)
    {
    	p = 0;
		x = n[i];
        for(int j=2;j<=x/2;j++)
		{
	        if(x%j==0)
	        {
                p++;
                break;
            }
        }
		
		if(p==1)
        {
           cout <<x<<" is Composite and its Prime factors are: " ; 	

           for(int k = 2; k <= x; k++)
	        {
             if(x % k == 0)
                {
                    cout << k << " ";
                    x /= k;
                    k=1;
			    }
		    } 
            cout<<endl;
		}
		else
            cout<<x<<" is Prime number."<<endl;	  
	}
	
}
// 6. Armstrong/Palindrome Checker

void armPal(int s,int n[]){
	int x,d,sum,rev;
	for(int i=0;i<s;i++)
	{    
		x = n[i];
		sum = rev = 0;
	    while(x!=0)
	    {
	        d = x%10;
			x/=10;
			rev = (rev*10) + d;
			sum = sum + (d*d*d);    	
		}
        if(rev == n[i])
		    cout<<n[i]<<" is Palindrome."<<endl;
		else if(sum == n[i]) 
	        cout<<n[i]<<" is Armstrong."<<endl;
	    else
	       cout<<n[i]<<" is neither Palindrome nor Armstrong."<<endl;
	}


}

// 7. Even/Odd/+ve/-ve/0 Counter..  
void counter(int s,int n[]){
    int x,e,o,p,neg,z;
    e = o = p = neg = z = 0;
    for(int i=0;i<s;i++)
    {
		x = n[i];
		if(x%2==0)
		    e++;
	    else 
	        o++;
		
		if(x>0)
		    p++;
		else if(x<0)
		    neg++;
		else 
		    z++;             	
	} 
    cout<<"Total Positive: "<<p<<endl;
    cout<<"Total Negative: "<<neg<<endl;
    cout<<"Total Zeroes: "<<z<<endl;
	cout<<"Total Even: "<<e<<endl;
    cout<<"Total Odd: "<<o<<endl;
 }
// 8. Number Searcher..
void search(int x,int s,int n[]){
	for(int i=0;i<s;i++)
	{
	    if(x==n[i])
		{
		  cout<<x<<" found at index "<<i;
		  break;	
	    }
	}   
}
// 9. Sum of series finder
int sum(int s,int n[]){
	int Sum = 0;
	for(int i=0;i<s;i++)
	   Sum = Sum + n[i];
    
	return Sum;
}
// 10. Reverse of array 
void rev(int s, int n[]){
	int rev[s];
	int j=s-1;
	for(int i=0;i<s;i++)
	{
	   if(j>=0)
	    {
	       rev[j] = n[i];
	       j--;
        }
	}
    cout<<"Reverse : ";
    for(int i=0;i<s;i++)
       cout<<rev[i]<<" ";
    cout<<endl;
}  
// 11. Sort array in Ascending
void sortAsc(int s, int n[]){
	int Asc[s],temp;
	for(int i=0;i<s;i++)
	   Asc[i] = n[i];
	cout<<"Ascending: ";
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
		    if(Asc[j]>Asc[i]) 
            {
		        temp = Asc[j];
		        Asc[j] = Asc[i];
		        Asc[i] = temp;
		    }
		}
	    cout<<Asc[i]<<" ";
	}
    cout<<endl;
}

// 12. Sort array in Descending
void sortDsc(int s, int n[]){
	int Dsc[s],temp;
	for(int i=0;i<s;i++)
	   Dsc[i] = n[i];
	cout<<"Descending: ";
	for(int i=0;i<s;i++)
	{
		for(int j=i+1;j<s;j++)
		{
		    if(Dsc[j]<Dsc[i]) 
            {
		        temp = Dsc[j];
		        Dsc[j] = Dsc[i];
		        Dsc[i] = temp;
		    }
		}
	    cout<<Dsc[i]<<" ";
	}
    cout<<endl;
}

