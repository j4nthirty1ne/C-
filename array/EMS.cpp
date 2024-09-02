#include <iostream>
#include <iomanip>

using namespace std;

void displayMenu()
{
    cout << "Welcome to Employee Management System" << endl;
    cout << "---------------------------------------" << endl;
    cout << "1. Add a new employee" << endl;
    cout << "2. Update an employee's information" << endl;
    cout << "3. Delete an employee" << endl;
    cout << "4. Search for an employee by ID" << endl;
    cout << "5. Search for an employee by Name" << endl;
    cout << "6. Sort employees by name" << endl;
    cout << "7. Sort employees by salary" << endl;
    cout << "8. Display all employees" << endl;
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
void addEmployee()
{
    system ("cls");
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
void updateEmployee()
{
    system ("cls");
    cout << "Update employee information" << endl;
    int id;
    cout << "Enter Employee ID to update: ";
    cin >> id;
    if(id > 0 && id <= employeeCount)
    {
        int n = id - 1;
        cout << "Enter new Employee name: ";
        cin.ignore();
        getline(cin, employeeName[n]);
        cout << "Enter new Employee salary: ";
        cin >> employeeSalary[n];
        cout << "Employee Updated Successfully!" << endl;
    }
    else
    {
        cout << "Invalid Employee ID!" << endl;
    }
}

// 3. Delete an employee
void deleteEmployee()
{
    system ("cls");
    cout << "Delete employee information" << endl;
    int id;
    cout << "Enter Employee ID to delete: ";
    cin >> id;
    int n = sizeof(employeeID)/sizeof(employeeID[0]);
    for (int i = 0; i < n; i++)
    {
        if (id == employeeID[i])
        {
            for (int j = i; j < n-1; j++)
            {
            employeeID[j] = value[j+1];
            }
            n--;
            i--;
        }
        
    }
}


// // 4. Search for an employee by ID
// void searchEmployeeByID()
// {
//     system ("cls");
//     cout << "|Search Employee by ID|" << endl;
//     int id;
//     cout << "Enter Employee ID: ";
//     cin >> id;
//     if(id > 0 && id <= employeeCount)
//     {
//         int n = id - 1;
//         cout << "Employee Found!" << endl;
//         cout << "ID: " << employeeID[n] << ", Name: " << employeeName[n] << ", Salary: " << employeeSalary[n] << endl;
//     }
//     else
//     {
//         cout << "Employee Not Found!" << endl;
//     }
// }

// // 5. Search for an employee by Name
// void searchEmployeeByName()
// {
//     system ("cls");
//     cout << "|Search Employee by Name|" << endl;
//     string name;
//     cout << "Enter Employee Name: ";
//     cin.ignore();
//     getline(cin, name);
//     bool found = false;
//     for(int i = 0; i < employeeCount; i++)
//     {
//         if(employeeName[i] == name)
//         {
//             cout << "Employee Found!" << endl;
//             cout << "ID: " << employeeID[i] << ", Name: " << employeeName[i] << ", Salary: " << employeeSalary[i] << endl;
//             found = true;
//             break;
//         }
//     }
//     if(!found)
//     {
//         cout << "Employee Not Found!" << endl;
//     }
// }

// 6. Sort employees by name
void sortEmployeesByName()
{
    system ("cls");
    cout << "|Sort Employees by Name|" << endl;
    for(int i = 0; i < employeeCount - 1; i++)
    {
        for(int j = i + 1; j < employeeCount; j++)
        {
            if(employeeName[i] > employeeName[j])
            {
                swap(employeeID[i], employeeID[j]);
                swap(employeeName[i], employeeName[j]);
                swap(employeeSalary[i], employeeSalary[j]);
            }
        }
    }
    cout << "Employees Sorted by Name!" << endl;
}

// 7. Sort employees by salary
void sortEmployeesBySalary()
{
    system ("cls");
    cout << "Sort Employees by Salary" << endl;
    for(int i = 0; i < employeeCount - 1; i++)
    {
        for(int j = i + 1; j < employeeCount; j++)
        {
            if(employeeSalary[i] > employeeSalary[j])
            {
                swap(employeeID[i], employeeID[j]);
                swap(employeeName[i], employeeName[j]);
                swap(employeeSalary[i], employeeSalary[j]);
            }
        }
    }
    cout << "Employees Sorted by Salary!" << endl;
}

// 8. Display all employees
void displayEmployee()
{
    system ("cls");
    cout << "|All Employees|" << endl;
    cout << "---------------------------------------" << endl;
    cout << setw(5) << "ID" << setw(20) << "Name" << setw(10) << "Salary" << endl;
    cout << "---------------------------------------" << endl;
    for(int i = 0; i < employeeCount; i++)
    {
        cout << setw(5) << employeeID[i] << setw(20) << employeeName[i] << setw(10) << employeeSalary[i] << endl;
    }
    cout << "---------------------------------------" << endl;
}

int main()
{
    system ("cls");
    int option;
    do
    {
        displayMenu();
        cin >> option;
        switch(option)
        {
            case 1:
                addEmployee();
                break;
            case 2:
                updateEmployee();
                break;
            case 3:
                deleteEmployee();
                break;
            // case 4:
            //     searchEmployeeByID();
            //     break;
            // case 5:
            //     searchEmployeeByName();
            //     break;
            case 6:
                sortEmployeesByName();
                break;
            case 7:
                sortEmployeesBySalary();
                break;
            case 8:
                displayEmployee();
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
