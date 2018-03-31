#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,n,contador,raiz,primo;
    cin >>t;
    for(int i=1; i<=t; i++){
        contador=0;
        cin >> n;
        if(n%2==0)
            contador++;
        if(n%3==0)
            contador++;
        for(int j=5;j<=n;j+=6){
            primo=0;
            raiz=floor(sqrt(j));
            if(j%3==0)
                primo++;
            else{
                for(int k=5;k<=raiz;k+=6)
                    if(j%k==0){
                        primo++;
                        break;
                    }
                for(int k=7;k<=raiz;k+=6)
                    if(j%k==0){
                        primo++;
                        break;
                    }
            }
            if(n%j==0 && primo==0)
                contador++;
        }
        for(int j=7;j<=n;j+=6){
            primo=0;
            raiz=floor(sqrt(j));
            if(j%3==0)
                primo++;
            else{
                for(int k=5;k<=raiz;k+=6)
                    if(j%k==0){
                        primo++;
                        break;
                    }
                for(int k=7;k<=raiz;k+=6)
                    if(j%k==0){
                        primo++;
                        break;
                    }
            }
            if(n%j==0 && primo==0)
                contador++;
        }

        cout << contador << endl;
    }
    return 0;
}
