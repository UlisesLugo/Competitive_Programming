#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    int casos,precio;
    long int total;
    double refund;
    scanf("%d",&casos);
    for(int i=1;i<=casos;i++){
        total=0;
        for(int j=1;j<=10;j++){
            scanf("%d",&precio);
            total+=precio;
        }
        refund = .85 * total;
        printf("%.3lf\n",refund);
    }
    return 0;
}
