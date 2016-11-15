#pragma once

#ifndef CRYPT_TOOLS_H
#define CRYPT_TOOLS_H

namespace ventaquil {
    namespace crypt {
        /**
         * @param int left
         * @param int right
         * @param unsigned int mod
         * @return boolean
         */
        bool congruence(int left, int right, unsigned int mod);

        /**
         * @param unsigned int left
         * @param unsigned int right
         * @param unsigned int mod
         * @return boolean
         */
        bool congruence(unsigned int left, unsigned int right, unsigned int mod);

        /**
         * @param unsigned int a
         * @param unsigned int b
         * @return unsigned int
         */
        unsigned int gcd(unsigned int a, unsigned int b);

        /**
         * @param unsigned int a
         * @param unsigned int b
         * @return unsigned int
         */
        unsigned int lcm(unsigned int a, unsigned int b);

        /**
         * @param double value
         * @param double base
         * @return double
         */
        double log(double value, double base);

        /**
         * @param unsigned integer value
         * @param unsigned integer index
         * @param unsigned integer mod
         * @return unsigned integer
         */
        unsigned int pow_mod(unsigned int value, unsigned int index, unsigned int mod);
    }
}

#endif //CRYPT_TOOLS_H
