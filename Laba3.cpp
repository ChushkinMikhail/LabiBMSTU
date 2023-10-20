#include <iostream>
#include <vector>

using namespace std;

void task11 (int mas [], int S);
void task12 (int mas [], int S);
void task13 (int mas [], int S);
void task21 (int mas [], int S);
void task22 (int mas [], int S);
void task23 (int mas [], int S);
void task24 (int mas [], int S);
void task25 (int mas [], int S);
void task26 (int mas [], int S);
void task30 (int mas [], int S);
void task41 ();
void task42 ();
void task50 ();
void task60 ();
void task70 ();
void task80 ();
void task90 ();
void task100 ();

int main()
    {
    int size = 0;
    int Mas1 [size];
    
    int numT = 0;
    
    cout <<"введите номер задания и подпункт без пробела\n";
    
    cin >> numT;
    
    if (numT < 40)
        {
        
        cout << "введите размер массива \n";
        cin >> size;
        
        int k = 0;
        
        cout << "ввкдите " << size << " элементов массива через enter \n";
        
        for (int i = 0; i < size; i ++)
            {
            cin >> k;
            Mas1 [i] = k;
            
            }
        }
    
    if (numT == 11)
        {
        task11 (Mas1, size);
        }
    
    if (numT == 12)
        {
        task12 (Mas1, size);
        }
    
    if (numT == 13)
        {
        task13 (Mas1, size);
        }
    
    if (numT == 21)
        {
        task21 (Mas1, size);
        }
    
    if (numT == 22)
        {
        task22 (Mas1, size);
        }
    
    if (numT == 23)
        {
        task23 (Mas1, size);
        }
    
    if (numT == 24)
        {
        task24 (Mas1, size);
        }
    
    if (numT == 25)
        {
        task25 (Mas1, size);
        }
    
    if (numT == 26)
        {
        task26 (Mas1, size);
        }
    
    if (numT == 30)
        {
        task30 (Mas1, size);
        }
    
    if (numT == 41)
        {
        task41 ();
        }
    
    if (numT == 42)
        {
        task42 ();
        }
    
    if (numT == 50)
        {
        task50 ();
        }
    
    if (numT == 60)
        {
        task60 ();
        }
    
    if (numT == 70)
        {
        task70 ();
        }
    
    if (numT == 80)
        {
        task80 ();
        }
    
    if (numT == 90)
        {
        task90 ();
        }
    
    if (numT == 100)
        {
        task100 ();
        }
    
    
    /*int size2 = 20;
    int Mas2 [size2];
    
    int k2 = 0;
    
    cout << "ввкдите " << size2 << " элементов массива через enter \n";
    
    for (int i = 0; i < size2; i ++)
        {
        cin >> k2;
        Mas2 [i] = k2;
        }
    
    cout << "\n";*/
    
    /*for (int i = 0; i < size; i ++)
        {
        cout << Mas1 [i] << "\n";
        }*/
    
    //
    //task12 (Mas1, size);
    //task13 (Mas1, size);
    //task21 (Mas1, size);
    //task22 (Mas1, size);
    //task23 (Mas1, size);
    //task24 (Mas1, size);
    //task25 (Mas1, size);
    //task26 (Mas1, size);
    //task30 (Mas2, size2);
    //task41 ();
    //task42 ();
    //task50 ();
    //task60();
    //task70 ();
    //task80 ();
    //task90 ();
    //task100();
    
    return 0;
    }

void task11(int mas [], int S)
    {
    for (int i = 0; i < S; i++)
        {
        mas [i] = mas [i] * 2;
        }
    
    for (int i = 0; i < S; i++)
        {
        cout << mas [i] << "\n";
        }
    }

void task12 (int mas [], int S)
    {
    int a = 0;
    
    cout << "введите число a \n";
    cin >> a;
    cout << "\n";
    
    for (int i = 0; i < S; i++)
        {
        mas [i] = mas [i] - a;
        }
    
    for (int i = 0; i < S; i++)
        {
        cout << mas [i] << "\n";
        }
    }

