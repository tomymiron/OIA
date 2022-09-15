#include <bits/stdc++.h>
using namespace std;

/*
   10
   2 5 43 542 59 100 65 356 432 9
*/

int main() {

   int n;
   cin >> n;
   vector <int> v(n);

   for(int i = 0; i< n; i++){
      cin >> v[i];
   }

   sort(v.begin(), v.end()); // begin == iterador, (v[0] --> v[n-1])

   cout << endl;
   for(int i = 0; i<n; i++){
      cout << v[i] << " ";
   }

   //reverse(v.begin(), v.end()); // invierte todo el array
   //sort(v.rbegin(), v.rend()); // sort + reverse
   for(int i = 0; i * 2 < n; i++){
      swap(v[i], v[n-1-i]);
   }

   cout << endl;
   for(int i = 0; i<n; i++){
      cout << v[i] << " ";
   }

   string s;
   cin >> s;
   reverse(s.begin(),s.end());
   cout << s;

   return 0;
}
