/*
Time limit: 1.00 s Memory limit: 512 MB

You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.

Constraints
1≤n≤106

Example
Input:
ATTCGGGA

Output:
3
*/

#include <iostream>
#include <string>
using namespace std;

int repitions(string& s){
   int maxrep = 1;
   int counter = 1;
   int value = s[0];

   for(int i=1; i<s.length(); ++i){
      if (s[i]!=value){
         counter = 1;
         value = s[i];
      }
      else
         counter++;
      maxrep = max(maxrep, counter);
   }
   
   return maxrep;
}

int main(){
    string s;
    cin>>s;
    cout<<repitions(s)<<endl;
    return 0;
}