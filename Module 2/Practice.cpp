#include <bits/stdc++.h>
using namespace std;

int *p=new int;
void fun(){
    int* x=new int;
    cin >> *x;
    p=x;
    cout << "Fun->" << *p << endl;
    return;
}

int main() {
    fun();
    cout << "Main ->" << *p << endl;
    return 0;
}