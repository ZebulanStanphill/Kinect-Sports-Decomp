#include "game/Vec_83037438.h"

extern "C" unsigned char fn_83037168(Vec_83037438 *, unsigned);

int Vec_83037438::Resize(unsigned n)
{
    int size = end - begin;
    if (n < size) {
        end = begin + n;
        return 1;
    }
    if (n < cap || fn_83037168(this, n - size) != 0) {
        if (size < n) {
            int i = n - size;
            int off = size;
            Elem_83037438 *p;
            do {
                p = begin + off;
                if (p != 0) {
                    p->b = 0;
                    p->a = 0;
                    p->c = 0;
                }
                off++;
                i--;
            } while (i != 0);
        }
        end = begin + n;
        return 1;
    }
    return 0;
}
