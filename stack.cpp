#include <bits/stdc++.h>
using namespace std;

/*

()[({()[]})]
)(
{[](})
{]}]
[(){[()()[]()]()}[]]{}
}{}{{(()}}

*/

int main() {
   
    string s;
    cin >> s;

    stack <char> pila;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            pila.push(s[i]);
        }else{
            if(s[i] == ')' && pila.size() > 0 && pila.top() == '('){
                pila.pop();
            }else if(s[i] == ']' && pila.size() > 0 && pila.top() == '['){
                pila.pop();
            }else if(s[i] == '}' && pila.size() > 0 && pila.top() == '{'){
                pila.pop();
            }else{
                cout << "La secuencia es incorrecta";
                return 0;
            }
        }
    }

    if(pila.size() == 0){
        cout << "La secuencia es correcta";
    }else{
        cout << "La secuencia es incorrecta";
    }

   return 0;
}
