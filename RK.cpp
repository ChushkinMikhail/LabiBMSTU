
#include <iostream>
#include <math.h>

using namespace std;

int Fac (int N);

int main()
    {

    //cout << Fac (5);

    double i = 0;

    for (int n = 1; n < 6; n ++)
        {
        double y = pow (Fac (n), -1);

        cout <<" "<< y;

        i += y;
        }

    cout <<" summa = "<< i;
    }

int Fac (int N)
    {
    int k = 1;

    for (int a = 1; a < N+1; a++)
        {
        k *= a;
        }

    return k;
    }
