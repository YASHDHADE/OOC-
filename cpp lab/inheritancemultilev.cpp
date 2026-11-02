#include<iostream>
#include<stdio.h>
using namespace std;
class Student
{
    int roll;
    char name[25];
    public:
    void getdata()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\nEnter Roll No:          ";
        cin>>roll;
        cout<<"\nEnter student name:      ";
        cin>>name;
    }
    void putdata()
    {
        cout<<"\n-------------------------------------------";
        cout<<"\n*************Student Marklist*************";
        cout<<"\nRoll No:          "<<roll;
        cout<<"\nStudent Name:      "<<name<<endl;
    }
};

class StudentExam:public Student
{
    public:
    int sub1,sub2,sub3,sub4,sub5,sub6;
    float per;
    public:
    void accept_data()
    {
        getdata();
        cout<<"\nEnter marks of subject 1: ";
        cin>>sub1;
        cout<<"\nEnter marks of subject 2: ";
        cin>>sub2;
        cout<<"\nEnter marks of subject 3: ";
        cin>>sub3;
        cout<<"\nEnter marks of subject 4: ";
        cin>>sub4;
        cout<<"\nEnter marks of subject 5: ";
        cin>>sub5;
        cout<<"\nEnter marks of subject 6: ";
        cin>>sub6;
    }
    void display_data()
    {
        putdata();
        cout<<"\nMarks of subject 1: "<<sub1;
        cout<<"\nMarks of subject 2: "<<sub2;
        cout<<"\nMarks of subject 3: "<<sub3;
        cout<<"\nMarks of subject 4: "<<sub4;
        cout<<"\nMarks of subject 5: "<<sub5;
        cout<<"\nMarks of subject 6: "<<sub6;
    }
};
class StudentResult:public StudentExam
{
    public:
    void calculate()
    {
        per=(sub1+sub2+sub3+sub4+sub5+sub6)/6.0;
        cout<<"\nPercentage: "<<per;
        cout<<"\n-------------------------------------------\n";
    }
};    
    int main(){
        StudentResult str;
        int cnt,i;
        cout<<"\nEnter No.of students you want? :";
        cin>>cnt;
        for(i=0;i<cnt;i++)
        {
            str.accept_data();
            str.display_data();
            str.calculate();
        }
        return 0;
    }





