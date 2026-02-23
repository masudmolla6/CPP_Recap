#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int cls;
    int roll;
    Student(string name, int cls, int roll){
        this->name=name;
        this->cls=cls;
        this->roll=roll;
    }
};

int main() {
    Student* rahim=new Student("Rahim", 12, 44);
    cout << rahim->name << " " << rahim->cls << " " << rahim->roll << endl;
    return 0;
}