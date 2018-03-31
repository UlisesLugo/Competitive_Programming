#include <iostream>
#include <cmath>
using namespace std;

void multiply(long long unsigned int F[2][2], long long unsigned int M[2][2]);

void power(long long unsigned int F[2][2], int n);

long long unsigned int fib(int n)
{
  long long unsigned int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0]%1000000007;
}

void power(long long unsigned int F[2][2], int n)
{
  if( n == 0 || n == 1)
      return;
  long long unsigned int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long unsigned int F[2][2], long long unsigned int M[2][2])
{
  long long unsigned int x =  F[0][0]%1000000007*M[0][0]%1000000007 + F[0][1]%1000000007*M[1][0]%1000000007;
  long long unsigned int y =  F[0][0]%1000000007*M[0][1]%1000000007 + F[0][1]%1000000007*M[1][1]%1000000007;
  long long unsigned int z =  F[1][0]%1000000007*M[0][0]%1000000007 + F[1][1]%1000000007*M[1][0]%1000000007;
  long long unsigned int w =  F[1][0]%1000000007*M[0][1]%1000000007 + F[1][1]%1000000007*M[1][1]%1000000007;

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
int main()
{
    int casos;
    int feet;
    cin >> casos;
    for(int i=1;i<=casos;i++){
        cin >> feet;
        cout << fib(feet+1) << endl;
    }
    return 0;
}
