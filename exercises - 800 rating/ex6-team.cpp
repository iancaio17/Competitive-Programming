#include <bits/stdc++.h>
using namespace std;
#define all(v) v.begin(), v.end()
typedef long long ll;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, j, problemas = 0;
    cin >> n;
 
    while(n--){
        int contador = 0;
        for(int i = 0; i < 3; i++){
            cin >> j;
            if(j == 1){
                contador++;
            }
        }
        if (contador > 1){
            problemas++;
        }
    }
    
    cout << problemas << "\n";
    return 0;
}
