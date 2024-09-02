#include <iostream>
#include <vector>


using namespace std;

class User 
{
    public:
        int id;
        string name;
        string email;
        string password;
        string profile;
        bool isDeleted;
        bool isVerified;
        User (int id, string name, string email, string password, string profile, bool isDeleted = false, bool isVerified = false) 
            : id(id), name(name), email(email), password(password), profile(profile), isDeleted(isDeleted), isVerified(isVerified) {}
};

vector<User> users;

User* findUserById(int id) 
{
    for (auto& user : users) 
    {
        if (user.id == id && !user.isDeleted) 
        {
            return &user;
        }
    }
    return nullptr;
}

void deleteUserById(int id) 
{
    for (auto& user : users) 
    {
        if (user.id == id) 
        {
            user.isDeleted = true;
            break;
        }
    }
}

int main() {

    User* user = findUserById(1);
    if (user != nullptr) 
    {
        cout << "Found user: " << user->name << endl;
    } 
    else 
    {
        cout << "User not found." << endl;
    }

    deleteUserById(1);

    user = findUserById(1);
    if (user != nullptr) 
    {
        cout << "Found user: " << user->name << endl;
    } 
    else 
    {
        cout << "User not found (deleted)." << endl;
    }

    return 0;
}
