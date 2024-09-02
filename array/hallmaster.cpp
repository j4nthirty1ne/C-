
#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<algorithm>

#include <iomanip> // For std::put_time
#include <chrono>  // For std::chrono functions
#include <ctime>   // For std::time_t and std::localtime

using namespace std;
int row , col;
string **h;

string* split(const std::string &s, char delimiter, int &size) {
    // First, split the string into a vector
    std::vector<std::string> tokens;
    std::string token;
    size_t start = 0, end = 0;
    while ((end = s.find(delimiter, start)) != std::string::npos) {
        token = s.substr(start, end - start);
        tokens.push_back(token);
        start = end + 1;
    }
    tokens.push_back(s.substr(start)); // Add the last token

    // Allocate memory for the result array
    size = tokens.size();
    std::string* result = new std::string[size];

    // Copy tokens from vector to the array
    for (int i = 0; i < size; i++) {
        result[i] = tokens[i];
    }

    return result;
}
string repeat(const string &data, int count) {
    string result;
    for (int i = 0; i < count; i++) {
        result += data;
    }
    return result;
}

string** hall(const int r, const int c){
    row = r;
    col = c;
    string** ha = new string*[r];
    for (int i = 0; i < r;i++) {
        ha[i] = new std::string[c];
    }
    char prefix = 'A';
    for(int i = 0; i <r; i++){
        for (int j = 0; j < c; j++){
            string dork = "-";
            stringstream lek;
            lek<<(i+1); // convert to string
            ha[i][j] = prefix + dork + lek.str()+ ": AV";
            prefix++;
        }
    }
    // print
    return ha;
}

void choice(){
    cout<<"1/ Set up hall"<<endl;
    cout<<"2/ List all halls"<<endl;
    cout<<"3/ Start Booking"<<endl;
    cout<<"0-99/ Exit"<<endl;
}

void showHall(string ** ha){
    cout<<"----------------\n";
    for(int i = 0; i < row; i++){
        for (int j = 0; j < col; j++){
            cout<<" | "<<h[i][j];
        }
        cout<<" | "<<endl;
    }
}

bool compareIgnoreCase(string a, string b){
    transform(a.begin(),a.end(),a.begin(),::tolower);
    transform(b.begin(),b.end(),b.begin(),::tolower);
    return a == b;
}

string getTime(){
    auto now = std::chrono::system_clock::now();
    
    // Convert to std::time_t for use with std::localtime
    std::time_t currentTime = std::chrono::system_clock::to_time_t(now);
    
    // Convert to local time
    std::tm* localTime = std::localtime(&currentTime);
    
    // Print formatted date and time
    // std::cout << "Current date and time: " 
    //           << std::put_time(localTime, "%Y-%m-%d %H:%M:%S") 
    //           << std::endl;
    ostringstream time ;
    time << put_time(localTime, "%Y-%m-%d %H:%M:%S") ;
    return time.str();
}


void response(const int a){
    switch(a){
        case 1:{
            cout<<"===> Set up hall <==="<<endl;
            int r, c;
            cout<<"[+] Enter number of rows: ";
            cin>>r;
            cout<<"[+] Enter number of columns: ";
            cin>>c;
            cout<<repeat("-",50)<<endl;
            cout<<"[!] Set up hall"<<endl;
            h = hall(r,c) ;
            showHall(h);
            break;
        }
        case 2: {
            cout<<"[!] List all halls"<<endl;
            showHall(h);
            break;
        }
        case 3:{
            cout<<"===> Booking <==="<<endl;
            showHall(h);
            cout<<repeat("-",50)<<endl;
            cout<<"[+] Enter hall name (A-1 or b-1, ..): ";
            string opt;
            cin>>opt;
// 
            bool isSucess = false;
            for (int i=0; i<row;i++) {
                for(int j =0;j<col;j++) {
                    size_t pos = h[i][j].find(":");
                    string data  =  h[i][j].substr(0,pos);
                    if(compareIgnoreCase(opt,data)) {
                        cout<<"[!] Booking successful on hall: "<<data<<":)"<<endl;
                        cout<<"[+] Booked Date: " << getTime()<<endl;
                        h[i][j] = data + ": BO";
                        isSucess = true;
                        break;
                    }
                }
            }
            if (isSucess==false){
                cout<<"[!] Hall not found."<<endl;
                cout<<"[!] Booking Failed :("<<endl;
            }
            cin.ignore();
            break;
        }
        case 0: {
            cout<<"[*] System Closed :)."<<endl;
            exit(1);
        }
        default:
            cout<<"Invalid option."<<endl;
    }
}

void ui(){
    cout<<repeat("=",50)<<endl;
    cout<<"              Hall Booking System            "<<endl;
    cout<<repeat("-",50)<<endl;
    choice();
    cout<<repeat("-",30)<<endl;
    int ch;
    cout<<"[+] Insert option: ";
    cin>>ch;
    response(ch);
    cin.ignore();
    cout<<repeat("=",50)<<endl;
}


int main() {
    while(1){
        ui();
        
    }
    return 0;
}
