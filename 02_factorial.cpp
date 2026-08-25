// Q2. Factorial of a Number
// Write a program to calculate the factorial of a given non-negative integer

#include<iostream>
using namespace std;


int factorial(int n){
    if(n == 0 || n == 1) return 1;

    return factorial(n - 1) * n;
}
int main(){
    int n;
    do{
        cout<<"Enter a number: ";
        cin>>n;

        if(n < 0){
            cout<<"Enter valid number."<<endl;
        }
    }while(n < 0);

    cout<<"Factorial of the number "<<n<<" is: "<<factorial(n)<<endl;
}