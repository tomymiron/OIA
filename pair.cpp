#include <bits/stdc++.h>
using namespace std;

/*
   12
   2 5 juan
   2 10 pedro
   2 7 tomas
   2 7 lucas
   1
   1
   2 20 mateo
   2 3 manu
   1
   1
   1
   1


   pair <int, string> paciente;
   pair <int, int> coordenadas;
   pair <string, string> nombreYApellido;
   pair <string, vector<int> > notasDeAlumno;

   notasDeAlumno.first = "Pedro";
   notasDeAlumno.second = {5, 7, 10, 10, 9}; // constructor

   notasDeAlumno = {"Pedro", {5, 7, 10, 10, 9}};

   paciente = {25, "juan"}; // constructor
   paciente.first = 25;
   paciente.second = "juan";

   for(int i = 0;i< notasDeAlumno.second.size(); i++){
      cout << notasDeAlumno.second[i] << " ";
   }
*/

int main() {

   int n;
   priority_queue <pair<int, string> > pq; // busca cual es el integer mas grande, de mas valor, en caso de que amboas integers posean el mismo valor
   // va a indagar en el string de ambos buscando cual va primerio teniendo en cuenta el orden alfanumerico (lexicograficamente mayor)

   cin >> n;

   for(int i = 0; i<n; i++){
      int tipo;
      cin >> tipo;
      if(tipo == 2){
         int urgencia;
         string nombre;
         cin >> urgencia >> nombre;
         pq.push({urgencia, nombre});
      }else{
         cout << "Atiendo al paciente " << pq.top().second << " con urgencia: " << pq.top().first << endl;
         pq.pop();
      }
   }

   return 0;
}
