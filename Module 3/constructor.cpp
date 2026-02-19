#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        int cls;
        int roll;
        double gpa;
    Student(int c, int r, double g){
        cls=c;
        roll=r;
        gpa=g;
    }
};

int main() {
    Student masud(2,34,5.678);
    cout << masud.cls << " " << masud.roll << " " << masud.gpa << endl;
    return 0;
}