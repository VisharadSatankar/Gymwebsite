#include<bits/stdc++.h>
using namespace std;
struct StudentId
{
    /* data */
    string studentname;
    int rollno;
    int sem;
};
void printdata(struct StudentId student){
    cout<<"Name - "<<(student.studentname)<<endl;
    cout<<"Roll Number - "<<(student.rollno)<<endl;
    cout<<"Semester - "<<(student.sem)<<endl;
}
int main(){
    struct StudentId student;
    cout<<"Enter student name "<<endl;;
    cin>>student.studentname;

    cout<<"Enter roll number "<<endl;
    cin>>student.rollno;

    cout<<"Enter Semester Number "<<endl;
    cin>>student.sem;

    printdata(student);
    return 0;
}
