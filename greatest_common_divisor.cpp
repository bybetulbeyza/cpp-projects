#include <iostream>
using namespace std;

int greatestcommondivisor(int m, int n) {
    int r;

    if (n == 0)
        return m;

    while (n != 0) {
        r = m % n; //Euclid’s algorithm for computing gcd
        m = n;
        n = r;
    }

    return m;
}

int main() {
    int n;
    int m;
    int a;

    cout << "Enter the numbers you want to find GCD" << endl;
    cin >> n >> m;

    if (m == 0 && n == 0)
        cout << "Both numbers cannot be zero." << endl;
    else {
        a = greatestcommondivisor(n, m);
        cout << "GCD is : " << a << endl;
    }
    return 0;
}