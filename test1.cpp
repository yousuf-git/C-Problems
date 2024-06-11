#include<iostream>
using namespace std;
struct student{
    int GPA = 3;
    int Marks = 70;
};
void dbl_GPA(student &std){
    std.GPA = std.GPA*2;
    cout<<"Double GPA: "<<std.GPA;
}
int main(){
   student st;
   dbl_GPA(st);
   return 0;
}
