#include "havok/hkBase.h"
extern "C" void fn_82CE63B0(hkMemoryAllocator *,void *,int);
template <typename T> static HK_FORCE_INLINE void constructWithCopy(T *t, int n, const T &tcopy) { for (int i = 0; i < n; ++i) t[i] = tcopy; }
class Output : public hkArrayBase<int> { public: HK_FORCE_INLINE float push(const int &v) {
 hkMemoryAllocator &alloc=hkMemoryRouter::getInstance().heap();
 if (m_size == getCapacity()) fn_82CE63B0(&alloc,this,sizeof(int));
 float r = 1.0f;
 constructWithCopy(m_data + m_size, 1, v);
 m_size++;
 return r;
} };
struct Obj_82D2B7D0 { char pad[4]; Output *arr; };
extern "C" float fn_82D2B7D0(Obj_82D2B7D0 *self, int v) {
 return self->arr->push(v);
}
