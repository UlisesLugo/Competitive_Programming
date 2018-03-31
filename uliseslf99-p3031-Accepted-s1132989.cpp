#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a,b;
    while(scanf("%i %i", &a, &b),(a&&b)){

            printf ("%i %i / %i\n", (a/b), (a%b), b);

    }
    return 0;
}
