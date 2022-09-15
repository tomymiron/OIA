#include <iostream>
#include <vector>
using namespace std;

// simula un tipo de dato, tal como string o integer
// definimos variables nuevas como "invitado nombreVariable"
struct invitado{
    string nombre;
    string appellido;
    int edad;
    bool regalo;
    bool amigo;
    string ciudad;
};

int main() {
    // tomas miron 17 1 0 capital

    vector <invitado> lista(6);

    //cin >> lista[0].nombre >> lista[0].appellido >> lista[0].edad;
    //cin >> lista[1].nombre >> lista[1].appellido >> lista[1].edad;

    for(int i = 0; i < 6; i++){
        cin >> lista[i].nombre >> lista[i].appellido >> lista[i].edad >> lista[i].regalo >> lista[i].amigo >> lista[i].ciudad;
    }    
    for(int i = 0; i < 6; i++){
        cout << lista[i].nombre << " | " << lista[i].appellido << " | " << lista[i].edad << " | " << lista[i].regalo << " | " << lista[i].amigo << " | " << lista[i].ciudad;
    }    

    //invitado tomy;
    //cin >> tomy.nombre >> tomy.appellido >> tomy.edad >> tomy.regalo >> tomy.amigo >> tomy.ciudad;
    //cout << tomy.nombre;
   return 0;
}


