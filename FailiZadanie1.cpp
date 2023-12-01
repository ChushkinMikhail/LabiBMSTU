//
//  main.cpp
//  Faili
//
//  Created by Михаил on 01.12.2023.
//


#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

void saveToFile(const string& filename, const vector<string>& data)
    {
    ofstream file (filename);
    
    if (file.is_open())
        {
        for (const string& word : data)
            {
            file << word << " ";
            }
        file.close();
        }
    else {cout << "no file found"; cout <<"\n";}
    }

void loadFromFile(const string& filename, vector<string>& outData)
    {
    ifstream file (filename);
    
    if (file.is_open())
        {
        string word;
            
        while (file >> word)
            {
            outData.push_back(word);
            }
        file.close();
        }
    else {cout << "no file found"; cout <<"\n";}
    }

int main()
    {
    vector <string> T;
    vector <string> T1;
    T1.push_back("B");
    T1.push_back("A");
    T1.push_back("C");
    T1.push_back("D");
    
    string filename = "mytextfile.txt";
    
    saveToFile(filename, T1);
    loadFromFile(filename, T);
    
    for (int i = 0; i < T1.size(); i ++)
        {
        cout << T[i] << " ";
        }

    return 0;
    }
