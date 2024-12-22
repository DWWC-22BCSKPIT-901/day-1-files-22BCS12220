#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    float salary;

public:
    void inputBasicDetails() {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
        cin.ignore();
    }

    void displayBasicDetails() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    void inputManagerDetails() {
        inputBasicDetails();
        cout << "Enter Team Size: ";
        cin >> teamSize;
        cin.ignore();
    }

    void displayManagerDetails() {
        displayBasicDetails();
        cout << "Team Size: " << teamSize << endl;
    }
};

class Engineer : public Employee {
private:
    string specialization;

public:
    void inputEngineerDetails() {
        inputBasicDetails();
        cout << "Enter Specialization: ";
        getline(cin, specialization);
    }

    void displayEngineerDetails() {
        displayBasicDetails();
        cout << "Specialization: " << specialization << endl;
    }
};

int main() {
    Manager m;
    Engineer e;

    cout << "Enter Manager Details:" << endl;
    m.inputManagerDetails();

    cout << "\nEnter Engineer Details:" << endl;
    e.inputEngineerDetails();

    cout << "\nManager Details:" << endl;
    m.displayManagerDetails();

    cout << "\nEngineer Details:" << endl;
    e.displayEngineerDetails();

    return 0;
}