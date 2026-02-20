#include <bits/stdc++.h>
using namespace std;
class Student{
   public:
   int cls;
   int roll;
   double gpa;
   Student(int cls, int roll, double gpa){
    this->cls=cls;
    this->roll=roll;
    this->gpa=gpa;
   }
};
int main() {
    Student rakib(13, 67, 2.92);
    cout << rakib.cls << " " << rakib.roll << " " << rakib.gpa << endl;
    return 0;
}