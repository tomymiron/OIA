#include <bits/stdc++.h>

using namespace std;

int main() {
    /*  -----------
       | 0 0 0 1 0 |
       | 0 0 0 1 0 |
       | 0 0 0 0 0 |
       | 0 0 0 0 1 |
       | 0 1 1 0 0 |
        -----------

        5 5
        0 3
        1 3
        3 4
        4 1
        4 2

    */

   int nodos, aristas;
   cin >> nodos >> aristas;

   vector < vector < int > > lista(nodos);
   
    for(int i = 0; i < aristas; i++){
        int origen, destino;
        cin >> origen >> destino;
        lista[origen].push_back(destino);
    }

    cout << endl;

    for(int i = 0; i< aristas; i++){
        cout << "La lista del nodo " << i << " es: ";
        for(int j = 0; j < lista[i].size(); j++){
            cout << lista[i][j] << " ";
        }
        cout << endl;
    }
    
   return 0;
}


