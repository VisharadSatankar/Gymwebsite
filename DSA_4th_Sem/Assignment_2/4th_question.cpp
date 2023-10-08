#include<bits/stdc++.h>
using namespace std;
struct Date{
    int date;
    int month;
    int year;
};
struct StudentId
{
    string studentname;
    int rollno;
    int sem;
    struct Date DOB;
};
void printdata(struct StudentId student){
    cout<<"Name - "<<student.studentname<<endl;;
    cout<<"Roll Number - "<<student.rollno<<endl;;
    cout<<"Semester - "<<student.sem<<endl;
    cout<<"Date Of Birth - "<<student.DOB.date<<"/"<<student.DOB.month<<"/"<<student.DOB.year<<endl;
}
int main(){
    struct StudentId student;
    cout<<("Enter student name ")<<endl;
    cin>>student.studentname;

    cout<<("Enter roll number ")<<endl;
    cin>>student.rollno;

    cout<<("Enter Semester Number ")<<endl;
    cin>>student.sem;

    cout<<("Enter Date Of Birth ")<<endl;
    cin>>student.DOB.date >>student.DOB.month>>student.DOB.year;

    printdata(student);
    return 0;
}
