#include <iostream>
#include <cmath>

using namespace std;

bool isSquare(int x){
    int raiz =sqrt(x);
    return x == raiz*raiz;
}

bool isFib(int x){
    return isSquare(5*x*x+4)||isSquare(5*x*x-4);
}

int main()
{
    int n,casos;
    cin >> casos;
    for(int i=1;i<=casos;i++){
        cin >> n;
        if(isFib(n))
            cout << "Harry wins" << endl;
        else
            cout << "Ron wins" << endl;
    }
    return 0;
}
