#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string s;
    int max, aux;
    cin >> s;
    aux = 1;
    max = 1;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i+1]){
            aux = aux + 1;
            if(aux > max){
                max = aux;
            }
        }else{ aux = 1; }
    }
    cout << max;
    return 0;
}