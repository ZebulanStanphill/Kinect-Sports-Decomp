// erase(first, last) of the XLip library's vector of 4-byte elements: moves the tail down
// over the erased range, destroys what is left over at the end and returns an
// iterator to the first position.
#include "game/VectorBase_8266A4A8.h"


typedef Vector_8266A4A8<int> Vector;

extern "C" {
unsigned char fn_82668EA0(const Iter_8266A4A8 *left, const Iter_8266A4A8 *right);
int *fn_82669C68(int *first, int *last, int *dest);
void fn_82668DC0(Vector *self, int *first, int *last);
}

extern "C" Iter_8266A4A8 fn_8266AB18(Vector *self, int *first, int *last)
{
    Iter_8266A4A8 firstIt = self->MakeIter(first);
    Iter_8266A4A8 lastIt = self->MakeIter(last);

    if (fn_82668EA0(&firstIt, &lastIt)) {
        int *newLast = fn_82669C68((int *)lastIt.ptr, self->last, (int *)firstIt.ptr);
        fn_82668DC0(self, newLast, self->last);
        self->last = newLast;
    }
    return firstIt;
}