void task13 (int mas [], int S)
    {
    int a = mas [0];
    
    for (int i = 0; i < S; i++)
        {
        mas [i] = mas [i]/a;
        }
    
    for (int i = 0; i < S; i++)
        {
        cout << mas [i] << "\n";
        }
    }

void task21 (int mas [], int S)
    {
    int sum = 0;
    
    for (int i = 0; i < S; i++)
        {
        sum += mas [i];
        }
    
    cout << "сумма равна " << sum << "\n";
    }

void task22 (int mas [], int S)
    {
    int sum = 0;
    
    for (int i = 0; i < S; i++)
        {
        sum += mas [i] * mas [i];
        }
    
    cout << "сумма равна " << sum << "\n";
    }

void task23 (int mas [], int S)
    {
    int sum = 0;
    
    for (int i = 0; i < 6; i++)
        {
        sum += mas [i];
        }
    
    cout << "сумма равна " << sum << "\n";
    }

void task24 (int mas [], int S)
    {
    int sum = 0;
    
    int k1 = 0;
    int k2 = 0;
    
    cout << "введите грницы промежутка через enter \n";
    
    cin >> k1;
    cin >> k2;
    
    if (k1 < 0 || k1 > S || k2 < 0 || k2 > S || k2 < k1)
        {
        cout << "неверные границы";
            
        return;
        }
    
    for (int i = k1; i < k2; i++)
        {
        sum += mas [i];
        }
    
    cout << "сумма равна " << sum << "\n";
    }

void task25 (int mas [], int S)
    {
    double sum = 0;
    
    for (int i = 0; i < S; i++)
        {
        sum += mas [i];
        }
    
    double SR = sum/S;
    
    cout << "среднее арифметическое равно " << SR << "\n";
    }

void task26 (int mas [], int S)
    {
    double sum = 0;
    
    int s1 = 0;
    int s2 = 0;
    
    cout << "введите грницы промежутка через enter \n";
    
    cin >> s1;
    cin >> s2;
    
    if (s1 < 0 || s1 > S || s2 < 0 || s2 > S || s2 < s1)
        {
        cout << "неверные границы";
            
        return;
        }
    
    for (int i = s1; i < s2; i++)
        {
        sum += mas [i];
        }
    
    int l = s2 - s1;
    
    double SR = sum/l;
    
    cout << "среднее арифметическое равно " << SR << "\n";
    }

void task30 (int mas [], int S)
    {
    for (int i = 0; i < 3; i ++)
        {
        int p = mas [S - i - 1];
        mas [S - i - 1] = mas [i];
        mas [i] = p;
        }
    
    for (int i = 0; i < S; i ++)
        {
        cout << mas [i] << "\n";
        }
    }

void task41 ()
    {
    vector <int> v1;
    int Size = 10;
    
    int k = 0;
    
    cout << "введите элементы через enter \n";
    
    for (int i = Size; i > 0; i --)
        {
        cin >> k;
        v1.push_back (k);
        }
    
    for (int i = 0; i < Size; i ++)
        {
        if (v1 [i] < 0)
            {
            v1.erase (v1.begin () + i);
            Size -= 1;
            }
        }
    
    for (int i = 0; i < Size; i ++)
        {
        cout << v1 [i] << " ";
        }
    }

void task42 ()
    {
    vector <int> v1;
    int Size = 10;
    
    int k = 0;
    
    cout << "введите элементы через enter \n";
    
    for (int i = Size; i > 0; i --)
        {
        cin >> k;
        v1.push_back (k);
        }
    
    int index1 = -1;
    
    for (int i = 0; i < Size; i ++)
        {
        if (v1 [i] % 2 == 0)
            {
            index1 = i;
            }
        }
    
    if (index1 != -1)
        {
        v1.erase (v1.begin () + index1);
        Size -= 1;
        }
    
    for (int i = 0; i < Size; i ++)
        {
        cout << v1 [i] << " ";
        }
    }

void task50 ()
    {
    vector <char> G1 = {'M', 'o', 's', 'c', 'o', 'w'};
    
    int a  = G1.size();
    
    if (a % 2 == 0)
        {
        cout << "колличество букв четно\n";
        }
    else cout << "колличество букв нечетно\n";
    
    }

