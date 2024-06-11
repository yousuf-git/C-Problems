#include<iostream>
using namespace std;    

int main(){

  int num[5] = {2,4,5,6,7};
  int left = 2;
  int right = 7;
  int target = 2;
  int flag = 0;
  int loc;
  while (left <= right) 
    {
        int mid = (left + right) / 2;
        if (num[mid] == target)
		{
            loc = mid;
            flag = 1;
        }
        else if (num[mid] < target) 
            left = mid + 1;
        else 
            right = mid - 1;
    }
    if(flag == 0)
      cout<<target<<" not found.";
    else 
      cout<<target<<" found at index "<<loc;

return 0;
}


