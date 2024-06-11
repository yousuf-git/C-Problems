#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float x=90;
	double r = x * M_PI / 180.0; // convert angle to radians
	float y =sin(r);
	cout<<y;
	return 0;
}
