#include <iostream>
#include <vector>
using namespace std;

int main() {
   /*
   9 8 4 6 7 8
   4 8 9 4 9 5
   7 7 7 7 7 7
   1 2 3 4 5 6
   */
  // para ingresar lo que va a contenter un array, se ingresa posteriormente a la definicion de su tama;o, es decir
  // vector <int> notas(4, 10);    un array de 4 de largo con 10 en cada casilla.
    vector <vector <int>> notas(4, vector <int> (6, 0));
    for(int fila = 0; fila < 4; fila++){
        for(int columna = 0; columna < 6; columna++){
            cin >> notas[fila][columna];
        }
    }
    cout << "-----------------" << endl;
    for(int fila = 0; fila < 4; fila++){
        for(int columna = 0; columna < 6; columna++){
            if(columna == 5){
                cout << notas[fila][columna];
            }else{
                cout << notas[fila][columna] << " | ";
            }
        }
        cout << endl;
    }

   return 0;
}


