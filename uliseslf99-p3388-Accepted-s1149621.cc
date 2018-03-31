#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    int n1,n2,contador=0;
    cin >> s;
    n1=stoi(s);
    while(n1){

        sort(s.begin(),s.end());
        n2=stoi(s);
        n1-=n2;
        s = to_string(n1);
        contador++;
    }
    cout << contador << endl;
    return 0;
}
