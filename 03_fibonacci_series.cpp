// Q3. Fibonacci Series
// Write a program to generate and display the first n terms of the Fibonacci series.

#include<iostream>
#include<vector>
using namespace std;

vector<int> generateFibonacciSeries(int n){
    vector<int> fibonacci;
    fibonacci.push_back(0);
    fibonacci.push_back(1);

    for(int i = 2; i <= n ; i++){
        fibonacci.push_back(fibonacci[i - 1] + fibonacci[i-2]);
    }

    return fibonacci;
}
int main(){
    int n;
    cout<<"Enter number of terms in fibonacci series: ";
    cin>>n;

    vector<int> fibonacci = generateFibonacciSeries(n);

    cout<<"Following are the "<<n<<" terms of the fibonacci series: "<<endl;
    for(int i = 0; i < fibonacci.size(); i++){
        cout<<fibonacci[i]<<" ";
    }

    return 0;
}