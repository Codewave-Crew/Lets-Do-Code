#include <iostream>
using namespace std;

// prints series + sum
void fib (int n) {   // n -> number of fibonacci numbers 
    int a = 0, b = 1, c, sum = a + b;
    cout << "Fibonacci Series : ";
    if (n <= 1) {   // if no. of digits required is 1 or less
        cout << a << endl;
        cout << "Sum = " << a;
        return; 
    }  
    if (n == 2) {   // if no. of digits required are 2
        cout << a << ", " << b << endl;
        cout << "Sum = " << a + b;
        return;
    }
    // if more than 2 elements required
    cout << a << ", " << b << ", ";
    for (int i = 3; i < n; i++) {   // till 2nd last
        c = a + b;
        a = b;
        b = c;
        sum += c;
        cout << c << ", ";
    }
    c = a + b;  // printed last element seperately just for decoration ('.' at the end)
    sum += c;
    cout << c << "." << endl;
    cout << "Sum = " << sum << endl;
}

int main () {
    cout << "Enter the number of Fibonacci elements you want -> ";
    int n; cin >> n;
    fib(n);
    return 0;
}
