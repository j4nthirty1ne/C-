#include <iostream>
using namespace std;

// Function prototypes
void printDynamicTitle(string title);
float sumScore(float math, float khmer, float english);

float calculateAvg(float totalScore) {
    return totalScore / 3;
}

void printGrade(float avgScore) {
    if (avgScore >= 90 && avgScore <= 100) {
        cout << "Grade A" << endl;
    } else if (avgScore >= 80 && avgScore <= 89) {
        cout << "Grade B" << endl;
    } else if (avgScore >= 70 && avgScore <= 79) {
        cout << "Grade C" << endl;
    } else {
        cout << "You Failed!" << endl;
    }
}

void studentInfo(float math, float khmer, float english) {
    cout << "=======| Student Information |======" << endl;
    cout << "Math: " << math << endl;
    cout << "Khmer: " << khmer << endl;
    cout << "English: " << english << endl;
    cout << "------------------------------------" << endl;
    float totalScore = sumScore(math, khmer, english);
    cout << "Total Score: " << totalScore << endl;
    float avgScore = calculateAvg(totalScore);
    cout << "Average score: " << avgScore << endl;
    printGrade(avgScore);
}

int main() {
    system("cls");
    system("color D"); 
    float math;
    float khmer;
    float english;
    string studentName;
    
    printDynamicTitle("Student Score Management");
    
    cout << "Enter student name: ";
    getline(cin, studentName);
    
    cout << "Enter math score: ";
    cin >> math;

    cout << "Enter khmer score: ";
    cin >> khmer;

    cout << "Enter english score: ";
    cin >> english;

    studentInfo(math, khmer, english);

    return 0;
}

void printTitle() {
    cout << "======| Grade System |======" << endl;
}

void printDynamicTitle(string title) {
    cout << "======| " << title << " |======" << endl;
}

float sumScore(float math, float khmer, float english) {
    return math + khmer + english;
}
