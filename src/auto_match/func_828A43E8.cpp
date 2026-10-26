// Append a four-byte element to a deque using the system allocator.
// Grow the circular map when necessary, allocate a missing four-element block
// with category one, and construct the value before incrementing the size.
// Element_828A43E8 describes the element's storage without assuming its name.

#include <new>
#include "game/Allocator_825089A0.h"
struct Element_828A43E8 { int value; };
struct Deque_828A43E8 { int allocator; Element_828A43E8 **map; unsigned int capacity, offset, size; };
extern "C" void fn_828A3658(Deque_828A43E8 *,unsigned int);
extern "C" void fn_828A43E8(Deque_828A43E8 *self,const Element_828A43E8 *value) {
 if (((self->size+self->offset)&3)==0 && self->capacity <= (self->size+4)/4) fn_828A3658(self,1);
 unsigned int index=self->offset+self->size;
 unsigned int block=index/4;
 if (self->capacity<=block) block-=self->capacity;
 if (!self->map[block]) self->map[block]=(Element_828A43E8 *)fn_825089A0()->vf24(16,1);
 ::new ((void *)(self->map[block]+index%4)) Element_828A43E8(*value);
 ++self->size;
}
