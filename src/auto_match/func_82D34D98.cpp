#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<short> { public: HK_FORCE_INLINE void push(const short &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(short));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };
struct Obj_82D34D98 { char pad[0xc]; Output arr; };
extern "C" void fn_82D34D98(Obj_82D34D98 *self, short v) {
 self->arr.push(v);
}
