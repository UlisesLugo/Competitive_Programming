#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int contarCaracteres(char x[99]){
    int contador = 0;
    for(int i = 0; i <= 99; i++){
        if (x[i]== '0' || x[i]== '1' )
            contador++;
        else break;
    }
    return contador;
}


int main()
{
    int i=1,tercias,longitud, num[33],sobrantes;
    char x[99];
    cin >> x;
    longitud = contarCaracteres(x);
    tercias = longitud / 3;
    sobrantes = longitud % 3;

    if (sobrantes==0){
        do{
            if (x[longitud-(3*i)]== '1'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=7;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 6;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 5;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 4;
                }
            }
            else if (x[longitud-(3*i)]=='0'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=3;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 2;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 1;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 0;
                }
            }
            i++;

        }while(i <= tercias);
    }

    if (sobrantes==1 && tercias != 0){
        do{
            if (x[longitud-(3*i)]== '1'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=7;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 6;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 5;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 4;
                }
            }
            else if (x[longitud-(3*i)]=='0'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=3;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 2;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 1;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 0;
                }
            }
            i++;

        }while(i <= tercias);
        num[i]= 1;
        i++;
    }

    if (sobrantes==2 && tercias !=0){
        do{
            if (x[longitud-(3*i)]== '1'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=7;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 6;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 5;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 4;
                }
            }
            else if (x[longitud-(3*i)]=='0'){
                if (x[longitud-(3*i-1)]== '1'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]=3;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 2;
                }
                else if (x[longitud-(3*i-1)]== '0'){
                    if (x[longitud-(3*i-2)]== '1')
                        num[i]= 1;
                    else if (x[longitud-(3*i-2)]== '0')
                        num[i] = 0;
                }
            }
            i++;

        }while(i <= tercias);
        if (x[1]=='0')
            num[i]= 2;
        else if (x[1]=='1')
            num[i]= 3;
        i++;
    }

    if(tercias==0){
        if (x[1]=='1')
            num[i] = 3;
        else if (x[1]=='0')
            num[i]= 2;
        else if (x[0]=='1')
            num[i]=1;
        else
            num[i]= 0;
        i++;
    }
    i--;
    while(i>0){
        cout<< num[i];
        i--;
    }

    return 0;
}
