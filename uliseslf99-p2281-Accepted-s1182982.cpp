#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    string codigo,frase;
    int longitud,contador,raiz,i,repe;
    cin>>repe;
    for(int k=1;k<=repe;k++){
        frase="";
        cin >> codigo;
        longitud = codigo.length();
        raiz=sqrt(longitud);

        i=0;
        while(i<raiz){
            contador =raiz-i;
            while(contador<=longitud){
                frase += codigo[contador-1];
                contador += raiz;
            }
            i++;

        }
        cout << frase << endl;
    }
    return 0;
}
