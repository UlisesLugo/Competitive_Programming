#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{
    int n,x1,y1,x2,y2,resta1,resta2;
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        resta1= abs(x2-x1);
        resta2= abs(y2-y1);

        printf("%d \n",resta1+resta2);
    }
    return 0;
}
