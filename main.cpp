#include <iostream>
#include "main.hpp"

int main() {

    int numEmployees = writeFile();

    cout << "\nNumber of employees saved: " << numEmployees << endl;

    int numEmployeesRead = readFile();

    cout << "\nNumber of employees read from file: " << numEmployeesRead << endl;

    return 0;
}
