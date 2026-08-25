// Q9. Number System Conversion
// Accept an integer number from the user and display its:
//  Binary equivalent
//  Octal equivalent
//  Hexadecimal equivalent


#include<iostream>
#include <bitset>
#include <sstream>
using namespace std;


int main(){
    int num;
    cout<<"Enter Number : ";
    cin>>num;
    string binary = bitset<8>(num).to_string();
    stringstream ss_oct, ss_hex;
    ss_oct << oct << num;
    ss_hex << hex << num;

    cout<<"Binary equivalent : "<<binary<<endl;
    cout<<"Octal equivalent : "<<ss_oct.str()<<endl;
    cout<<"Hexadecimal equivalent : "<<ss_hex.str()<<endl;

    return 0;
}