// Q8. Student Details Using a Structure/Class
// Create a Student structure/class containing the following information:
//  Student name
//  Roll number
//  Total marks
// The roll number may contain both letters and numbers.
// Accept the student details from the user and display the data as entered.

#include<iostream>
#include<string>
using namespace std;

class Student{
    private:
        string studentName;
        string rollNo;
        int totalMarks;
    
    public:
        Student(){
            cout<<"Enter student name: ";
            getline(cin, this->studentName);

            cout<<"Enter student Roll No.: ";
            getline(cin, this->rollNo);

            cout<<"Enter students Total Marks: ";
            cin>>this->totalMarks;
        }

        void displayData(){
            cout<<"Name of the student is "<<this->studentName<<".\n";
            cout<<"Roll no of the student is "<<this->rollNo<<".\n";
            cout<<"Total marks obtained by student is "<<this->totalMarks<<".\n";
        }

};
int main(){
    Student s1;

    s1.displayData();

    return 0;
}