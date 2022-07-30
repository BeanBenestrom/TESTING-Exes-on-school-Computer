#include "test.h"


namespace utility
{
    int E(int n)
    {
        if (n <= 0) { return 0; }
        return n + E(n - 1);
    }
}