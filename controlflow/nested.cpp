#include <iostream>
using namespace std;

int main()
{
    system ("cls");
    bool securityallow = true;
    bool getTicket = true;
    bool getTurn = true;

    if (securityallow)
    {
        cout << "You can enter the bank!" << endl;

        if (getTicket)
        {
            cout << "You can wait for your turn!" << endl;
            if (getTurn)
            {
                cout <<"you can meet the casher!" << endl;
            }
            else 
            {
                cout << "Please wait for your turn!" << endl;
            }
            
        }
        else 
            {
                cout <<"Please get the ticket first!" << endl;
            }
    }
    else 
    {
        cout << "You can't enter the bank" << endl;
    }


    return 0;
}