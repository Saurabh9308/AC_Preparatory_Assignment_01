// Q7. Multiplication Tables
// Accept two numbers from the user and display the multiplication tables for all numbers from the first
// number to the second number.


#include<iostream>
using namespace std;

void multiplicationTable(int num){
    for(int i = 1; i <= 10; i++){
        cout<<num * i<<endl;
    }
}
int main(){
    int num1, num2;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    for(int num = num1; num <= num2; num++){
        cout<<"Multiplication table of "<<num<<": "<<endl;
        multiplicationTable(num);
    }

    return 0;
}