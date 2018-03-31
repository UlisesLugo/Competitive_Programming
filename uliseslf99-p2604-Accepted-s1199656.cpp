#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int signos,contadorS=0,contadorV=0,longitud,total=0;
    vector<int> valores;
    string cadena;
    char signo[5];
    cin >> signos;
    for(int i=0; i<2*signos+1;i++){
        if(i%2==0){
            cin >> cadena;
            longitud=cadena.length();
            valores.push_back(0);
            while(longitud>0){
                switch(cadena[0]){
                    case '=':
                        valores[contadorV]+= 10;
                        cadena.erase(0,1);
                        break;
                    case '-':
                        valores[contadorV]+= 5;
                        cadena.erase(0,1);
                        break;
                    case '.':
                        valores[contadorV]+= 1;
                        cadena.erase(0,1);
                        break;
                    case ':':
                        valores[contadorV]+= 2;
                        cadena.erase(0,1);
                        break;
                }
                longitud=cadena.length();
            }
            contadorV++;
        }
        else{
            cin >> signo[contadorS];
            contadorS++;
        }
    }
    int j,multiplicacion[5];
    for(int i=0;i<signos;i++){
        if(signo[i]=='*'){
            j=i;
            multiplicacion[i]= valores[i]*valores[i+1];
            valores[i]=0;
            valores[i+1]=0;
            while(signo[j+1]=='*'){
                j++;
                multiplicacion[i]*= valores[j+1];
                valores[j+1]=0;
            }
            total+= multiplicacion[i];
        }
    }
    for(int i=0;i<valores.size();i++){
        total+=valores[i];
    }
    cout << total << endl;
    return 0;
}
