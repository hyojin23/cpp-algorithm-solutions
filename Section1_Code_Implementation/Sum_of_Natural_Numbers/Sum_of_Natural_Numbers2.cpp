#include <iostream>
using namespace std;
// My solution
int main() {
    int a, b, sum = 0;
    cin>>a>>b;
    for (; a <= b; a++) {
        sum += a;
        cout<<a;
        if (a < b) {
            cout<<" + ";
        } else {
            cout<<" = "<<sum;
        }
    }
    return 0;
}

