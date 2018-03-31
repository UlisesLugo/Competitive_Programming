#include <iostream>

#include <iomanip>

using namespace std;

int main()
{
    int acum=1,n;

    string s;
    getline(cin,s);
    n= s.length();
    for(int i=0;i<n;i++){

        switch(s[i]){
            case 'A':
                acum= (acum*1)%26;
                break;
            case 'B':
                acum= (acum*2)%26;
                break;
            case 'C':
                acum= (acum*3)%26;
                break;
            case 'D':
                acum= (acum*4)%26;
                break;
            case 'E':
                acum= (acum*5)%26;
                break;
            case 'F':
                acum= (acum*6)%26;
                break;
            case 'G':
                acum= (acum*7)%26;
                break;
            case 'H':
                acum= (acum*8)%26;
                break;
            case 'I':
                acum= (acum*9)%26;
                break;
            case 'J':
                acum= (acum*10)%26;
                break;
            case 'K':
                acum= (acum*11)%26;
                break;
            case 'L':
                acum= (acum*12)%26;
                break;
            case 'M':
                acum= (acum*13)%26;
                break;
            case 'N':
                acum= (acum*14)%26;
                break;
            case 'O':
                acum= (acum*15)%26;
                break;
            case 'P':
                acum= (acum*16)%26;
                break;
            case 'Q':
                acum= (acum*17)%26;
                break;
            case 'R':
                acum= (acum*18)%26;
                break;
            case 'S':
                acum= (acum*19)%26;
                break;
            case 'T':
                acum= (acum*20)%26;
                break;
            case 'U':
                acum= (acum*21)%26;
                break;
            case 'V':
                acum= (acum*22)%26;
                break;
            case 'W':
                acum= (acum*23)%26;
                break;
            case 'X':
                acum= (acum*24)%26;
                break;
            case 'Y':
                acum= (acum*25)%26;
                break;
            case 'Z':
                acum= (acum*26)%26;
                break;
        }
    }

    cout << setfill('0') << setw(2) << acum;

    return 0;
}
