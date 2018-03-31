#include <iostream>

using namespace std;

int main()
{
    int n,m,j,izq,der,mov,col;
    cin >> n >> m >> j;
    mov=0;
    izq=1;
    der=m;
    for(int i=1; i<=j; i++){
        cin >> col;
        if(col>der){
            mov+= (col-der);
            izq += (col-der);
            der = col;
        }
        else if(col<izq){
            mov += (izq-col);
            der -= (izq-col);
            izq = col;
        }
    }
    cout << mov << endl;
}
