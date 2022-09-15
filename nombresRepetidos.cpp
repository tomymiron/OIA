#include <bits/stdc++.h>
using namespace std;

/*
 mapa["Palabra"] = 20;
    mapa["Casa"] = 100;
    mapa["1234"] = 5;

    cout << mapa["Palabra"] << endl;
    cout << mapa["Casa"] << endl;
    cout << mapa["1234"] << endl;
    cout << mapa["NoExiste"] << endl; // muestra 0 ya que el valor default de INT es ese

    for(auto par:mapa){   // que complete por default cuales son los datos de mapa (string, int) [pair <string, int>]
        cout << par.first << " " << par.second << endl;
    }
*/

int main() {
    
/*
25 3
Ana
Ricardo
Juan
Ester
Juana
Pedro
Federico
Juan
Ismael
Juan
Ana
Pilar
Juan
Ana
Juana
Ana
Ricardo
Juan
Manuel
Juana
Pilar
Juana
Ana
Juan
Juan
*/
    int c, n;
    cin >> c >> n;
    vector <string> v(c);
    for(int i = 0; i < c; i++){
        cin >> v[i];
    }

    map <string, int> mapa; // simula un array de tipos de datos pair

    for(int i = 0; i < c; i++){
        mapa[v[i]]++;
    }

    vector < pair < string, int > > aux (mapa.begin(), mapa.end());
    sort(aux.begin(), aux.end(), [](pair < string, int > a, pair < string, int > b){
        return a.second > b.second;
    });

    int i = 0;
    for(auto par:aux){
        if(i == 3){ break; }
        cout << par.first << " " << par.second << endl;
        i++;
    }

    return 0;
}