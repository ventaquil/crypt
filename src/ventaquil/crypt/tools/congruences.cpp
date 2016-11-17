#include "congruences.h"

namespace ventaquil {
    namespace crypt {
        namespace tools {
            /**
             * @param int left
             * @param int right
             * @param unsigned int modulo
             * @return boolean
             */
            bool congruence(int left, int right, unsigned int modulo) {
                unsigned int l;
                unsigned int r;

                l = mod(left, modulo);

                r = mod(right, modulo);

                return congruence(l, r, modulo);
            }

            /**
             * @param unsigned int left
             * @param unsigned int right
             * @param unsigned int modulo
             * @return boolean
             */
            bool congruence(unsigned int left, unsigned int right, unsigned int modulo) {
                return mod((left - right), modulo) == 0;
            }

            /**
             * @param int number
             * @param unsigned int modulo
             * @return unsigned int
             */
            unsigned int mod(int number, unsigned int modulo) {
                number %= modulo;

                if (number < 0) {
                    number += modulo;
                }

                return (unsigned int) number;
            }

            /**
             * @param unsigned int number
             * @param unsigned int modulo
             * @return unsigned int
             */
            unsigned int mod(unsigned int number, unsigned int modulo) {
                return number % modulo;
            }
        }
    }
}
