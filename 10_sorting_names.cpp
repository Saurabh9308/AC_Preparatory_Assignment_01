// Q10. Sort Student Names
// Read at most 10 student names and store them in an appropriate array/list.
// Sort the names in alphabetical order and display the sorted names. Use appropriate library function for
// sorting.

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    int n;

    cout<<"Enter total number of names: ";
    cin>>n;

    vector<string> names;

    for(int i = 0; i < n; i++){
        string name;
        cout<<"Enter name: ";
        getline(cin, name);

        names.push_back(name);

    }

    sort(names.begin(), names.end());

    for(int i = 0; i < n; i++){
        cout<<names[i]<<endl;
    }

    return 0;
}