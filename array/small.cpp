#include <iostream>

using namespace std;
int main ()
{
    system ("cls");
    int nubmerStudents;
    cout << "Enter the number of students: ";
    cin >> nubmerStudents;

    string nameList[nubmerStudents];
    float averageScore [nubmerStudents];

    for(int i = 0; i < nubmerStudents; i++)
    {
        cout << "Enter the name of student " << i + 1 << ": ";
        cin >> nameList[i];
        cout << "Enter the average score of student " << i + 1 << ": ";
        cin >> averageScore[i];
    }
    for (int i = 0; i < nubmerStudents; i++)
    {
        cout << "Student Name: " << nameList[i] << endl;
        cout << "Average Score: " << averageScore[i] << endl;
        cout << "----------------------------------------" << endl;
    }
    return 0;
}