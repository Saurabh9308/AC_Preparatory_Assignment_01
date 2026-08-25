// Q15. Count Occurrences of Alphabets
// Accept a string from the user and count the occurrence of each alphabet, without considering the difference
// between uppercase and lowercase letters.
// Ignore spaces, digits, and special characters.
// Display the count for each alphabet that occurs in the input.

#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    string input;
    cout<<"Enter String : ";
    getline(cin,input);

    vector<int> characterArr(26, 0);

    for(char ch : input){
        if('a' <= ch && ch <= 'z'){
            characterArr[ch - 'a']++;
        }
        else if('A' <= ch && ch <= 'Z'){
            characterArr[ch - 'A']++;
        }
    }

    for(int i = 0; i < characterArr.size(); i++){
        if(characterArr[i] > 0){
            char ch = i + 'A';

            cout<<ch<<" : "<<characterArr[i]<<endl;
        }
    }

    return 0;
}