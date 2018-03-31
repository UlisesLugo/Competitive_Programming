#include <iostream>

using namespace std;

int main()
{
    long long int a,b,sum;
    cin >> a >> b;
    sum = (a+b) + (a-b) + (b+a) + (b-a);
    cout << sum << endl;
    return 0;
}
