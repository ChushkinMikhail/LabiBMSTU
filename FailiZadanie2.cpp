//
//  Faili2.cpp
//  Faili
//
//  Created by Михаил on 01.12.2023.
//

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

struct book
    {
    string Author;
    string Title;
    int Year;
    };

void saveToFile(const string& filename, const vector <book>& data)
    {
    ofstream file (filename);
    
    if (file.is_open())
        {
        for (int i = 0; i < data.size(); i++)
            {
            file << data[i].Author << " " << data[i].Title << " " << data[i].Year << " ";
            }
        file.close();
        }
    
    else {cout << "no file found"; cout <<"\n";}
    }

void loadFromFile(const string& filename, vector<book>& data1)
    {
    ifstream file (filename);
    
    if (file.is_open())
        {
        string author, title;
        int year;
            
        while (file >> author >> title >> year)
            {
            book book;
            book.Author = author;
            book.Title = title;
            book.Year = year;
            data1.push_back (book);
            }
        }
    
    else {cout << "no file found"; cout <<"\n";}
    }

int main()
    {
    book b1 = {"Kipling", "Svin", 1980};
    book b2 = {"Tolstoy", "VoinaIMir", 1000};
    book b3 = {"Gogol", "Loh", 1881};
    
    string filename = "Test.txt";
    
    vector <book> data = {b1, b2, b3};
    vector <book> data1;
    
    saveToFile (filename, data);
    loadFromFile (filename, data1);
    
    for (int i = 0; i < data1.size(); i++)
        {
        cout << data1 [i].Author << " " << data1 [i].Title << " " << data1 [i].Year << " " <<"\n";
        }

    return 0;
    }
