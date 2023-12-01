//
//  main.cpp
//  DvuSpisok
//
//  Created by Михаил on 24.11.2023.
//

#include <iostream>

using namespace std;

struct Node
    {
    int data;
    Node* next;
    Node* prev;
    };

class List
    {
    public:
    List ();
    List (int data);
    bool addElem (int data);
    void Print ();
    void ReversePrint ();
    void Remove (int data);
    void Insert (int data, int Pos);
    void Swap (int data1, int data2);
    void Sort ();
    Node* Search (int data);
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
    Node* nd = new Node {data, nullptr, nullptr};
    
    if (last == nullptr)
        {
        first = nd;
        last = nd;
            
        return true;
        }
    
    nd->prev = last;
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

void List::ReversePrint ()
    {
    Node* PP = last;
    
    while (PP)
        {
        cout << PP->data << " ";
        
        PP = PP->prev;
        }
    }

void List::Remove (int data)
    {
    Node* Lol = last;
    Node* Kek = last->prev;
    
    while (Kek && Kek->data != data)
        {
        Kek = Kek->prev;
        Lol = Lol->prev;
        }
    
    if (!Kek)
        {
        cout << "Elementa netu \n";
            
        return;
        }
    
    Lol->prev = Kek->prev;
    Kek->prev->next = Lol;
    delete Kek;
    }

void List::Insert (int data, int Pos)
    {
    Node* PP = first;
    
    if (Pos == 0)
        {
        addElem (data);
            
        return;
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
    
    Node* PPP = new Node {data, PP->next, PP};
    
    if (PP->next != nullptr)
        {
        PP->next->prev = PPP;
        }
    
    PP->next = PPP;

    
    //PP->next->prev = PP->prev;*/
    
    //cout << PP->prev->data;
    }

void List::Swap (int data1, int data2)
    {
    Node*Tm1 = Search (data1);
    Node*Tm2 = Search (data2);
    
    /*Node* PP1 = first;
    Node* PP2 = first->next;
    
    while (PP1)
        {
        if (PP1 == Tm1)
            {
            break;
            }
        PP1 = PP1->next;
        }
    
    while (PP2)
        {
        if (PP2 == Tm2)
            {
            break;
            }
        PP2 = PP2->next;
        }*/
    
    if (Tm1->prev == nullptr || Tm2->next == nullptr)
        {
        Tm1->next->prev = Tm2;
        Tm2->prev->next = Tm1;
        Tm2->next = Tm1->next;
        Tm1->prev = Tm2->prev;
        Tm2->next->prev = first;
        Tm1->prev->next = last;
        return;
        }
    
    if (Tm1->next == Tm2)
        {
        Tm1->next = Tm2->next;
        Tm2->prev = Tm1->prev;
        Tm1->prev = Tm2;
        Tm2->next = Tm1;
        Tm1->next->prev = Tm1;
        Tm2->prev->next = Tm2;
        Tm1 = Tm1->prev;
        Tm2 = Tm1->next;
            
        return;
        }
    
    Node* T1 = Tm2->next;
    Node* T2 = Tm2->prev;
    Node* T3= Tm1->next;
    Node* T4 = Tm1->prev;


    Tm2->next = T3;
    Tm2->prev = T4;
    Tm1->next = T1;
    Tm1->prev = T2;
    Tm1->next->prev = Tm1;
    Tm2->prev->next = Tm2;
    Tm1->prev->next = Tm1;
    Tm2->next->prev = Tm2;
    }

void List::Sort ()
    {
    Node* nd = new Node;
    Node* nd2 = first;
    Node* nd3 = first->next;
    while (nd2->next)
        {
        while (nd3 != nullptr)
            {
            if ((nd2->data) > (nd3->data))
                {
                nd->data = nd2->data;
                nd2->data = nd3->data;
                nd3->data = nd->data;
                }
            nd3 = nd3->next;
            }
        nd2 = nd2->next;
        nd3 = nd2->next;
        }
    return;
    }

Node* List::Search (int data)
    {
    Node* PP = first;
    
    while (PP)
        {
        if (PP->data == data)
            {
            return PP;
            }
            
        PP = PP->next;
        }
    return nullptr;
    }
    
int main()
    {
    List NN;
    
    NN.addElem(6);
    NN.addElem(5);
    NN.addElem(3);
    NN.addElem(4);
    NN.addElem(2);
    NN.addElem(1);
    
    //NN.Remove (3);
    
    //NN.Insert (1, 0);
    
    //NN.Swap (1, 6);
    
    NN.Sort ();
    
    NN.Print ();
    
    cout << "\n";
    
    NN.ReversePrint ();
    
    //NN.Remove (10);
    
    return 0;
    }
