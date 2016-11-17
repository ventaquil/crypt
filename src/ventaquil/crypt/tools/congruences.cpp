#include "congruences.h"

namespace ventaquil {
    namespace crypt {
        namespace tools {
            /**
             * @param long long int left
             * @param long long int right
             * @param unsigned long long int modulo
             * @return boolean
             */
            bool congruence(long long int left, long long int right, unsigned long long int modulo) {
                return mod((left - right), modulo) == 0;
            }

            /**
             * @param long long int number
             * @param long long int modulo
             * @return unsigned long long int
             */
            unsigned long long int mod(long long int number, long long int modulo) {
                number %= modulo;

                if (number < 0) {
                    number += modulo;
                }

                return (unsigned long long int) number;
            }
        }
    }
}
