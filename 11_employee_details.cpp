// Q11. Employee Details and Salary Increment
// Create an Employee structure/class containing:
//  First name
//  Last name
//  Monthly salary
// Write appropriate functions/methods to:
// 1. Initialize employee details.
// 2. Display employee details.
// 3. Modify the employee's salary.
// 4. Calculate and display yearly salary.
// Create two Employee objects.
// Display the yearly salary of both employees. Then give each employee a 10% salary increase and display
// their yearly salary again.


#include<iostream>
using namespace std;

class Employee{
private:
    string firstName;
    string lastName;
    long long salary;

public:
    Employee(){
        cout<<"Enter Employee details : \n";
        cout<<"Enter your first name : ";
        cin>>this->firstName;
        cout<<"Enter your last name : ";
        cin>>this->lastName;
        cout<<"Enter your salary : ";
        cin>>this->salary;
    }

    void display(){
        cout<<"First Name : "<<this->firstName<<endl;
        cout<<"Last Name : "<<this->lastName<<endl;
        cout<<"Salary : "<<this->salary<<endl;
    }

    long long yearlySalary(){
        return 12 * this->salary;
    }

    void increaseSalary(int percent){
        this->salary += (this->salary * percent) / 100;
    }
};

int main(){
    Employee e1, e2;

    cout<<"Before increasing Salary : "<<endl;
    cout<<"First employee yearly salary : "<<e1.yearlySalary()<<endl;
    cout<<"Second employee yearly salary : "<<e2.yearlySalary()<<endl;
    e1.increaseSalary(10);
    e2.increaseSalary(10);

    cout<<"After increasing Salary : "<<endl;
    cout<<"First employee yearly salary : "<<e1.yearlySalary()<<endl;
    cout<<"Second employee yearly salary : "<<e2.yearlySalary()<<endl;
}