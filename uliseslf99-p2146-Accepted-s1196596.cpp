#include <iostream>

using namespace std;

int main()
{
    long int vertices, diagonales;
    cin >> diagonales >> vertices;
    if(diagonales==(vertices*(vertices-3)/2))
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;
}
