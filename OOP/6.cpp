#include <iostream>
#include <string>

using namespace std;

class User {
public:
    int id;
    string name;
    string email;
    string password;
    string profile;
    bool isDeleted;
    bool isVerified;

    User(int id = 0, string name = "", string email = "", string password = "", string profile = "", bool isDeleted = false, bool isVerified = false)
        : id(id), name(name), email(email), password(password), profile(profile), isDeleted(isDeleted), isVerified(isVerified) {}
};

User users[10];

void addUser(int index, int id, string name, string email, string password, string profile, bool isDeleted = false, bool isVerified = false) {
    if (index >= 0 && index < 10) {
        users[index] = User(id, name, email, password, profile, isDeleted, isVerified);
    } else {
        cout << "Index out of bounds." << endl;
    }
}


User* findUserById(int id) {
    for (int i = 0; i < 10; ++i) {
        if (users[i].id == id && !users[i].isDeleted) {
            return &users[i];
        }
    }
    return nullptr;
}

void deleteUserById(int id) {
    for (int i = 0; i < 10; ++i) {
        if (users[i].id == id) {
            users[i].isDeleted = true;
            break;
        }
    }
}

int main() {
    addUser(0, 1, "Jan", "jan@example.com", "password123", "User profile 1");
    addUser(1, 2, "Jing", "jing@example.com", "password456", "User profile 2");

    User* user = findUserById(1);
    if (user != nullptr) {
        cout << "Found user: " << user->name << endl;
    } else {
        cout << "User not found." << endl;
    }

    deleteUserById(1);

    user = findUserById(1);
    if (user != nullptr) {
        cout << "Found user: " << user->name << endl;
    } else {
        cout << "User not found (deleted)." << endl;
    }

    return 0;
}
