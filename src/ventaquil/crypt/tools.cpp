#include "tools.h"
#include <cmath>
#include <cstdlib>

namespace ventaquil {
    namespace crypt {
        /**
         * @param int left
         * @param int right
         * @param unsigned int mod
         * @return boolean
         */
        bool congruence(int left, int right, unsigned int mod) {
            unsigned int l;
            unsigned int r;

            if (left < 0) {
                l = abs((unsigned int) floor((double) left / mod)) * mod + left;
            } else {
                l = left % mod;
            }

            if (right < 0) {
                r = abs((unsigned int) floor((double) right / mod)) * mod + right;
            } else {
                r = right % mod;
            }

            return congruence(l, r, mod);
        }

        /**
         * @param unsigned int left
         * @param unsigned int right
         * @param unsigned int mod
         * @return boolean
         */
        bool congruence(unsigned int left, unsigned int right, unsigned int mod) {
            return ((left - right) % mod) == 0;
        }

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
    }
}
