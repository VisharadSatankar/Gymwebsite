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
void printdata(struct StudentId student,int num){
    cout<<" Student "<< num <<"Data"<<endl;
    cout<<"Name - "<<student.studentname<<endl;
    cout<<"Roll Number - "<<student.rollno<<endl;;
    cout<<"Semester - "<<student.sem<<endl;
    cout<<"Date of birth- "<<student.DOB.date<<"/"<<student.DOB.month<<"/"<<student.DOB.year;
    cout<<endl;
}
int main(){
    struct StudentId student[10];
    for(int i = 0; i < 10; i++){
    cout<<("Enter student name ")<<i+1<<endl;
    cin>>student[i].studentname;

    cout<<("Enter roll number ")<<endl;
    cin>>student[i].rollno;

    cout<<("Enter Semester Number ")<<endl;
    cin>>student[i].sem;

    cout<<("Enter Date Of Birth ")<<endl;
    cin>>student[i].DOB.date >>student[i].DOB.month>>student[i].DOB.year;
    }
    sort(student,student+10,[](struct StudentId a,struct StudentId b){return a.studentname<b.studentname;});
    for(int i=0;i<10;i++){
    printdata(student[i],i+1);
    }
    return 0;
}
