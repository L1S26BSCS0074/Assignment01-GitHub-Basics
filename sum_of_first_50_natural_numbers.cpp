
/*
Program Title: Sum of First 50 Natural Numbers
Name: Muaz Ahmad
Registration Number: L1S26BSCS0074
Assignment Number: 1
*/

#include <iostream>
using namespace std;

int main() {
    int n = 50;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first 50 natural numbers (loop): "
         << sum << endl;

    int formulaSum = n * (n + 1) / 2;

    cout << "Sum using formula n(n+1)/2: "
         << formulaSum << endl;

    return 0;
}
