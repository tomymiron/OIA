// es un conjunto de objetos llamados nodos unidos por enlaces llamados aristas que representan una relacion binaria.
// orden: cantidad de nodos

//grafo dirigido, las aristas tienen un sentido definido desde un node origen hacia un nodo destino.

//grafo no dirigido, las aristas representan relaciones simetricas y no tienen un sentido definide (conectan a los nodos en ambos sentidos)

// vecino y grado
// a es vecino de b si tenemos una arista que una a los dos vertices (y b es vecino de a)
// la cantidad de vecinos de a se llama grado de a

// matriz de adyacencia
/* 
    matriz de n x n donde n es la cantidad de nodos del grafo.

    un 1 representa una ariasta en el par


Representacion de grafo 1 (deficit de eficiencia, ocupa mucho espacio)
    A   B   C   D   F
A   0   0   0   1   0
B   0   0   0   1   0
C   0   0   0   0   0
D   0   0   0   0   1
F   0   1   1   0   0
*/
// lista de adyacencia
/*
    es un vector de vectores de enteros en el i-esimo

    vector tiene el nodo j si existe una arista entre i y j

Representacion de grafo 2 (mas eficaz)
A: {D}
B: {D}
C:
D: {F}
F: {B;C}
*/



/*

CAMINO: Sucesion de vertices y aristas dentro de un grafo que empieza y termina en vertices.

Dos vertices estan conectados si existe un camino para llegar del uno al otro.

La longitud de un camino es su nomero de aristas.

La menor longitud es la distancia.

*/
/*
BUCLE, es una arista que conecta un vertice consigo mismo.

CICLO, camino donde el origen es igual al desino

*/
/*
BFS
Busqueda en anchura: recorre el grafo y calcula la minima distancia desde un nodo a cada uno de los otros.

DFS
Busqueda en profundidad, recorre todos los nodos en un grafo de manera ordenada.
Expande cada nodo que va localizando en un camino concreto.
Cuando ya no quedan vecinos por visitar, retorna y repite el proceso por cada hermano del nodo visidato.


BFS y DFS
Ambos procesan todos los nodos alcanzables desde un nodo pero en distinto orden
Muchos problemas se resuelven con ambos algoritmos
otros, solamente con uno:
BFS: distancia entre dos nodos
DFS: problemas que tienen que ver con la estructura de un grafo
*/