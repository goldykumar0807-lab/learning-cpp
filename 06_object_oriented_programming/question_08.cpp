//Student Result System
//Create a class Student with name, rollNo, and marks in three subjects.
//Requirements:
//- Use a constructor to initialize all data members.
//- Use this to distinguish parameters from data members.
//- Create a member function to calculate total marks and percentage.
//- Create a display() function to print the student's details and result.
#include<iostream>
#include<string>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    int marks1,marks2,marks3;
    Student(string s,int r,int m1,int m2,int m3){
        name=s;
        roll_no=r;
        marks1=m1;
        marks2=m2;
        marks3=m3;
    }
    int total(){
        return marks1+marks2+marks3;
    }
    float percentage(){
        return total()/3.0;
    }
    void display(){
        cout<<"name : "<<name<<endl;
        cout<<"roll_no : "<<roll_no<<endl;
        cout<<"marks : "<<marks1<<" "<<marks2<<" "<<marks3<<endl;
        cout<<"total marks : "<<total()<<endl;
        cout<<"percentage : "<<percentage()<<endl;
    }
};
int main(){
    Student s1("goldy",96,67,45,80);
    Student s2("saral",101,60,43,68);
    s1.display();
    s2.display();
}