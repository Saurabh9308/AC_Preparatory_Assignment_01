// Q14. String Palindrome
// Write a program to check whether a given string is a palindrome.
// A palindrome reads the same forward and backward.

#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string str){
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    int left = 0, right = str.length() - 1;

    while(left < right){
        if(str[left] != str[right]) return false;

        left++;
        right--;
    }

    return true;
}
int main(){
    string input;
    cout<<"Enter String : ";
    getline(cin, input);

    if(isPalindrome(input)) cout<<"Palindrome"<<endl;
    else cout<<"Not a Palindrome"<<endl;
}