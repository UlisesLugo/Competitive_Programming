#include <iostream>
#include <bits/stdc++.h>

using namespace std;

string intToBi(int n){
    string res="";
    while(n!=0){
        if(n%2)
            res= "1" + res;
        else
            res= "0" + res;

        n/=2;
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    string number;
    int contador,numero;

    while(cin >> numero && numero!=0){
        contador=0;
        number= intToBi(numero);
        for(int i=0;i<number.length();i++){
            if(number[i]=='1')
                contador++;
        }
        cout << "The parity of " << number << " is " << contador << " (mod 2)." << endl;
    }
    return 0;
}
