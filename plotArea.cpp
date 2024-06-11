#include<iostream>
#include<cmath>
using namespace std;
int main(){
	
	//float b[6], Angle[6], Area[6];
	
	float a[6] = {137.4, 155.2, 149.3, 160.0, 155.6, 149.7};
	float b[6] = {80.9, 92.62, 97.93, 100.25, 68.95, 120.0};
	float Angle[6] = {0.78, 0.89, 1.35, 9.00, 1.25, 1.75};
	float Area[6];
	float x = 0.78 * (3.14/180);
	float n = 0.5 * 137.4 * 80.9 * sin(0.0136);
	                             
	//5,557.83
	//float n = (1 / 2 )* a[0] * b[0] * sin ( Angle[0] );
	//n = Area[0];
	
	cout<< n;
	return 0;
}
