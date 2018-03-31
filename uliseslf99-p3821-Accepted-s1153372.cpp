#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n,mayor,menor,cali,total,maxTotal=0;
    scanf("%i",&n);
    for(int i=1;i<=n;i++){
        mayor = 0;
        menor = 101;
        total = 0;
        for(int j=1; j<=10;j++){
            scanf("%i",&cali);
            mayor = max(cali,mayor);
            menor = min(cali,menor);
            total += cali;
        }
        total -= mayor + menor;
        maxTotal=max(maxTotal,total);
        printf("%i %i\n",i,total);
    }
    printf("%i\n",maxTotal);
    return 0;
}
