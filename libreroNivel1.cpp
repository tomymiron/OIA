#include <bits/stdc++.h>
using namespace std;

int librero(vector <int> bases, vector <int> libros, int n){

   int sumTotal;
   for(int i = 0; i < n; i++){
      sumTotal += bases[i];
   }for(int i = 0; i < n; i++){
      sumTotal += libros[i];
   }
   sumTotal /= n;

   stack < int > pila;

   for(int i = 0; i < n; i++){
      pila.push(bases[i]);
   }
   for(int i = 0; i < n; i++){
      for(int j = 0; j < n; j++){
         if(pila.top() + libros[j] == sumTotal){
            pila.pop();
            libros[j] = n+1;
            break;
         }
      }
   }

   if(pila.size() == 0){
      return sumTotal;
   }else{
      return -1;
   }
   
}


int main() {
   int n;
   cin >> n;
   vector <int> bases(n), libros(n);

   for(int i = 0; i < n; i++){
      cin >> bases[i];
   }for(int i = 0; i < n; i++){
      cin >> libros[i];
   }

   cout << librero(bases, libros, n);

   return 0;
}