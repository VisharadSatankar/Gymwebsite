#include <bits/stdc++.h>
using namespace std;
struct StudentId
{
    string name;
    int rollNumber;
    int marks[5];
    char grade;
};
void readMarks(struct StudentId *student)
{
    cout << "Enter student name- ";
    cin >> student->name;
    cout << "Enter roll number- ";
    cin >> student->rollNumber;
    cout << "Enter marks for 5 subjects- ";
    for (int i = 0; i < 5; ++i)
    {
        cin >> student->marks[i];
    }
}
void calculateGrade(struct StudentId *student)
{
    int totalMarks = 0;
    for (int i = 0; i < 5; ++i)
        totalMarks += student->marks[i];
    double average = (double)totalMarks / 5.0;
    if (average > 90.0)
    {
        student->grade = 'S';
    }
    else if (average > 80.0)
    {
        student->grade = 'A';
    }
    else if (average > 70.0)
    {
        student->grade = 'B';
    }
    else if (average > 60.0)
    {
        student->grade = 'C';
    }
    else if (average > 50)
    {
        student->grade = 'D';
    }
    else if (average > 40)
    {
        student->grade = 'E';
    }
    else
    {
        student->grade = 'F';
    }
}
void printdata(struct StudentId student)
{
    cout << student.name << endl;
    cout << student.rollNumber << endl;
    cout << "Marks in 5 Subjects-" << endl;
    for (int i = 0; i < 5; ++i)
    {
        cout << "Subject " << i + 1 <<" - "<< student.marks[i] << endl;
    }
    cout << "Final Grade- " << student.grade << endl;
}
int main()
{
    struct StudentId student;
    readMarks(&student);
    calculateGrade(&student);
    printdata(student);
    return 0;
}