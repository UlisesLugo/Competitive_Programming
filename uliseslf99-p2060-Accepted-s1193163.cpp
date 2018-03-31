#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int n,din;
    while(scanf("%i",&n) && n!=-1){
        int suma=0,contador=0;
        for(int i=1;i<=n;i++){
            scanf("%i",&din);
            suma+=din;
            if(suma%100==0)
                contador++;
        }
        printf("%i\n",contador);
    }
    return 0;
}