void task60 ()
    {
    char fam1 [40];
    
    cin.getline(fam1, 40);
    
    int a1 = 0;
    
    for (int i = 0; fam1 [i] != '\0'; i++)
        {
        a1 += 1;
        }
    
    char fam2 [40];
    
    cin.getline(fam2, 40);
    
    int a2 = 0;
    
    for (int i = 0; fam2 [i] != '\0'; i++)
        {
        a2 += 1;
        }
    
    if (a1 > a2)
        {
        cout << "true\n";
        }
    else cout << "false\n";
    }

void task70 ()
    {
    
    string g1 ;
    
    cout << "Введите город 1: ";
    
    cin >> g1;
    
    int a1 = g1.size ();
    
    string g2;
    
    cout << "Введите город 2: ";
    
    cin >> g2;
    
    int a2 = g2.size ();
    
    string g3;
    
    cout << "Введите город 3: ";
    
    cin >> g3;
    
    int a3 = g3.size ();
    
    /*cout << a1 << "\n";
    cout << a2 << "\n";
    cout << a3 << "\n";*/
    
    if (a1 > a2 && a1 > a3 && a3 < a2) //a3 short a1 long
        {
        cout << "the longest\n";
        cout << g1;
        cout << "\n";
            
        cout << "the shortest\n";
        cout << g3;
        cout << "\n";
        }
    
    if (a1 > a2 && a1 > a3 && a3 > a2) //a2 short a1 long
        {
        cout << "the longest\n";
        cout << g1;
        cout << "\n";
            
        cout << "the shortest\n";
        cout << g2;
        cout << "\n";
        }
    
    if (a2 > a1 && a2 > a3 && a3 < a1) //a3 short a2 long
        {
        cout << "the longest\n";
        cout << g2;
        cout << "\n";
            
        cout << "the shortest\n";
        cout << g3;
        cout << "\n";
        }
    
    if (a2 > a1 && a2 > a3 && a3 > a1) //a1 short a2 long
        {
        cout << "the longest\n";
        cout << g2;
        cout << "\n";
        
        cout << "the shortest\n";
        cout << g1;
        cout << "\n";
        }
    
    if (a3 > a1 && a3 > a2 && a2 < a1) //a2 short a3 long
        {
        cout << "the longest\n";
        cout << g3;
        cout << "\n";
            
        cout << "the shortest\n";
        cout << g2;
        cout << "\n";
        }
    
    if (a3 > a1 && a3 > a2 && a2 > a1) //a1 short a3 long
        {
        cout << "the longest\n";
        cout << g3;
        cout << "\n";
            
        cout << "the shortest\n";
        cout << g1;
        cout << "\n";
        }
    }

void task80 ()
    {
    string s1;
    
    cin.ignore ();
    
    getline (cin, s1);
    
    double a = 0;
    
    a = s1.size();
    
    string zvz;
    
    for (int i = 0; i < a; i++)
        {
        zvz += '*';
        }
    
    cout << zvz + s1 + zvz <<"\n";
    }

void task90 ()
    {
    string s1;
    
    cin.ignore ();
    
    getline (cin, s1);
    
    double a = 0;
    double b = 0;
    
    for (int i = 0; s1 [i] != '\0'; i++)
        {
        a += 1;
        
        if (s1 [i] == 'a' || s1 [i] == 'A')
            {
            b += 1;
            }
        }
    
    double dolya = b/a;
    
    cout << "доля букв а в слове ";
    
    cout << s1;
    
    cout <<" равно "<< dolya << "\n";
    }

void task100 ()
    {
    string sentence = "Can you can a can as a canner can can a can ?";
    string new_word;

    cout<< "Введите слово чтобы заменить can: ";
    cin>> new_word;

        int p = 0;

        while ((p = sentence.find("can ", p)) != string::npos)
            {
            sentence.replace(p, 3, new_word);
            p += new_word.size();
            }

    cout << sentence << "\n";

    }
