// Grow a deque's circular block map with the system allocator.
// The two-byte placeholder element fixes the block width at eight elements.
// Move the existing block pointers around the new map, initialize its empty
// slots, and release the old map through the system.

#include <deque>
#include "game/Allocator_825089A0.h"
struct Element_8288FE00 { short value; };
typedef Element_8288FE00 *Block_8288FE00;
struct Deque_8288FE00 { int allocator; Block_8288FE00 *map; unsigned int capacity, offset, size; };
extern "C" __declspec(noreturn) void fn_82F622A8(const char *);
extern "C" void fn_8288FE00(Deque_8288FE00 *self,unsigned int count) {
 
 const unsigned int limit=0x0fffffff;
 if (limit-self->capacity<count) fn_82F622A8("deque<T> too long");
 unsigned int growth=self->capacity/2;
 if (growth<8) growth=8;
 if (count<growth && self->capacity<=limit-growth) count=growth;
 unsigned int start=self->offset/8;
 Allocator_825089A0<Block_8288FE00,1> alloc;
 Block_8288FE00 *map=alloc.allocate(self->capacity+count);
 Block_8288FE00 *dest=std::_Uninitialized_copy(self->map+start,self->map+self->capacity,map+start,alloc);
 if (start<=count) {
  dest=std::_Uninitialized_copy(self->map,self->map+start,dest,alloc);
  std::_Uninitialized_default_fill_n(dest,count-start,(Block_8288FE00 *)0,alloc); std::_Uninitialized_default_fill_n(map,start,(Block_8288FE00 *)0,alloc);
 } else {
  std::_Uninitialized_copy(self->map,self->map+count,dest,alloc);
  dest=std::_Uninitialized_copy(self->map+count,self->map+start,map,alloc);
  std::_Uninitialized_default_fill_n(dest,count,(Block_8288FE00 *)0,alloc);
 }
 Block_8288FE00 *old=self->map;
 if (old) fn_825089A0()->vf28(old);
 self->map=map;
 self->capacity=count+self->capacity;
}
