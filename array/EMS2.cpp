#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu() {
    cout << "Welcome to Employee Management System" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1. Add a new employee" << endl;
    cout << "2. Update an employee's information" << endl;
    cout << "3. Delete an employee" << endl;
    cout << "4. Sort employees by salary" << endl;
    cout << "5. Display all employees" << endl;
    cout << "0. Exit" << endl;
    cout << "---------------------------------------" << endl;
    cout << "Enter your choice: ";
}

// Global Variables
int employeeID[100];
string employeeName[100];
float employeeSalary[100];

// Count number of employees
int employeeCount = 0;

// 1. Add a new employee
void addEmployee() {
    cout << "Enter new employee information" << endl;
    cout << "---------------------------------------" << endl;

    // Auto increment employee ID 
    employeeID[employeeCount] = employeeCount + 1;
    cout << "Enter Employee name: ";
    cin.ignore();
    getline(cin, employeeName[employeeCount]);
    cout << "Enter Employee salary: ";
    cin >> employeeSalary[employeeCount];
    employeeCount++;
    cout << "Employee Added Successfully!" << endl;
}

// 2. Update an employee
void updateEmployee() {
    cout << "Update employee information" << endl;
    int id;
    cout << "Enter Employee ID to update: ";
    cin >> id;
    if(id > 0 && id <= employeeCount) {
        int n = id - 1;
        cout << "Enter new Employee name: ";
        cin.ignore();
        getline(cin, employeeName[n]);
        cout << "Enter new Employee salary: ";
        cin >> employeeSalary[n];
        cout << "Employee Updated Successfully!" << endl;
    } else {
        cout << "Invalid Employee ID!" << endl;
    }
}

// 3. Delete an employee
void deleteEmployee() {
    cout << "Delete employee information" << endl;
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;
    if(id > 0 && id <= employeeCount) {
        int index = id - 1;
        for(int i = index; i < employeeCount - 1; i++) {
            employeeID[i] = employeeID[i + 1];
            employeeName[i] = employeeName[i + 1];
            employeeSalary[i] = employeeSalary[i + 1];
        }
        employeeCount--;
        cout << "Employee Deleted Successfully!" << endl;
    } else {
        cout << "Invalid Employee ID!" << endl;
    }
}

// 4. Sort employees by salary
void sortEmployeesBySalary() {
    cout << "Sort Employees by Salary" << endl;
    for(int i = 0; i < employeeCount - 1; i++) {
        for(int j = i + 1; j < employeeCount; j++) {
            if(employeeSalary[i] > employeeSalary[j]) {
                swap(employeeID[i], employeeID[j]);
                swap(employeeName[i], employeeName[j]);
                swap(employeeSalary[i], employeeSalary[j]);
            }
        }
    }
    cout << "Employees Sorted by Salary!" << endl;
}

// 5. Display all employees
void displayEmployees() {
    cout << "|All Employees|" << endl;
    cout << "---------------------------------------" << endl;
    cout << setw(5) << left << "ID" << setw(20) << left << "Name" << setw(10) << left << "Salary" << endl;
    cout << "---------------------------------------" << endl;
    for(int i = 0; i < employeeCount; i++) {
        cout << setw(5) << left << employeeID[i] << setw(20) << left << employeeName[i] << setw(10) << left << employeeSalary[i] << endl;
    }
    cout << "---------------------------------------" << endl;
}

int main() {
    int option;
    do {
        displayMenu();
        cin >> option;
        switch(option) {
            case 1:
                addEmployee();
                break;
            case 2:
                updateEmployee();
                break;
            case 3:
                deleteEmployee();
                break;
            case 4:
                sortEmployeesBySalary();
                break;
            case 5:
                displayEmployees();
                break;
            case 0:
                cout << "Exiting the program..." << endl;
                break;
            default:
                cout << "Invalid option! Please try again." << endl;
        }
    } while(option != 0);

    return 0;
}
