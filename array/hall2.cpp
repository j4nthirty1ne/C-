#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int row, col;
int hall;

void setUpHall(const int r, const int c){
    
    row = r;
    col = c;
    cout << "================================" << endl;
    cout << "              Screan            " << endl;
    cout << "================================" << endl;
    string ha[r][c];
    char k = 'A';
    for(int i=0; i<r; i++){
        stringstream z;
        z<<(i+1);
        string sub = "-";
        for(int j=0; j<c; j++,k++){
            ha[i][j] = k + sub + z.str() + ": AV";
        }
    }
    // 
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            cout<<" | "<<ha[i][j]<<" ";
        }
        cout<<" | \n";
    }
}

void bookingHall(const int r, const int c) {
    int rowChoice, columnChoice;
    string replace;
    string ha[r][c];
    
    replace = "booked";
    cout << "Choose a row (1 to " << r << "): ";
    cin >> rowChoice;
    cout << "Choose a column (1 to " << c << "): ";
    cin >> columnChoice;
   
    rowChoice--;
    columnChoice--;
    if (rowChoice < 0 || rowChoice >= r || columnChoice < 0 || columnChoice >= c) {
        cout << "Invalid row or column!" << endl;
        return;
    }

    if (ha[r][c].find("booked") ) {
        cout << "Hall is already booked!" << endl;
        return;
    }

    ha[r][c] = replace + "BO" + ha[r][c].substr(ha[r][c].find(":"));
    cout << "Booking successful!" << endl;
}


void exit ()
{
    cout << "Exiting..." << endl;
    exit(0);
}
void choice()
{
    cout <<"1/ Set up hall" << endl;
    cout <<"2/ List all hall"<< endl;
    cout <<"3/ Start Booking"<< endl;
    cout <<"0/ Exit" << endl;
    cout <<"--------------------"<< endl;
}
void ui(){
    cout<<"=================================\n";
    cout<<"           Hall Booking          \n";
    cout<<"=================================\n";
    choice();
    // 
    int ch;
    cout<<"[+] Insert option: ";cin>>ch;
    switch(ch){
        case 1:{
            int r, c;
            cout<<"Insert row: ";cin>>r;
            cout<<"Insert column: ";cin>>c;
            cout<<"Setup Hall"<<endl;
            setUpHall(r,c);
            break;
        }
        case 2:
        {
            cout<<"List all hall"<<endl;
            setUpHall(row, col);
            break;
        }
        case 3: 
        {
            cout << "Start Booking" << endl;
            bookingHall(row, col);
            break;
        }
        case 0:
        {
            cout << "System Exiting..."<<endl;
            exit(0);
        }
        default:{
            cout<<"Invalid option!"<<endl;
            break;
        }
    }
}

int main(){
    while(1){
        ui();
    }
    return 0;
}
