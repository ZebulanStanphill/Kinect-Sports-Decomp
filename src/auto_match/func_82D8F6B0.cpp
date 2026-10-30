#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);
extern "C" void fn_82DAF6D0(void *, void *);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<void *> { public: HK_FORCE_INLINE void push(void *const &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(void *));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };

struct Item_82D8F6B0 : public hkReferencedObject { char pad[4]; void *key; };
struct Inner_82D8F6B0 { char pad[0x22]; unsigned short slot; char pad2; unsigned char flags; };
struct Owner_82D8F6B0 {
 char pad[0x20]; Inner_82D8F6B0 *inner; char pad2[0x1c]; Output list;
};
struct Src_82D8F6B0 {
 char pad[0x208]; Item_82D8F6B0 **items; unsigned short count;
};

extern "C" void fn_82D8F6B0(Owner_82D8F6B0 *self, Src_82D8F6B0 *src, Output *out) {
 for (int i = 0; i < src->count; i++) {
  Item_82D8F6B0 *item = src->items[i];
  if (item->key == self->inner) {
   out->push(item);
   item->addReference();
   fn_82DAF6D0(self->inner, item);
   self->inner->flags = (self->inner->flags & 0xf3) | 4;
   Inner_82D8F6B0 *in = self->inner;
   if (in->slot == 0xffff) {
    in->slot = (unsigned short)self->list.m_size;
    self->list.push(in);
   }
  }
 }
}
