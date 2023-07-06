/*
Time limit: 1.00 s Memory limit: 512 MB

You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.

Constraints
2≤n≤2⋅105

Example
Input:
5
2 3 1 5

Output:
4
*/

#include <iostream>
#include <vector>
using namespace std;

int missingnumber(int n, vector<int>& nums){
    vector <int> freq(n+1, 0);
    int answer = 0;

    for(int i=0; i<n-1; ++i){
        freq[nums[i]]++;
    }

    for(int i=1; i<=n; ++i){
        if(freq[i]==0){
            answer = i;
            break;
        }
    }
    return answer;
}

int main(){
    int n;
    cin>>n;
    vector <int> nums;
    int temp = 0;
    for(int i=0; i<n-1; ++i){
        cin>>temp;
        nums.push_back(temp);
    }
    cout<<missingnumber(n, nums)<<endl;
    return 0;
}