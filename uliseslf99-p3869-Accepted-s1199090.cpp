#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int t,before=1,next,time=0;
    cin >> t;
    for(int i=1;i<=t;i++){
        cin>> next;
        time+= abs(next-before);
        before = next;
    }
    time+= abs(before-1);
    cout << time;
    return 0;
}
