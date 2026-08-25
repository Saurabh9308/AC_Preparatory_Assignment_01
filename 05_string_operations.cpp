// Q5. Character Classification
// Accept a string from the user and count/display the number of:
//  Uppercase letters
//  Lowercase letters
//  Digits
//  Other characters
// Display an appropriate message for each category.

#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"Enter string : ";
    getline(cin, str);

    int uppercaseCount = 0, lowercaseCount = 0, digitsCount = 0, otherCount = 0;

    for(char ch : str){
        if('A' <= ch && ch <= 'Z'){
            uppercaseCount++;
        }
        else if('a' <= ch && ch <= 'z'){
            lowercaseCount++;
        }
        else if('0' <= ch && ch <= '9'){
            digitsCount++;
        }
        else{
            otherCount++;
        }
    }

    cout<<"Total uppercase letters present in the string: "<<uppercaseCount<<endl;
    cout<<"Total lowercase letters present in the string: "<<lowercaseCount<<endl;
    cout<<"Total digits present in the string: "<<digitsCount<<endl;
    cout<<"Total other letters in the string: "<<otherCount<<endl;
}