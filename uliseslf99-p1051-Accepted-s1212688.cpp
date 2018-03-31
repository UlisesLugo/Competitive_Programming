#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    long int n;
    cin >> n;
    cout << fixed << setprecision(0) << (n-ceil(n/3.0)) << endl;

    return 0;
}
