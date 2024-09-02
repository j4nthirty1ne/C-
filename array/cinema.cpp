#include <iostream>
#include <sstream>
using namespace std;

int row, column;
string **hall;

void choice(){
    cout << "1/ Set up hall\n";
    cout << "2/ View hall\n";
    cout << "3/ Start Booking\n";
    cout << "--------------------\n";
}

void setUpHall(const int r, const int c){
    row = r;
    column = c;
    hall = new string*[r];
    for(int i = 0; i < r; ++i){
        hall[i] = new string[c];
    }
    char k = 'A';
    for(int i = 0; i < r; i++){
        stringstream z;
        z << (i+1);
        string sub = "-";
        for(int j = 0; j < c; j++, k++){
            hall[i][j] = k + sub + z.str() + ": AV";
        }
    }
}

void viewHall() {
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            cout << " | " << hall[i][j] << " ";
        }
        cout << " | \n";
    }
}

void bookingHall(const int r, const int c){
    int rowChoice, columnChoice;
    cout << "Choose a row: "; 
    cin >> rowChoice;
    cout << "Choose a column: "; 
    cin >> columnChoice;

    if (rowChoice <= 0 || rowChoice > r || columnChoice <= 0 || columnChoice > c) {
        cout << "Invalid row or column!" << endl;
        return;
    }

    string& selectedSeat = hall[rowChoice-1][columnChoice-1];
    if (selectedSeat.find("AV") != string::npos) {
        selectedSeat.replace(selectedSeat.find("AV"), 2, "BO");
        cout << "Booking successful!" << endl;
    } else {
        cout << "This cell is already booked!" << endl;
    }
}

void ui(){
    cout << "=================================\n";
    cout << "           Hall Booking          \n";
    cout << "=================================\n";
    choice();
    // 
    int ch;
    cout << "[+] Insert option: ";
    cin >> ch;
    switch(ch){
        case 1: {
            int r, c;
            cout << "Insert row: "; 
            cin >> r;
            cout << "Insert column: "; 
            cin >> c;
            cout << "Setup Hall" << endl;
            setUpHall(r, c);
            break;
        }
        case 2: {
            cout << "List all hall" << endl;
            listHall();
            break;
        }
        case 3: {
            cout << "Start Booking" << endl;
            bookingHall(row, column);
            break;
        }
        default: {
            cout << "Invalid option!" << endl;
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
