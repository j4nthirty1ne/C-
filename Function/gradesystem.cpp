#include <iostream>
using namespace std;

// Print Title
void printTitle();
void printDynamicsTitle(string title);

//sum 3 subject 
float sumSocore (float math, float khmer, float english);

// Student information
void studentInformation (float math, float khmer, float english)
{
    cout <<"======|Student Information|======" << endl;
    cout << "Math: " << math << endl;
    cout << "Khmer: " << khmer << endl;
    cout << "English: " << english << endl;
    cout << "----------------------------------- " << endl;

    float totalscore = sumSocore(math, khmer, english);
    cout << "Total Score: " << totalscore << endl;
    
}
int main ()
{
    system("cls");
    string studentname;
    float mathSocre;
    float khmerSccore;
    float englishScore;

    //print Title
    // printTitle();
    printDynamicsTitle("Student Score Management");
    cout << "Enter Student name";
    getline (cin, studentname);

    cout << "Enter Math Score: ";
    cin >> mathSocre;

    cout <<"Enter Khmer Score";
    cin >> khmerSccore;

    cout << "Enter English Score";
    cin >> englishScore;

    //call print information function
    studentInformation(mathSocre, khmerSccore, englishScore); 
    
    return 0;
}

void printTitle()
{
    cout <<"======|Grade System|======"<<endl;

}

void printDynamicsTitle(string title)
{
    cout <<"======|"<< title <<"|======"<<endl;
}

float sumSocore (float math, float khmer, float english)
{
    return math + khmer + english;
}