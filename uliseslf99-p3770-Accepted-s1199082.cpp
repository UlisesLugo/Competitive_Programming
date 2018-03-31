#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> letras;
    int cant;
    char letra;
    cin >> cant;
    for(int i=1;i<=cant;i++){
        cin >> letra;
        letras.push_back(letra);
    }
    sort(letras.begin(),letras.end());
    letra = letras[cant/2];
    cout << letra << endl;
    return 0;
}
