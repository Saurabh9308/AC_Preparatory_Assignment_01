// Q4. Student Grade
// Write a program to calculate the grade of a student.
// The student has five subjects, and marks for each subject are entered from the keyboard. Assume that each
// subject is evaluated out of 20 marks, making the total marks out of 100.
// Assign the grade according to the following rules:
// Total Marks Grade
// 90–100       Ex
// 80–89        A
// 70–79        B
// 60–69        C
// Below 60     F
// Display the total marks and the corresponding grade.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int totalMarksObtained(vector<int>& marks){
    int totalMarks = 0;

    for(int mark : marks){
        totalMarks += mark;
    }

    return totalMarks;
}

string gradeObtained(int totalMarks){
    if(90 <= totalMarks && totalMarks <= 100){
        return "Ex";
    }
    else if(80 <= totalMarks && totalMarks < 90){
        return "A";
    }
    else if(70 <= totalMarks && totalMarks < 80){
        return "B";
    }
    else if(60 <= totalMarks && totalMarks < 70){
        return "C";
    }
    else{
        return "F";
    }
}


int main(){
    vector<int> marks(5);
    for(int i = 0; i < 5; i++){
        cout<<"Enter marks of subject "<<i+ 1<<": ";
        cin>>marks[i];
    }

    int totalMarks = totalMarksObtained(marks);
    string grade = gradeObtained(totalMarks);

    cout<<"Total marks obtained : "<<totalMarks<<endl;
    cout<<"Grade Obtained : "<<grade<<endl;
}