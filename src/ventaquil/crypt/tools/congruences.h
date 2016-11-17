#pragma once

#ifndef CRYPT_CONGRUENCES_H
#define CRYPT_CONGRUENCES_H

namespace ventaquil {
    namespace crypt {
        namespace tools {
            /**
             * @param int left
             * @param int right
             * @param unsigned int modulo
             * @return boolean
             */
            bool congruence(int left, int right, unsigned int modulo);

            /**
             * @param unsigned int left
             * @param unsigned int right
             * @param unsigned int modulo
             * @return boolean
             */
            bool congruence(unsigned int left, unsigned int right, unsigned int modulo);

            /**
             * @param int number
             * @param int modulo
             * @return unsigned int
             */
            unsigned int mod(int number, int modulo);

            /**
             * @param int number
             * @param unsigned int modulo
             * @return unsigned int
             */
            unsigned int mod(int number, unsigned int modulo);

            /**
             * @param unsigned int number
             * @param unsigned int modulo
             * @return unsigned int
             */
            unsigned int mod(unsigned int number, unsigned int modulo);
        }
    }
}

#endif //CRYPT_CONGRUENCES_H
