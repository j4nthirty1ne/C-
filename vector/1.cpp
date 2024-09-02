#include<iostream>
#include<vector>

using namespace std;
int main ()
{
    system ("cls");
    vector<string> Month = { "Jan", "Feb", "Mar", "Apr", "May", };
    for (int i = 0; i < Month.size(); i++)
    {
        cout << Month[i] << " ";
    }
    Month.push_back("ect.");
    Month.insert(Month.begin(), "Month:");
    cout << "\nAfter adding " << Month.size() <<endl;
    for (int i = 0; i < Month.size(); i++)
    {
        cout << Month[i] << " ";
    }

    
        
    return 0;
}