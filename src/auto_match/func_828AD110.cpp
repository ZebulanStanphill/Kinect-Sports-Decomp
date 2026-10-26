// Allocates and constructs a 0x230-byte object through the system allocator,
// then stores it in the destination owner. The object type is not yet known.
#include <new>
#include "game/Allocator_825089A0.h"
struct Object_828AD110;
extern "C" Object_828AD110 *fn_828EF7B8(void *, const void *);
extern "C" Object_828AD110 **fn_828AD110(Object_828AD110 **self, const void *other)
{
    void *block = fn_825089A0()->vf24(0x230, 1);
    Object_828AD110 *object = block ? fn_828EF7B8(block, other) : 0;
    *self = object;
    return self;
}
