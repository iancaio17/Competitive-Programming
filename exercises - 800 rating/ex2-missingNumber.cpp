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
    
    long long n;
    cin >> n;
    
    long long soma = 0, x;
    
    for(int i = 0; i < n - 1; i++){
        cin >> x;
        soma += x;
    }
    
    long long total = n * (n + 1)/2;
    
    cout << total - soma << "\n";
    
    return 0;
}
