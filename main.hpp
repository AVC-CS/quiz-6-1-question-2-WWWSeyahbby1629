#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int writeFile() {
    int numEmployees;
    ofstream outFile("employee.txt");

    cout << "Enter the number of Employees: ";
    cin >> numEmployees;
    cin.ignore(); 

    for (int i = 0; i < numEmployees; ++i) {
        int id;
        string name, department;
        double salary;

  
        cout << "Enter Employee " << (i + 1) << " details:" << endl;
        cout << "ID: ";
        cin >> id;
        cin.ignore(); 
        cout << "Name: ";
        getline(cin, name);
        cout << "Department: ";
        getline(cin, department);
        cout << "Salary: ";
        cin >> salary;
        cin.ignore(); 

        outFile << id << " " << name << " " << department << " " << salary << endl;
    }

    outFile.close(); 

    return numEmployees;
}

int readFile() {
    ifstream inFile("employee.txt");
    int numEmployees = 0;

    if (!inFile) {
        cout << "Error opening the file!" << endl;
        return 0;
    }

    cout << "\nEmployee Information from file:" << endl;
    string line;
    while (getline(inFile, line)) {
        stringstream ss(line);
        int id;
        string name, department;
        double salary;

        ss >> id >> name >> department >> salary;

        cout << "ID: " << id << ", Name: " << name << ", Department: " << department << ", Salary: " << salary << endl;
        numEmployees++;
    }

    inFile.close();

    return numEmployees;
}

#endif
