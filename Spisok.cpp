//
//  main.cpp
//  List
//
//  Created by Михаил on 17.11.2023.
//

#include <iostream>

using namespace std;

struct Node
    {
    int data;
    Node* next;
    };

class List
    {
    public:
    List ();
    List (int data);
    bool addElem (int data);
    int delElem (int data);
    bool findElem (int data);
    bool insert (int data, int pos);
    void Print ();
    bool Search (int data);
    void Remove (int data);
    void Insert (int data, int pos);
    //AAList ();
    Node* first;
    Node* last;
    };

List::List ()
    {
    first = nullptr;
    last = nullptr;
    }

List::List (int data)
    {
    Node* nd = new Node {data};
    
    first = nd;
    last = nd;
    
    last->next = nullptr;
    }

bool List::addElem (int data)
    {
    Node* nd = new Node {data, nullptr};
    
    if (last == nullptr)
        {
        first = nd;
        last = nd;
            
        return true;
        }
    
    last->next = nd;
    last = nd;
    return true;
    }

void List::Print ()
    {
    Node* PP = first;
    
    while (PP)
        {
        cout << PP->data << " ";
        
        PP = PP->next;
        }
    }

bool List::Search (int data)
    {
    Node* PP = first;
    
    int i = 0;
    
    while (PP)
        {
        if (PP->data == data)
            {
            i = 1;
            }
        PP = PP->next;
        }
    if (i == 0)
        {
        return false;
        }
    else return true;
    }

void List::Remove (int data)
    {
    Node* Lol = first;
    Node* Kek = first->next;
    
    while (Kek && Kek->data != data)
        {
        Kek = Kek->next;
        Lol = Lol->next;
        }
    
    if (!Kek)
        {
        cout << "Elementa netu \n";
            
        return;
        }
    
    Lol->next = Kek->next;
    delete Kek;
    }

void List::Insert (int data, int Pos)
    {
    Node* PP = first;
    
    if (Pos == 0)
        {
        addElem (data);
        }
    
    int i = 0;
    
    while (PP)
        {
        if (i == Pos - 1)
            {
            break;
            }
            
        PP = PP->next;
        i = i + 1;
            
        //cout << i;
        }
    
    Node* PPP = new Node {data, PP->next};
    
    PP->next = PPP;
    }

int main()
    {
    List NN;
    
    NN.addElem(5);
    NN.addElem(6);
    NN.addElem(7);
    NN.addElem(10);
    NN.addElem(6);
    NN.addElem(7);
    
    NN.Print ();
    
    cout << "\n";
    
    int a = NN.Search (111);
    
    NN.Remove (10);
    
    //NN.Insert (5, 2);
    
    NN.Print ();
    
    cout << "\n";
    cout << a;
    cout << "\n";
    
    return 0;
    }
