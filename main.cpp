#include <iostream>
#include <iomanip>
#include "src/ventaquil/crypt.h"

using namespace std;
using namespace ventaquil::crypt;

int main() {
    cout << "Modular Exponentiation" << endl << endl;

    cout << "2^611 mod 37 = 19" << endl;
    cout << "  Result: " << pow_mod(2, 611, 37) << endl;

    cout << endl;

    cout << "23^8912 mod 743 = 86" << endl;
    cout << "  Result: " << pow_mod(23, 8912, 743) << endl;

    cout << endl;

    cout << "41^9938567 mod 51 = 29" << endl;
    cout << "  Result: " << pow_mod(41, 9938567, 51) << endl;

    cout << endl << "- - - - - - - - - - - - -"
         << endl << endl << "Congruences"
         << endl << endl;

    cout << "-31 = 11 (mod 7) is True" << endl;
    cout << "  Result: " << (congruence(-31, 11, 7) ? "True" : "False") << endl;

    cout << endl;

    cout << "3 = 24 (mod 7) is True" << endl;
    cout << "  Result: " << (congruence(3, 24, 7) ? "True" : "False") << endl;

    cout << endl;

    cout << "-15 = -64 (mod 7) is True" << endl;
    cout << "  Result: " << (congruence(-15, -64, 7) ? "True" : "False") << endl;

    cout << endl;

    cout << "25 = 12 (mod 7) is False" << endl;
    cout << "  Result: " << (congruence(25, 12, 7) ? "True" : "False") << endl;

    cout << endl << "- - - - - - - - - - - - -"
         << endl << endl << "Logarithms"
         << endl << endl;

    cout << "log2(10) = 3.3219" << endl;
    cout << "  Result: " << setprecision(5) << log(10, 2) << endl;

    cout << endl;

    cout << "log13(27) = 1.28495" << endl;
    cout << "  Result: " << setprecision(6) << log(27, 13) << endl;

    cout << endl << "- - - - - - - - - - - - -"
         << endl << endl << "Greatest common divisor"
         << endl << endl;

    cout << "gcd(63, 643) = 1" << endl;
    cout << "  Result: " << gcd(63, 643) << endl;

    cout << endl;

    cout << "gcd(27, 66) = 3" << endl;
    cout << "  Result: " << gcd(27, 66) << endl;

    cout << endl;

    cout << "gcd(1529, 14039) = 139" << endl;
    cout << "  Result: " << gcd(1529, 14039) << endl;

    return 0;
}
