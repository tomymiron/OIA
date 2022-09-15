#include <bits/stdc++.h>
using namespace std;

/*

9 11
1 2
2 4
3 4
3 7
3 9
4 6
4 7
5 6
6 9
7 8
8 9

*/

int main() {

    int n, m;
    cin >> n >> m;
    vector < vector <int> > ady(n+1);
    for(int i = 0; i < m; i++){
        int a,b;
        cin >> a >> b;
        ady[a].push_back(b);
        ady[b].push_back(a);
    }

    vector <int> dist(n+1, 1 << 29);
    queue <int> cola;

    dist[1] = 0;
    cola.push(1);

    while(cola.size() != 0){
        int nodo = cola.front();
        cola.pop();
        for(int i = 0; i < ady[nodo].size(); i++){
            int vecino = ady[nodo][i];
            if(dist[vecino] > dist[nodo] + 1){
                dist[vecino] = dist[nodo] + 1;
                cola.push(vecino);
            }
        }
    }

    for(int i = 1; i <= n; i++){
        cout << "Nodo " << i << ": " << dist[i] << endl;
    }
    return 0;
}