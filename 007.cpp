#include <bits/stdc++.h>
using namespace std;

int main() {

   int n, x;
   cin >> n >> x;
   vector <int> v(n);
   for(int i = 0; i < n; i++){
      cin >> v[i];
   }

   map <int,int> mapa; // valor del vector y la posicion de dicho valor
   mapa[v[0]] = 0;
   for(int i = 1; i < n; i++){
      if(mapa.count(x - v[i])){
         cout << i + 1 << " " << mapa[x-v[i]] + 1 << endl;
         return 0;
      }
      mapa[v[i]] = i;
   }
   cout << "IMPOSSIBLE" << endl;
   return 0;
}