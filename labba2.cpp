
#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

void Z1 ();
void Z2 ();
void Z3 ();
void Z3b ();
void Z4  ();

int main ()
    {

    //Z1 ();

    Z2 ();

    //Z3 ();

    //Z3b ();

    //Z4 ();

    }

void Z1 ()
    {
    int X, Y, Z;

    cin >> X >> Y >> Z;

    /*if (X % 2 != 0 && Y % 2 != 0)
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";*/

    /*if (X < 20 || Y < 0)
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";*/

    /*if (X == 0 || Y == 0 || (X == 0 && Y == 0))
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";*/

    /*if (X < 0 && Y < 0)
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";*/

    /*if ((X % 5 == 0 && Y % 5 != 0 && Z % 5 != 0) ||
          (Y % 5 == 0 && X % 5 != 0 && Z % 5 != 0) || (Z % 5 == 0 && X % 5 != 0 && Y % 5 != 0))
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";*/

    if (X < 100 || Y < 100 || Z < 100 || (X < 100 && Y < 100) ||
       (X < 100 && Z < 100) || (Y < 100 && Z < 100) || (X < 100 && Y < 100 && Z < 100))
        {
        cout <<"condition is true";
        }
    else cout <<"condition is false";

    }

void Z2 ()
    {

    pair <int, int> pole1;
    pair <int, int> pole2;

    cout << "Vvedite x1 \n";
    cin >> pole1.first;

    cout << "Vvedite y1 \n";
    cin >> pole1.second;

    cout << "Vvedite x2 \n";
    cin >> pole2.first;

    cout << "Vvedite y2 \n";
    cin >> pole2.second;

    if (pole1.first > 8 || pole1.second > 8 || pole2.first > 8 || pole2.second > 8 ||
       (pole1.first == pole2.first && pole1.second == pole2.second) || pole1.first < 0 ||
        pole1.second < 0 || pole2.first < 0 || pole2.second < 0 )
        {
        cout <<"nevernie coordinati";

        return;
        }

    if (pole1.first == pole2.first || pole1.second == pole2.second)
        {
        cout <<"Ladya b'et ladyu";
        }
    else cout <<"Hod nevozmozhen";

    /*if (abs (pole2.first - pole1.first) == abs (pole2.second - pole1.second))
        {
        cout <<"slon b'et slona";
        }
    else cout <<"Hod nevozmozhen";*/

    /*if (abs (pole2.first - pole1.first) == 1 ||
          abs (pole2.second - pole1.second) == 1 ||
         (abs (pole2.first - pole1.first) == 1 && abs (pole2.second - pole1.second) == 1))
        {
        cout <<"korol delaet hod";
        }
    else cout <<"Hod nevozmozhen";*/

    /*if (pole1.first == pole2.first || pole1.second == pole2.second ||
          abs (pole2.first - pole1.first) == abs (pole2.second - pole1.second))
        {
        cout <<"Ferz b'et ferzya";
        }
    else cout <<"Hod nevozmozhen";*/

    /*if (abs (pole2.first - pole1.first) == 1 && pole2.second - pole1.second == 1)
        {
        cout <<"Peshka hodit/b'et figuru";
        }
    else cout <<"Hod nevozmozhen";*/
    }

void Z3 ()
    {
    int i = 0;

    for (int a = 1; a < 10; a ++)
        {
        i = a*7;

        cout << a <<" x 7 = " << i <<"\n";
        }
    }

void Z3b ()
    {
    int N = 0;
    cin >> N;

    int i = 0;

    for (int a = 1; a < 10; a ++)
        {
        i = a*N;

        cout << a <<" x "<< N << " = "<< i <<"\n";
        }
    }

void Z4 ()
    {
    /*int a = 1;

    for (int i = 8; i < 16; i++)
        {
        a *= i;
        }
    cout << a;*/

//--------------------------------------------------------------------------------------------------

    /*int i=1;
    int a;
    cin >> a;

    if (a > 19 || a < 1)
        {
        return;
        }

    for (a; a < 21; a++)
        {
        i *= a;
        }
    cout << i; */

//--------------------------------------------------------------------------------------------------

    /*int k=1;
    int b;
    cin >> b;

    if (b > 19 || b < 1)
        {
        return;
        }

    for (int i = 1; i < b+1; i++)
        {
        k *= i;
        }
    cout << k;*/

//--------------------------------------------------------------------------------------------------

    int a;
    int b;

    long int i=1;

    cin >> a >> b;

    if (b < a)
        {
        return;
        }

    for (a; a < b+1; a++)
        {
        i *= a;
        }

    cout << i;
    }




