#include <bits/stdc++.h>
using namespace std;

int* fun(){
    int* a=new int[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << &a[i] << " ";
    }
    cout << endl;
    return a;
}

int main() {
    int* x=fun();
    // int* b=new int[7];
    // for (int i = 0; i < 5; i++)
    // {
    //     b[i]=x[i];
    // }
    // delete[] x;
    // b[5]=90;
    // b[6]=578;

    // for (int i = 0; i < 7; i++)
    // {
    //     cout << b[i] << " ";
    // }
    for (int i = 0; i < 5; i++)
    {
        cout << &x[i] << " ";
    }
    

    return 0;
}