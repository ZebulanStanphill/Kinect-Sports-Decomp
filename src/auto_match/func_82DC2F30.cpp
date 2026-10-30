#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *, void *, int);

template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<int> { public: HK_FORCE_INLINE void push(const int &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(int));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };

struct Inner_82DC2F30 { char pad[0x1c]; Output list; };
struct Owner_82DC2F30 { int pad; Inner_82DC2F30 *inner; int count; };

extern "C" void fn_82DC2F30(Owner_82DC2F30 *self) {
 Inner_82DC2F30 *in = self->inner;
 self->count = self->count - 1;
 in->list.push(0x17);
}
