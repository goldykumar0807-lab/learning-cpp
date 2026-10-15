//Create a class Student with data members name, rollNo, and marks.
// Create one object, assign values, and display the student's details.
#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll_no;
    int marks;
};
int main(){
    student s1;
    s1.name="goldy";
    s1.roll_no=96;
    s1.marks=76;
    cout<<s1.name<<endl;
    cout<<s1.roll_no<<endl;
    cout<<s1.marks<<endl;
}
