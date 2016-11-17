#include "symbols.h"
#include "congruences.h"

namespace ventaquil {
    namespace crypt {
        namespace tools {
            namespace symbols {
                /**
                 * @param long long int a
                 * @param long long int n
                 * @return long long int
                 */
                long long int jacobi(long long int a, long long int n) {
                    if ((a == 0) || (n == 0)) {
                        return 0;
                    }

                    if (a == 1) {
                        return 1;
                    }

                    if ((a == -1) && congruence(n, 1, 4)) {
                        return 1;
                    }

                    if ((a == -1) && congruence(n, 3, 4)) {
                        return -1;
                    }

                    if ((a == 2) && (congruence(n, 1, 8) || congruence(n, 7, 8))) {
                        return 1;
                    }

                    if ((a == 2) && (congruence(n, 3, 8) || congruence(n, 5, 8))) {
                        return -1;
                    }

                    if (a >= n) {
                        return jacobi(mod(a, n), n);
                    }

                    if (((a % 2) == 0) && (a > 2)) {
                        return jacobi(2, n) * jacobi(a / 2, n);
                    }

                    return ((a % 4 == 3) && (n % 4 == 3)) ? -jacobi(n, a) : jacobi(n, a);
                }
            }
        }
    }
}
