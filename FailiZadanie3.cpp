//
//  Faili2.cpp
//  Faili
//
//  Created by Михаил on 01.12.2023.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <map>

using namespace std;

enum Score
    {
    Unsatisfactorily = 2,
    Satisfactorily,
    Good,
    Excellent
    };

struct Student
    {
    string Name;
    int Year;
    map <std::string, Score> RecordBook;
    };

using Groups = map <std::string, vector<Student>>;

void saveToFile(const string& filename, const Groups& groups)
    {
    ofstream file(filename);
    
    if (file.is_open())
        {
        for (const auto& group : groups)
            {
            file << group.first << endl;
            for (const auto& student : group.second)
                {
                file << student.Name << " " << student.Year << endl;
                for (const auto& record : student.RecordBook)
                    {
                    file << record.first << " " << record.second << endl;
                    }
                }
            }
        file.close();
        }
    else {cout << "no file found"; cout <<"\n";}
    }

void loadFromFile(const string& filename, Groups& outGroups)
    {
    ifstream file(filename);
    
    if (file.is_open())
        {
        string groupName;
        while (getline(file, groupName))
            {
            vector <Student> students;
            string studentName;
            int studentYear;
                
            while (file >> studentName >> studentYear)
                {
                Student student;
                student.Name = studentName;
                student.Year = studentYear;

                string subject;
                int score;
                while (file >> subject >> score)
                    {
                    student.RecordBook[subject] = static_cast <Score> (score);
                    }

                students.push_back(student);
                }

            outGroups[groupName] = students;
            }
            file.close();
        }
    else {cout << "no file found"; cout <<"\n";}
    }


int main ()
    {
    Groups group1;
    Groups group2;
    
    vector <Student> groups1;
    vector <Student> groups2;
    
    Student student1;
    
    student1.Name = "Vasya";
    student1.Year = 13;
    student1.RecordBook ["Maths"] = Good;
    student1.RecordBook ["Geom"] = Satisfactorily;
    
    Student student2;
    
    student1.Name = "Petya";
    student1.Year = 11;
    student1.RecordBook ["Maths"] = Excellent;
    student1.RecordBook ["Geom"] = Unsatisfactorily;
    
    groups1.push_back(student1);
    groups1.push_back(student2);
    
    group1 ["IU8"] = groups1;
    
    string filename = "test.txt";
    saveToFile(filename, group1);
    loadFromFile(filename, group2);
    
    for (const auto& group : group2)
        {
        cout << "Group: " << group.first << "\n";
            
        for (const auto& student : group.second)
            {
            cout << "Name: " << student.Name << student.Year << "\n";
                
            for (const auto& record : student.RecordBook)
                {
                cout << "Subject: " << record.first << ", Score: " << record.second << "\n";
                }
            }
        }
    return 0;
    }
