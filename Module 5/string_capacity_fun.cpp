#include <bits/stdc++.h>
using namespace std;

int main() {
    string s="Hello World";
    // cout << s.size() << endl;
    // cout << s.max_size() << endl;
    // s.clear();
    // cout << s.size() << endl;
    // if(s.empty()==true){
    //     cout << "Empty" << endl;
    // }
    // else{
    //     cout << "Not Emplty" << endl;
    // }

    s.resize(14, 'x');
    cout << s << endl;

    return 0;
}
