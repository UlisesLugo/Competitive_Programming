#include <iostream>

using namespace std;


int main()
{
    int d,h,m,tot;
    cin >> d >> h >> m;
    if(d>11)
        tot=769+(d-12)*1440+h*60+m;
    else if(d==11)
        if(m-11<0)
            tot=(h-12)*60+m+49;
        else
            tot=(h-11)*60+(m-11);
    else
        tot=-1;

    if(tot<0)
        cout <<"-1" << endl;
    else
        cout << tot << endl;
    return 0;
}
