#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    priority_queue <int> numbers;
    for(int i = 0;i<n - 1;i++){
        int aux;
        cin >> aux;
        numbers.push(aux);
    }
    for(int i = n; i > 0; i--){
        if(numbers.top() != i){
            cout << i;
            return 0;
        }
        numbers.pop();
    }
    cout << n;
    
    return 0;
}