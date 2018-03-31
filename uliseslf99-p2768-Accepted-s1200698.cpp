#include <stdio.h>
#include <cmath>
#include <iostream>
using namespace std;

long long int fastExp2(int pot){
    if(pot==0) return 1;
    else if(pot==1) return 2;
    else{
        long long int res = fastExp2(pot/2);
        res = (res*res)%1000000007;
        if(pot%2==1)
            res= (res*2)%1000000007;
        return res;
    }
}

int main()
{
    long long int res;
    int potencia;
    while(scanf("%d",&potencia) && potencia!=0){
        res = fastExp2(potencia+1)%1000000007;
        printf("%ld\n",res-1);

    }
    return 0;
}
