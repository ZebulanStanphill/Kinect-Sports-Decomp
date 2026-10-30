#include "havok/hkBase.h"
#include "havok/hkReferencedObject.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<hkReferencedObject *> { public: HK_FORCE_INLINE void push(hkReferencedObject *const &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(hkReferencedObject *));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };
struct Obj_82D9CDC0 { char pad[0x14]; hkReferencedObject *slot[2]; char pad2[0x1c]; Output arr; };
extern "C" void fn_82D9CDC0(Obj_82D9CDC0 *self, hkReferencedObject *v) {
 if (self->arr.m_size < 2) {
  if (self->slot[self->arr.m_size] == 0) { self->slot[self->arr.m_size] = v; v->addReference(); }
 }
 self->arr.push(v);
 v->addReference();
}
