#include <iostream>

using namespace std;

long long int factorial(int n){
    if(n==1)
        return 1;
    else
        return factorial(n-1)*n;
}

int main()
{
    int t,n;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin >> n;
        cout << "Case #" << i << ": " << factorial(n) << endl;
    }
    return 0;
}
