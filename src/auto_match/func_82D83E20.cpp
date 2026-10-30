#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<int> { public: HK_FORCE_INLINE void push(const int &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(int));
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
} };
struct Obj_82D83E20 { char pad[0x138]; Output arr; };
extern "C" void fn_82D83E20(Obj_82D83E20 *self, int v) {
 self->arr.push(v);
}
