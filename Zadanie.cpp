//
//  Zadanie.cpp
//  Test
//
//  Created by Михаил on 27.10.2023.
//

#include <iostream>

using namespace std;

struct student
    {
    string name;
    double age;
    double math;
    double geom;
    double prog;
    };

class group
    {
    public:
        
    double getage (int S);
    double getmark (int S, student person);
        
    vector <student> students;
        
    string N;
        
    group (int size);
    
    group ();
    };

group::group (int size)
    {
    students.resize (size);
    }

group::group ()
    {
    }

int main ()
{
    int size = 0;
    
    cout << "введите размер группы ";
    
    cin >> size;
    
    student pers1 = {"Vasya", 12, 4, 4, 3};
    student pers2 = {"Petya", 13, 4, 2, 3};
    student pers3 = {"Kolya", 42, 3, 4, 5};
    student pers4 = {"Zhora", 71, 2, 2, 2};
    student pers5 = {"Zheka",  8, 5, 5, 5};
    
    group g1 (size);
    
    group gs;
    
    cout << "введите название группы ";
    
    cin.ignore ();
    
    getline (cin, gs.N);
    
    gs.students.push_back (pers1);
    gs.students.push_back (pers2);
    gs.students.push_back (pers3);
    gs.students.push_back (pers4);
    gs.students.push_back (pers5);
    
    //cout << gs.students[1].age;
    
    /*for (int i = 0; i < size; i++)
     {
     cout << gs.students[i].age;
     }*/
    
    cout << "средний возраст в группе " << gs.N << ": " << gs.getage (size);
    cout << "\n";
    
    for (int i = 0; i < size; i ++)
        {
        cout << "средний балл студента " << gs.students [i].name <<" в группе " << gs.N << ": " << gs.getmark (3, gs.students [i]);
        cout << "\n";
        }
    
    }

double group::getage (int S)
    {
    double k = 0;
    
    for (int i = 0; i < S; i ++)
        {
        k += students[i].age;
        }
    
    double a = k/S;
    
    return a;
    }

double group::getmark (int S, student person)
    {
    double k = person.math + person.geom + person.prog;
    
    double a = k/S;
    
    return a;
    }





