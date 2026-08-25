// Q13. Find Duplicate Strings
// Declare an array/list containing a few strings, including some duplicate strings.
// Write a program to identify and display the duplicate strings.
// If a string occurs more than once, display that string only once in the output.

#include<iostream>
#include<vector>
#include<string>
#include<unordered_set>
using namespace std;

vector<string> findDuplicates(vector<string>& str){
    unordered_set<string> s;
    vector<string> duplicates_strings;
    for(string ss : str){
        if(s.find(ss) != s.end()){
            duplicates_strings.push_back(ss);
        }
        s.insert(ss);
    }

    return duplicates_strings;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    vector<string> str;
    for(int i = 0; i < n; i++){
        string s;
        cout<<"Enter String : ";
        getline(cin, s);
        str.push_back(s);
    }

    vector<string> duplicate_strings = findDuplicates(str);

    for(string s : duplicate_strings){
        cout<<s<<endl;
    }

    return 0;
}