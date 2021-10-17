#include <iostream>
using namespace std;

int main()
{    
    int a,b,q,r;

    cout << "Enter dividend: ";
    cin >> a;

    cout << "Enter divisor: ";
    cin >> b;

    q = a/ b;
    r = a % b;

    cout << "Quotient = " << q << endl;
    cout << "Remainder = " << r;

    return 0;
}
