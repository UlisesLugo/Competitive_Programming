#include <iostream>

using namespace std;

int main()
{
    int n,x,suma;
    cin >> n;
    for(int i=1; i<=n;i++){
        suma=0;
        cin >> x;
        suma= 3*x*x + 2;
        cout << suma << endl;
    }
    return 0;
}
