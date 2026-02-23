#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;

    Student(string name){
        this->name=name;
    }

    void myName(){
        cout << "My Name is " << name << endl; 
    }
};

int main() {
    Student Masud("Masud Rana");
    Masud.myName();
    return 0;
}