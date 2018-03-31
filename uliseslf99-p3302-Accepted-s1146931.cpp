#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;
    double l,exp;
    cin >>n;
    for(int i=1;i<=n;i++){
        cin >> l;
        exp = 1 / (l*l);
        cout << fixed << setprecision(4) << exp << endl;
    }
    return 0;
}
