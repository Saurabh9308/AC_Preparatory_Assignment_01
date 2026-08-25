// Q12. Reverse a String
// Write a program to reverse a given string without using a built-in string-reversal function such as
// strrev() or slicing syntax.
// Example:
// Input: SUNBEAM
// Output: MAEBNUS

#include<iostream>
#include<string>
using namespace std;
string reverseString(string str){
    int left = 0, right = str.length() - 1;

    while(left < right){
        swap(str[left++], str[right--]);
    }

    return str;
}
int main(){
    string str;
    cout<<"Enter String : ";
    getline(cin, str);

    cout<<"Reverse : "<<reverseString(str)<<endl;

    return 0;
}