#include <iostream>
#include <bitset>
#include <climits>
#include <bits/stdc++.h>

using namespace std;



size_t popcount(size_t n) {
    std::bitset<sizeof(size_t) * CHAR_BIT> b(n);
    return b.count();
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    unsigned long long int suma =0;
    cin >> n;
    //while(cin >> n){
            //suma=0;2
        if(n<25000000)
            for(int i=1;i<=n;i++)
                suma+= (i-popcount(i));
        else if(n<50000000){
            suma=312499708888212;
            for(int i=25000001;i<=n;i++)
                suma+= (i-popcount(i));
            }
        else if(n<75000000){
            suma=1249999392776436;
            for(int i=50000001; i<=n;i++)
                suma += (i-popcount(i));
            }
        else {
            suma=2812499067502486;
            for(int i=75000001;i<=n;i++)
                suma += (i-popcount(i));

            }

        cout << suma << endl;
    //}
    return 0;
}
