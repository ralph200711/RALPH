#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

bool isLoggedIn() {
    string username, password;
    string un, pw;
    
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;
    
    ifstream read(username + ".txt");
    
    if(!read.is_open()) {
        return false;
    }
    
    getline(read, un);
    getline(read, pw);
    
    read.close();
    
    if(un == username && pw == password) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    int choice;
    
    cout << endl;
    cout << "Main menu: " << endl;
    cout << "----------------------------" << endl;
    cout << "1. Sign up" << endl;
    cout << "2. Login" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    
    cin >> choice;
    
    return 0;
}