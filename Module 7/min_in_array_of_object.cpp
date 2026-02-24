#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

int main() {
    int n;
    cin >> n;
    Student a[n];
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        getline(cin,a[i].name);
        cin >> a[i].roll >> a[i].marks;
    }

    // Student mn;
    Student mx;
    // mn.marks=INT_MAX;
    mx.marks=INT_MIN;

    // for (int i = 0; i < n; i++)
    // {
    //     if(mn.marks > a[i].marks){
    //         mn=a[i];
    //     }
    // }

    for (int i = 0; i < n; i++)
    {
        if(mx.marks < a[i].marks){
            mx=a[i];
        }
    }

    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i].name<< " " << a[i].roll << " " << a[i].marks << endl;
    // }
    // cout << mn.name << " " << mn.roll << " " << mn.marks << endl;
    cout << mx.name << " " << mx.roll << " " << mx.marks << endl;
    
    return 0;
}