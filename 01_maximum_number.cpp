// Q1. Find the Maximum Number
// Accept n numbers through command-line arguments and find and display the maximum number.

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int getMaxElement(vector<int>& nums){
    int n = nums.size();
    int maxEle = INT_MIN;

    for(int num : nums){
        maxEle = max(maxEle, num);
    }

    return maxEle;
}

int main(){
    int n;
    cout<<"Enter number of elements you want to enter: ";
    cin>>n;

    vector<int> nums(n);
    for(int i = 0; i < n; i++){
        cout<<"Enter element: ";
        cin>>nums[i];
    }

    cout<<"Maximum elemet from the given elements is : "<<getMaxElement(nums)<<endl;
}