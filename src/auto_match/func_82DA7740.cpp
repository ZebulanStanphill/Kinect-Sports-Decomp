#include "havok/hkBase.h"

struct E_82DA7740 {
    int a, b, c, d, e;
};
typedef hkBool (*Less_82DA7740)(const E_82DA7740 &a, const E_82DA7740 &b);

extern "C" void fn_82DA7740(E_82DA7740 *base, int lo, int hi, Less_82DA7740 cmp)
{
    int i;
    do {
        int j = hi;
        E_82DA7740 pivot;
        i = lo;
        pivot = base[(lo + hi) >> 1];
        do {
            while (cmp(base[i], pivot))
                i++;
            while (cmp(pivot, base[j]))
                j--;
            if (j < i)
                break;
            if (j != i) {
                E_82DA7740 *x = &base[i];
                E_82DA7740 *y = &base[j];
                E_82DA7740 t = *y;
                *y = *x;
                *x = t;
            }
            j--;
            i++;
        } while (i <= j);
        if (lo < j)
            fn_82DA7740(base, lo, j, cmp);
        if (i >= hi)
            return;
        lo = i;
    } while (1);
}
