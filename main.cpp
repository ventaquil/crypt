#include <iostream>
#include <iomanip>
#include "src/ventaquil/crypt.h"

using namespace std;
using namespace ventaquil::crypt::tools;

void congruences(void);
void greatestCommonDivisor(void);
void jacobiSymbol(void);
void leastCommonMultiple(void);
void logarithms(void);
void modularExponentiation(void);
void separator(void);

int main(void) {
    modularExponentiation();

    separator();

    congruences();

    separator();

    logarithms();

    separator();

    greatestCommonDivisor();

    separator();

    leastCommonMultiple();

    separator();

    jacobiSymbol();

    return 0;
}

void congruences(void) {
    cout << "Congruences"
         << endl << endl;

    cout << "-31 = 11 (mod 7) is True"
         << endl;
    cout << "  Result: " << (congruence(-31, 11, 7) ? "True" : "False")
         << endl;

    cout << endl;

    cout << "3 = 24 (mod 7) is True"
         << endl;
    cout << "  Result: " << (congruence(3, 24, 7) ? "True" : "False")
         << endl;

    cout << endl;

    cout << "-15 = -64 (mod 7) is True"
         << endl;
    cout << "  Result: " << (congruence(-15, -64, 7) ? "True" : "False")
         << endl;

    cout << endl;

    cout << "25 = 12 (mod 7) is False"
         << endl;
    cout << "  Result: " << (congruence(25, 12, 7) ? "True" : "False")
         << endl;

}

void greatestCommonDivisor(void) {
    cout << "Greatest Common Divisor (GCD)"
         << endl << endl;

    cout << "gcd(63, 643) = 1"
         << endl;
    cout << "  Result: " << gcd(63, 643)
         << endl;

    cout << endl;

    cout << "gcd(27, 66) = 3"
         << endl;
    cout << "  Result: " << gcd(27, 66)
         << endl;

    cout << endl;

    cout << "gcd(1529, 14039) = 139"
         << endl;
    cout << "  Result: " << gcd(1529, 14039)
         << endl;
}

void jacobiSymbol(void) {
    cout << "Jacobi Symbol"
         << endl << endl;

    cout << "jacobi(5, 11) = 1"
         << endl;
    cout << "  Result: " << symbols::jacobi(5, 11)
         << endl;

    cout << endl;

    cout << "jacobi(87, 5561) = -1"
         << endl;
    cout << "  Result: " << symbols::jacobi(87, 5561)
         << endl;

    cout << endl;

    cout << "jacobi(294, 9122) = 0"
         << endl;
    cout << "  Result: " << symbols::jacobi(294, 9122)
         << endl;

    cout << endl;

    cout << "jacobi(532, 8751) = 1"
         << endl;
    cout << "  Result: " << symbols::jacobi(532, 8751)
         << endl;

    cout << endl;

    cout << "jacobi(2385, 18454) = 1"
         << endl;
    cout << "  Result: " << symbols::jacobi(2385, 18454)
         << endl;

    cout << endl;

    cout << "jacobi(875490234, 584063451) = 0"
         << endl;
    cout << "  Result: " << symbols::jacobi(875490234, 584063451)
         << endl;
}

void leastCommonMultiple(void) {
    cout << "Least Common Multiple (LCM)"
         << endl << endl;

    cout << "lcm(1000, 625) = 5000"
         << endl;
    cout << "  Result: " << lcm(1000, 625)
         << endl;

    cout << endl;

    cout << "lcm(24, 124) = 744"
         << endl;
    cout << "  Result: " << lcm(24, 124)
         << endl;

    cout << endl;

    cout << "lcm(9, 12) = 36"
         << endl;
    cout << "  Result: " << lcm(9, 12)
         << endl;
}

void logarithms(void) {
    cout << "Logarithms"
         << endl << endl;

    cout << "log2(10) = 3.3219"
         << endl;
    cout << "  Result: " << setprecision(5) << log(10, 2)
         << endl;

    cout << endl;

    cout << "log13(27) = 1.28495"
         << endl;
    cout << "  Result: " << setprecision(6) << log(27, 13)
         << endl;
}

void modularExponentiation(void) {
    cout << "Modular Exponentiation"
         << endl << endl;

    cout << "2^611 mod 37 = 19"
         << endl;
    cout << "  Result: " << pow_mod(2, 611, 37)
         << endl;

    cout << endl;

    cout << "23^8912 mod 743 = 86"
         << endl;
    cout << "  Result: " << pow_mod(23, 8912, 743)
         << endl;

    cout << endl;

    cout << "41^9938567 mod 51 = 29"
         << endl;
    cout << "  Result: " << pow_mod(41, 9938567, 51)
         << endl;
}

void separator(void) {
    cout << endl << "- - - - - - - - - - - - -"
         << endl << endl;
}
