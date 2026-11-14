// erase(where) of the XLip library's vector of 4-byte elements: moves the
// tail down by one, destroys the last element and returns an iterator to the
// position.
#include "game/VectorBase_8266A4A8.h"

typedef Vector_8266A4A8<int> Vector;

extern "C" {
void fn_82669C68(int *first, int *last, int *dest);
void fn_82668DC0(Vector *self, int *first, int *last);
}

extern "C" Iter_8266A4A8 fn_8266A420(Vector *self, int *where)
{
    fn_82669C68(where + 1, self->last, where);
    fn_82668DC0(self, self->last - 1, self->last);
    --self->last;
    return self->MakeIter(where);
}
