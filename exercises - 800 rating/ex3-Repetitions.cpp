/* You are given a DNA sequence: a string consisting of characters A, C, G, and T.
Your task is to find the longest repetition in the sequence. 
This is a maximum-length substring containing only one type of character.

Input
The only input line contains a string of n characters.

Output
Print one integer: the length of the longest repetition.
*/

#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s;
    cin >> s;

    long long maior = 1, atual = 1;

    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i - 1]){
            atual++;
        } else {
            atual = 1;
        }

        maior = max(maior, atual);
    }

    cout << maior << "\n";
    
    return 0;
}
