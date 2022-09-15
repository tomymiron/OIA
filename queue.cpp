#include <bits/stdc++.h>
using namespace std;

/*
   6
   2 juan 
   2 pepe
   1
   2 pedro
   1
   1

*/

int main() {
   
   int n;
   cin >> n;

   queue <string> cola;

   for(int i = 0; i<n; i++){
      int tipo;
      cin >> tipo;
      if(tipo == 2){
         string cliente;
         cin >> cliente;
         cola.push(cliente);
      }else{
         if(cola.size() == 0){
            cout << "No hay ningun cliente en la cola";
         }else{
            string cliente = cola.front();
            cola.pop();
            cout << "El cliente " << cliente << " fue atendido" << endl;
         }

      }
   }

   return 0;
}
