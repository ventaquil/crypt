#pragma once

#ifndef CRYPT_CONGRUENCES_H
#define CRYPT_CONGRUENCES_H

namespace ventaquil {
    namespace crypt {
        namespace tools {
            /**
             * @param long long int left
             * @param long long int right
             * @param unsigned long long int modulo
             * @return boolean
             */
            bool congruence(long long int left, long long int right, unsigned long long int modulo);

            /**
             * @param long long int number
             * @param long long int modulo
             * @return unsigned long long int
             */
            unsigned long long int mod(long long int number, long long int modulo);
        }
    }
}

#endif //CRYPT_CONGRUENCES_H
