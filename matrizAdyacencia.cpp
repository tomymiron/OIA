#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*  -----------
       | 0 0 0 1 0 |
       | 0 0 0 1 0 |
       | 0 0 0 0 0 |
       | 0 0 0 0 1 |
       | 0 1 1 0 0 |
        -----------

        0 3
        1 3
        3 4
        4 1
        4 2
    */

    int nodos, aristas;
    cin >> nodos >> aristas;

    vector <vector <int> > matriz(nodos, vector <int> (nodos, 0));

    for(int i=0; i<aristas; i++){
        int origen , destino;
        cin >> origen >> destino;
        matriz[origen][destino] = 1;
    }

    cout << endl << endl;
    for(int i=0; i < nodos; i++){
        for(int j=0; j<nodos; j++){
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
   return 0;
}


