#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    char name[100];
    int roll;
    double gpa;
};

int main() {
    Student masud,sakib;
    cin.getline(masud.name,100);
    cin >> masud.roll >> masud.gpa;

    cin.ignore();

    cin.getline(sakib.name,100);
    cin >> sakib.roll >> sakib.gpa;

    cout << masud.name << " " << masud.roll << " " << masud.gpa << endl;
    cout << sakib.name << " " << sakib.roll << " " << sakib.gpa << endl;

    return 0;
}