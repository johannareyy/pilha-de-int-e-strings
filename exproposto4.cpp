#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(){

    stack<string> pilha;
    int tam = 10;
    string elemento, vet[tam], elem_excl;

    for(unsigned int i = 0; i < tam; i++){ //insere elemento na pilha
        cin >> elemento;
        pilha.push(elemento);
        vet[i] = pilha.top();
    }

    /*for (unsigned int i = 0; i<tam; i++){ 
        pilha.pop();
        tam --;
    }*/

    for (unsigned int i = 0; i < tam; i++){ //imprime pilha
        cout << vet[i] << "\n";
    }

    stack<int> pilhai;
    int tami = 10, elementoi, veti[tami];

    for(unsigned int i = 0; i < tami; i++){ //insere elemento na pilha
        cin >> elementoi;
        pilhai.push(elementoi);
        veti[i] = pilhai.top();
    }

    for (unsigned int i = 0; i < tami; i++){ //imprime pilha
        cout << veti[i] << "\n";
    }

    //push pop print
}

