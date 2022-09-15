#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct invitado{
    string nombre;
    string appellido;
    int edad;
    string ciudad;
};

int main() {

    vector <invitado> gente(5);
    // input file stream
    ifstream archivo("valores.txt");

    for(int i = 0; i<5; i++){
        archivo >> gente[i].nombre >> gente[i].appellido >> gente[i].edad >> gente[i].ciudad;
    }
    for(int i = 0; i<5; i++){
        cout << gente[i].nombre << gente[i].appellido << gente[i].edad << gente[i].ciudad << endl;
    }

    ofstream escritura("resultados.txt");
    escritura << "Lista de invitados: " << endl;
    for(int i = 0; i<5; i++){
        if(gente[i].edad >= 17){
            escritura << gente[i].nombre << gente[i].appellido << gente[i].edad << gente[i].ciudad << endl;
        }
    }

   return 0;
}


