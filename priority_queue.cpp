#include <bits/stdc++.h>
using namespace std;

/*
priority_queue <int> pq;

   pq.push(10);
   pq.push(20);
   pq.push(5);
   pq.push(100);
   pq.push(0);
   pq.push(-10);
   pq.push(-5);

   while(pq.size() > 0){
      cout << pq.top() << endl;
      pq.pop();
   }
*/

int main() {
   
   /*
   12
   2 5
   2 10
   2 7
   2 7
   1
   1
   2 20
   2 3
   1
   1
   1
   1
   */

   int n;
   priority_queue <int> pq;// busca cual es el integer mas grande, de mas valor, en caso de que amboas integers posean el mismo valor
   // va a indagar en el string de ambos buscando cual va primerio teniendo en cuenta el orden alfanumerico

   cin >> n;

   for(int i = 0; i<n; i++){
      int tipo;
      cin >> tipo;
      if(tipo == 2){
         int urgencia;
         cin >> urgencia;
         pq.push(urgencia);
      }else{
         cout << "Atiendo al paciente con urgencia: " << pq.top() << endl;
         pq.pop();
      }
   }

   return 0;
}
