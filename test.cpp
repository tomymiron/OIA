#include <iostream>
#include <vector>
using namespace std;

vector < vector < int > > ady;
vector < bool > visit;

/*
10 9
1 6
2 4
2 5
3 4
3 7
4 5
5 7
8 10
9 10
*/

void DFS(int nodo){
   visit[nodo] = true;
   for(int i = 0; i < ady[nodo].size(); i++){
      if(!visit[ady[nodo][i]]){
         DFS(ady[nodo][i]);
      }
   }
}

int main() {

   int n,m;
   cin >> n >> m;

   ady.resize(n+1);
   visit = vector < bool > (n+1, false);

   for(int i = 0; i < m; i++){
      int a, b;
      cin >> a >> b;
      ady[a].push_back(b);
      ady[b].push_back(a);
   }
   
   int componentes = 0;
   for(int i = 1; i <= n; i++){
      if(!visit[i]){
         DFS(i);
         componentes++;
      }
   }

   cout << componentes << endl;

   return 0;
}