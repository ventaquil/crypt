#include "tools.h"
#include <cmath>

namespace ventaquil {
    namespace crypt {
        namespace tools {
            /**
             * @param unsigned int a
             * @param unsigned int b
             * @return unsigned int
             */
            unsigned int gcd(unsigned int a, unsigned int b) {
                if (a < b) {
                    return gcd(b, a);
                } else if (b == 0) {
                    return a;
                } else {
                    return gcd(b, a % b);
                }
            }

            /**
             * @param unsigned int a
             * @param unsigned int b
             * @return unsigned int
             */
            unsigned int lcm(unsigned int a, unsigned int b) {
                return (a * b) / gcd(a, b);
            }

            /**
             * @param double value
             * @param double base
             * @return double
             */
            double log(double value, double base) {
                return ::log(value) / ::log(base);
            }

            /**
             * @param unsigned integer value
             * @param unsigned integer index
             * @param unsigned integer mod
             * @return unsigned integer
             */
            unsigned int pow_mod(unsigned int value, unsigned int index, unsigned int mod) {
                if (index == 0) {
                    return 1;
                } else if (index == 1) {
                    return value % mod;
                } else {
                    unsigned int p = 1;
                    unsigned int result = 1;

                    while (index > 0) {
                        if ((index % 2) == 1) {
                            for (unsigned int i = 0; i < p; i++) {
                                result *= value;
                                result %= mod;
                            }
                        }

                        p <<= 1;

                        index >>= 1;
                    }

                    return result;
                }
            }

            /**
             * @param double n
             * @param double p
             * @return double
             */
            double round(double n, double p) {
                p = pow(10, p);

                n *= p;
                n = ::round(n);
                n /= p;

                return n;
            }
        }
    }
}
