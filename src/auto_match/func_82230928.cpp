// GAcquireInterface's vector deleting destructor: arrays are freed with fn_8265CAA0
// (global operator delete[]), single objects with fn_8265CA20 (global operator delete).
#include "game/Node_8267D248.h"

extern "C" void fn_8265CAA0(void *p);

extern "C" void *fn_82230928(GAcquireInterface *self, unsigned int flags)
{
    if ((flags & 2) != 0) {
        void *block = (char *)self - 4;
        int count = *(int *)block;
        int i;
        GAcquireInterface *p = self + count;
        for (i = count - 1; i >= 0; i--) {
            p--;
            p->GAcquireInterface::~GAcquireInterface();
        }
        if ((flags & 1) != 0) {
            fn_8265CAA0(block);
        }
        return block;
    }
    self->GAcquireInterface::~GAcquireInterface();
    if ((flags & 1) != 0) {
        fn_8265CA20(self);
    }
    return self;
}
