#pragma once

#ifndef CRYPT_TOOLS_H
#define CRYPT_TOOLS_H

namespace ventaquil {
    namespace crypt {
        namespace tools {
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

            /**
             * @param double n
             * @param double p
             * @return double
             */
            double round(double n, double p);
        }
    }
}

#include "tools/congruences.h"

#endif //CRYPT_TOOLS_H
