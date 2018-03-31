#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int t;
    double d,v1,v2,m,total;
    cin >> t;
    for(int i =1; i<=t;i++){

        cin >> d >> v1 >> v2 >> m;
        total = m * (d/(v1+v2));
        cout << fixed << setprecision(2) << total << endl;
    }

    return 0;
}
