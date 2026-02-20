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

Student* fun(){
    Student* karim=new Student(12,67,2.97);
    // Student karim(12, 67, 2.98);
    // Student* p=&karim;
    return karim;
}

int main() {
    Student* obj=fun();
    cout << obj->cls << " " << obj->roll << " " << obj->gpa << endl;
    return 0;
}
