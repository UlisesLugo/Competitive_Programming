#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;
/*
void fastscan(int &number){
    bool negative = false;
    register char c;

    number = 0;
    c= getchar();
    if(c == '-'){
        negative = true;
        c= getchar();
    }
    for(;(c>47 && c<58);c=getchar())
        number = number*10 + c -48;

    if(negative)
        number*= -1;
}
*/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, dados[6];
    bool contador;
    cin >> n;


    for(int i=1;i<=n;i++){
        contador=false;
        for(int j=1;j<=5;j++)
            cin >> dados[j];

        if((dados[1]==1 && dados[2]==2 && dados[3]==3 && dados[4]==4 && dados[5]==5)||(dados[1]==2 && dados[2]==3 && dados[3]==4 && dados[4]==5 && dados[5]==6))
            contador = true;

        if(contador)
            cout << "Y\n";
        else
            cout << "N\n";

    }
    return 0;
}
