#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    set <int> s;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);
    }
    s.count(38); // buscar elemento en el set
    
    cout << s.size();

    return 0;
}