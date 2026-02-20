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

Student fun(){
    Student rakib(13, 67, 2.92);
    return rakib;
}

int main() {
    Student obj=fun();
    cout << obj.cls << " " << obj.roll << " " << obj.gpa << endl;
    return 0;
}