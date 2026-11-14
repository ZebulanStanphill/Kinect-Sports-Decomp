// erase(first, last) of the XLip library's vector of 12-byte elements: moves the tail down
// over the erased range, destroys what is left over at the end and returns an
// iterator to the first position.
#include "game/VectorBase_8266A4A8.h"

struct Element_82666C38 {
    int data[3];
};

typedef Vector_8266A4A8<Element_82666C38> Vector;

extern "C" {
unsigned char fn_82668EA0(const Iter_8266A4A8 *left, const Iter_8266A4A8 *right);
Element_82666C38 *fn_826678F8(Element_82666C38 *first, Element_82666C38 *last, Element_82666C38 *dest);
void fn_82668E00(Vector *self, Element_82666C38 *first, Element_82666C38 *last);
}

extern "C" Iter_8266A4A8 fn_82666C38(Vector *self, Element_82666C38 *first, Element_82666C38 *last)
{
    Iter_8266A4A8 firstIt = self->MakeIter(first);
    Iter_8266A4A8 lastIt = self->MakeIter(last);

    if (fn_82668EA0(&firstIt, &lastIt)) {
        Element_82666C38 *newLast = fn_826678F8((Element_82666C38 *)lastIt.ptr, self->last, (Element_82666C38 *)firstIt.ptr);
        fn_82668E00(self, newLast, self->last);
        self->last = newLast;
    }
    return firstIt;
}
