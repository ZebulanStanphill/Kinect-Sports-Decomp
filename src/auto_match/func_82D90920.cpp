#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<void *> { public: HK_FORCE_INLINE void push(void *const &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(void *));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };

struct Inner_82D90920 { char pad[0x22]; unsigned short slot; char pad2[2]; unsigned char flags; };
struct Owner_82D90920 {
 char pad[0x40]; Output list;
};

extern "C" void fn_82D90920(Owner_82D90920 *self, Inner_82D90920 *in) {
 unsigned char f = in->flags;
 if ((f & 0x30) == 0 && (f & 0xffffffc0u) != 0) {
  in->flags = (f & 0xf3) | 4;
 }
 in->flags = (in->flags & 0xcf) | 0x10;
 if (in->slot == 0xffff) {
  in->slot = (unsigned short)self->list.m_size;
  self->list.push(in);
 }
}
