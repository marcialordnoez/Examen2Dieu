#include "Evaluador.h"
#include "NodoTrinario.h"
#include <iostream>       // std::cin, std::cout
#include <vector>          // std::list
using namespace std;

int infinito = 9999;

//Dado: un grafo con 5 nodos implementado en una tabla (arreglo bidimensional)
//Dado: las columnas de la tabla representan el inicio y las filas el destino
//Dado: las columnas y las filas se representan en el arreglo de la siguiente manera: [columnas][filas]
//Dado: las aristas tienen un valor de 0 si apuntan a ellas, infinito si no esta conectada y de lo contrario significa que sí hay una conexion entre los nodos

//Agrega una nueva arista al grafo (dado), dado sus nodo inicial, destino y peso
//Nota: se sugiere NO usar recursion
void agregarArista(int grafo[5][5], int inicio, int destino,int peso)
{

}

//Devuelve true si es posible llegar desde el nodo inicio hasta el destino.
//Se debe validar que exista al menos un camino cuya distancia sea menor que distancia_maxima (dada)
//Si no se cumple todo lo anterior se debe devolver false.
//Nota: se sugiere usar recursion
bool esPosibleLLegar(int grafo[5][5], int inicio, int destino,int distancia_maxima)
{
    return false;
}

//Devuelve el numero mayor almacenadado en el arbol con raiz dada.
//Nota: El numero esta almacenado en la variable num (ver archivo NodoTrinario.h)
int getMayor(NodoTrinario* raiz)
{
    if(raiz==NULL)
        return 0;

    if(raiz->hijo_izq==NULL&&raiz->hijo_medio==NULL&&raiz->hijo_der==NULL)
        {
            return true;
        }


    return -1;
}

//Dado el arbol con raiz dada, busca el nodo que contenga num_buscado (dado) en su variable num y lo remplaza con num_remplazo (dado).
void buscarYReemplazarNum(NodoTrinario* raiz, int num_buscado, int num_remplazo)
{
}

int main ()
{
    evaluar();

    return 1;
}
