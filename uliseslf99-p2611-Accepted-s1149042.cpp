#include <iostream>
#include <cmath>

using namespace std;

void Ordenar(int partidos[],int n){
    int aux;
    int i=0, j=0;
    for(i=1;i<=n;i++){
        for(j=0;j<=n-i;j++){
            if(partidos[j]>partidos[j+1]){
                aux = partidos[j+1];
                partidos[j+1] = partidos[j];
                partidos[j]=aux;
            }
        }
    }
}

int main()
{
    int n,goles,favor,contra,total=0,ceros=0,ganados=0,perdidos=0;
    cin >> n >> goles;
    int partidos[100000];
    for(int i=0;i<n;i++){
        cin >> favor >> contra;

        if(favor-contra==0)
            ceros++;
        else if(favor-contra>0)
                ganados++;
            else{
                partidos[perdidos]= favor-contra;

                perdidos++;
            }
    }

    Ordenar(partidos,perdidos-1);




    while(ceros>0 && goles>0){
        goles--;
        ceros--;
        ganados++;
    }
    total=ganados*3+ceros;



    for(int i=perdidos-1;i>=0;i--){
        if(goles>abs(partidos[i])){
                goles-= abs(partidos[i])+1;
                partidos[i]=1;

            }

        else if(goles==abs(partidos[i])){
            goles=0;
            partidos[i]=0;
            break;
        }
        else
            break;
    }

    for(int i=0;i<perdidos;i++){

        if(partidos[i]>0)
            total+=3;
        else if(partidos[i]==0)
            total+=1;
    }

    cout << total;
    return 0;
}
