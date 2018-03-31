
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int contarDigitos(int n){
    int contador=0;
    while(n>0){
        n /= 10;
        contador++;
    }
    return contador;
}

int main()
{
    int numero, matriz[6], digitos,contador,verifica=0;
    cin >> numero;
    digitos = contarDigitos(numero);
    contador=digitos;
    while(contador>0){
        matriz[contador-1]=numero%10;
        numero /= 10;
        contador--;
    }
    next_permutation(matriz,matriz+digitos);
    for(int i=0; i<digitos-1;i++){
        if(matriz[i]<=matriz[i+1])
            verifica++;
        else
            break;
    }
    if(verifica==digitos-1){
        cout << 0;
    }
    else{
        for(int i=0; i<digitos; i++){
            cout << matriz[i];
        }
    }

    return 0;
}
