#include "Math.h"

namespace Zmpo {
    unsigned int Math::power(unsigned int x, unsigned int n) {
        unsigned int partialPower;

        if (n == 0) {
            return 1;
        } else {
            partialPower = power(x, n / 2);
            if (n % 2 == 0) {
                return partialPower * partialPower;
            } else {
                return x * partialPower * partialPower;
            }
        }
    }
}
