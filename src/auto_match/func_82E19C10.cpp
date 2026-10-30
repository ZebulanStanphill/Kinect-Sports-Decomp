#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
struct Pair_82E19C10 { int a; int b; };
class Output : public hkArrayBase<Pair_82E19C10> { public: HK_FORCE_INLINE void push(const Pair_82E19C10 &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(Pair_82E19C10));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };
extern "C" void fn_82E19C10(Output *self, int a, int b) {
 Pair_82E19C10 v = { a, b };
 self->push(v);
}
