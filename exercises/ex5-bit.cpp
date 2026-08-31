/* You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.

Input
The first input line contains an integer n.
The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output
Print the missing number.
*/

#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
typedef long long ll;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    int i = 0;
    string s;
    
    while(n--){
        cin >> s;
        
        if(s[1] == '+'){
            i++;
        } else {
            i--;
        }
    }

    cout << i << "\n";
    
    return 0;
}
