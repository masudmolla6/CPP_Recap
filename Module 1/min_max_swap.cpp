#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    // cout << min({2,3,5}) << endl;
    // cout << max(a,b) << endl;
    int temp=a;
    a=b;
    b=temp;
    cout << a << " " << b << endl;
    return 0;
}
