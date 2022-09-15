#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
    
    int n,x,aux;
    cin >> n;
    long long moves = 0;
    cin >> x;
    for(int i = 1; i < n; i++){
        cin >> aux;
        x = max(x, aux);
        moves += x - aux;
    }
    cout << moves;
    return 0;
}
