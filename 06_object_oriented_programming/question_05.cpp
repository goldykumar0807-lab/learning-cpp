//Q5 — Multiple Students
//Create a class Student with these data members:
//- name — string
//- rollNo — integer
//- marks — integer
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int marks;
    void display(){
        cout<<name<<endl<<roll_no<<endl<<marks<<endl;
    }
};
int main(){
    Student s1;
    s1.name="goldy";
    s1.roll_no=96;
    s1.marks=45;
    s1.display();

    Student s2;
    s2.name="yash";
    s2.roll_no=93;
    s2.marks=40;
    s2.display();

    Student s3;
    s3.name="mayank";
    s3.roll_no=90;
    s3.marks=49;
    s3.display();

}