#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m,ganancias=0;
    int vi[1001];
    cin >> n >> m;
    for(int i=0;i<n;i++)
        cin >> vi[i];
    sort(vi,vi+n);
    for(int i=0;i<m;i++)
        if(vi[i]<0)
            ganancias -= vi[i];
    cout << ganancias;

    return 0;
}
