#include <iostream>

using namespace std;

int main()
{
    long int n,contador=0;
    cin >> n;
    while(n!=1){
        n /= 2;
        contador++;
    }
    cout << contador+1 << endl;
    return 0;
}
