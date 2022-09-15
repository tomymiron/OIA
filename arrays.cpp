#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 10 8 7 6 9 10 5 4 9 8 || 10 9 9
    // modify
    // 3
    // 1 - 6
    // 2 - 9
    // 3 - 10
    vector <int> notas(10);
    for(int i = 0; i<10; i++){
        cin >> notas[i];
    }
/*
    int n1,n2,n3;
    cin >> n1 , n2 , n3;
    notas.push_back(n1);
    notas.push_back(n2);
    notas.push_back(n3);
*/
    int cantCambios;
    cin >> cantCambios;

    for(int i=0; i < cantCambios; i++){
        int cod, nMat;
        cin >> cod >> nMat;
        cod--;
        notas[cod] = nMat;
    }

    cout << "Las notas de Pedro son: " << endl;
    for(int i=0; i<notas.size(); i++){
        cout << notas[i] << " ";
    }

}


